/****************************************************************************
** Meta object code from reading C++ file 'transitionwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ui/transitionwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transitionwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_transitionWidget_t {
    QByteArrayData data[18];
    char stringdata0[437];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_transitionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_transitionWidget_t qt_meta_stringdata_transitionWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "transitionWidget"
QT_MOC_LITERAL(1, 17, 26), // "on_lengthSpin_valueChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 4), // "arg1"
QT_MOC_LITERAL(4, 50, 36), // "on_transitionBox_currentIndex..."
QT_MOC_LITERAL(5, 87, 5), // "index"
QT_MOC_LITERAL(6, 93, 26), // "on_changeSpin_valueChanged"
QT_MOC_LITERAL(7, 120, 35), // "on_quadraticBox_currentIndexC..."
QT_MOC_LITERAL(8, 156, 33), // "on_quarticBox_currentIndexCha..."
QT_MOC_LITERAL(9, 190, 27), // "on_quarticSpin_valueChanged"
QT_MOC_LITERAL(10, 218, 33), // "on_quinticBox_currentIndexCha..."
QT_MOC_LITERAL(11, 252, 27), // "on_quinticSpin_valueChanged"
QT_MOC_LITERAL(12, 280, 26), // "on_centerSpin_valueChanged"
QT_MOC_LITERAL(13, 307, 27), // "on_tensionSpin_valueChanged"
QT_MOC_LITERAL(14, 335, 24), // "on_appendButton_released"
QT_MOC_LITERAL(15, 360, 25), // "on_prependButton_released"
QT_MOC_LITERAL(16, 386, 24), // "on_removeButton_released"
QT_MOC_LITERAL(17, 411, 25) // "on_lockCheck_stateChanged"

    },
    "transitionWidget\0on_lengthSpin_valueChanged\0"
    "\0arg1\0on_transitionBox_currentIndexChanged\0"
    "index\0on_changeSpin_valueChanged\0"
    "on_quadraticBox_currentIndexChanged\0"
    "on_quarticBox_currentIndexChanged\0"
    "on_quarticSpin_valueChanged\0"
    "on_quinticBox_currentIndexChanged\0"
    "on_quinticSpin_valueChanged\0"
    "on_centerSpin_valueChanged\0"
    "on_tensionSpin_valueChanged\0"
    "on_appendButton_released\0"
    "on_prependButton_released\0"
    "on_removeButton_released\0"
    "on_lockCheck_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_transitionWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x0a /* Public */,
       4,    1,   87,    2, 0x0a /* Public */,
       6,    1,   90,    2, 0x0a /* Public */,
       7,    1,   93,    2, 0x0a /* Public */,
       8,    1,   96,    2, 0x0a /* Public */,
       9,    1,   99,    2, 0x0a /* Public */,
      10,    1,  102,    2, 0x0a /* Public */,
      11,    1,  105,    2, 0x0a /* Public */,
      12,    1,  108,    2, 0x0a /* Public */,
      13,    1,  111,    2, 0x0a /* Public */,
      14,    0,  114,    2, 0x0a /* Public */,
      15,    0,  115,    2, 0x0a /* Public */,
      16,    0,  116,    2, 0x0a /* Public */,
      17,    1,  117,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void transitionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<transitionWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_lengthSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->on_transitionBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_changeSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->on_quadraticBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_quarticBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_quarticSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_quinticBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_quinticSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->on_centerSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->on_tensionSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->on_appendButton_released(); break;
        case 11: _t->on_prependButton_released(); break;
        case 12: _t->on_removeButton_released(); break;
        case 13: _t->on_lockCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject transitionWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_transitionWidget.data,
    qt_meta_data_transitionWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *transitionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *transitionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_transitionWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int transitionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
