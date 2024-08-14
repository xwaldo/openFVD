/*
#    FVD++, an advanced coaster design tool for NoLimits
#    Copyright (C) 2012-2015, Stephan "Lenny" Alt <alt.stephan@web.de>
#
#    This program is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#    This program is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "backtrace.h"
#include <signal.h>

#include "lenassert.h"
#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QtDebug>

QApplication *application;

void myMessageHandler(QtMsgType type, const QMessageLogContext &context,
                      const QString &msg) {
  FILE *log = fopen("fvd.log", "a");

  QByteArray localMsg = msg.toLocal8Bit();
  switch (type) {
  case QtDebugMsg:
    printf("%s\n", localMsg.constData());
    fprintf(log, "%s\n", localMsg.constData());
    printf("Debug: %s (%s:%u, %s)\n", localMsg.constData(), context.file,
           context.line, context.function);
    fprintf(log, "Debug: %s (%s:%u, %s)\n", localMsg.constData(), context.file,
            context.line, context.function);
    break;
  case QtWarningMsg:
    printf("%s\n", localMsg.constData());
    fprintf(log, "%s\n", localMsg.constData());
    printf("Debug: %s (%s:%u, %s)\n", localMsg.constData(), context.file,
           context.line, context.function);
    fprintf(log, "Warning: %s (%s:%u, %s)\n", localMsg.constData(),
            context.file, context.line, context.function);
    break;
  case QtCriticalMsg:
    printf("%s\n", localMsg.constData());
    fprintf(log, "%s\n", localMsg.constData());
    printf("Debug: %s (%s:%u, %s)\n", localMsg.constData(), context.file,
           context.line, context.function);
    fprintf(log, "Critical: %s (%s:%u, %s)\n", localMsg.constData(),
            context.file, context.line, context.function);
    break;
  case QtFatalMsg:
    printf("%s\n", localMsg.constData());
    fprintf(log, "%s\n", localMsg.constData());
    printf("Debug: %s (%s:%u, %s)\n", localMsg.constData(), context.file,
           context.line, context.function);
    fprintf(log, "Fatal: %s (%s:%u, %s)\n", localMsg.constData(), context.file,
            context.line, context.function);
    abort();
  }
  fflush(stdout);
  fclose(log);
}

// error callback for the backtrace library
void error_callback(void *data, const char *msg, int errnum) {
  FILE *log = fopen("fvd.log", "a");
  fprintf(log, "Error: %s (error number %d)\n", msg, errnum);
  fclose(log);
}

// full callback for the backtrace library
int full_callback(void *data, uintptr_t pc, const char *filename, int lineno,
                  const char *function) {
  FILE *log = fopen("fvd.log", "a");
  fprintf(log, "PC: %p, Function: %s, File: %s, Line: %d\n", (void *)pc,
          function, filename, lineno);
  fclose(log);
  return 0;
}

// backtrace error handling
void backtrace_error_handling(struct backtrace_state *state) {
  backtrace_full(state, 0, full_callback, error_callback, NULL);
}

void handler(int sig) {
  struct backtrace_state *state;

  // initialize the backtrace state
  state = backtrace_create_state(NULL, 0, error_callback, NULL);

  // print the backtrace
  backtrace_error_handling(state);

  abort();
  //exit(1);
}

int main(int argc, char *argv[]) {
  application = new QApplication(argc, argv);
  qInstallMessageHandler(myMessageHandler);

  application->setStyle("Fusion");
  QPalette darkPalette;
  darkPalette.setColor(QPalette::Window,QColor(53,53,53));
  darkPalette.setColor(QPalette::WindowText,Qt::white);
  darkPalette.setColor(QPalette::Disabled,QPalette::WindowText,QColor(127,127,127));
  darkPalette.setColor(QPalette::Base,QColor(42,42,42));
  darkPalette.setColor(QPalette::AlternateBase,QColor(66,66,66));
  darkPalette.setColor(QPalette::ToolTipBase,Qt::white);
  darkPalette.setColor(QPalette::ToolTipText,Qt::white);
  darkPalette.setColor(QPalette::Text,Qt::white);
  darkPalette.setColor(QPalette::Disabled,QPalette::Text,QColor(127,127,127));
  darkPalette.setColor(QPalette::Dark,QColor(35,35,35));
  darkPalette.setColor(QPalette::Shadow,QColor(20,20,20));
  darkPalette.setColor(QPalette::Button,QColor(53,53,53));
  darkPalette.setColor(QPalette::ButtonText,Qt::white);
  darkPalette.setColor(QPalette::Disabled,QPalette::ButtonText,QColor(127,127,127));
  darkPalette.setColor(QPalette::BrightText,Qt::red);
  darkPalette.setColor(QPalette::Link,QColor(42,130,218));
  darkPalette.setColor(QPalette::Highlight,QColor(42,130,218));
  darkPalette.setColor(QPalette::Disabled,QPalette::Highlight,QColor(80,80,80));
  darkPalette.setColor(QPalette::HighlightedText,Qt::white);
  darkPalette.setColor(QPalette::Disabled,QPalette::HighlightedText,QColor(127,127,127));
 //darkPalette.setColor(QPalette::Mid,QColor(20,20,20));
  application->setPalette(darkPalette);
  QFile qfDarkstyle(":/darkstyle/darkstyle.qss");
  if (qfDarkstyle.open(QIODevice::ReadOnly | QIODevice::Text)) {
      QString qsStylesheet = QString::fromLatin1(qfDarkstyle.readAll());
      application->setStyleSheet("");
      application->setStyleSheet(qsStylesheet);
      qfDarkstyle.close();
  }

  signal(SIGSEGV, handler);

  FILE *log = fopen("fvd.log", "w");
  fprintf(log, "FVD++ v0.8a Logfile\n");
  fclose(log);

  MainWindow w;
  w.show();
  if (argc == 2) {
    QString fileName(argv[1]);
    if (fileName.endsWith(".fvd")) {
      qDebug("Starting FVD++ with project %s", argv[1]);
      w.loadProject(argv[1]);
    }
  }

  return application->exec();
}
