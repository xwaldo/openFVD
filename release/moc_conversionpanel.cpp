/****************************************************************************
** Meta object code from reading C++ file 'conversionpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ui/conversionpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'conversionpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_conversionPanel_t {
    QByteArrayData data[11];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_conversionPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_conversionPanel_t qt_meta_stringdata_conversionPanel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "conversionPanel"
QT_MOC_LITERAL(1, 16, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(4, 61, 23), // "on_mpsSpin_valueChanged"
QT_MOC_LITERAL(5, 85, 4), // "arg1"
QT_MOC_LITERAL(6, 90, 23), // "on_kphSpin_valueChanged"
QT_MOC_LITERAL(7, 114, 23), // "on_mphSpin_valueChanged"
QT_MOC_LITERAL(8, 138, 25), // "on_meterSpin_valueChanged"
QT_MOC_LITERAL(9, 164, 24), // "on_feetSpin_valueChanged"
QT_MOC_LITERAL(10, 189, 24) // "on_mileSpin_valueChanged"

    },
    "conversionPanel\0on_buttonBox_rejected\0"
    "\0on_buttonBox_accepted\0on_mpsSpin_valueChanged\0"
    "arg1\0on_kphSpin_valueChanged\0"
    "on_mphSpin_valueChanged\0"
    "on_meterSpin_valueChanged\0"
    "on_feetSpin_valueChanged\0"
    "on_mileSpin_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_conversionPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    1,   56,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       7,    1,   62,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
       9,    1,   68,    2, 0x08 /* Private */,
      10,    1,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,

       0        // eod
};

void conversionPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<conversionPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_buttonBox_rejected(); break;
        case 1: _t->on_buttonBox_accepted(); break;
        case 2: _t->on_mpsSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->on_kphSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->on_mphSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_meterSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_feetSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->on_mileSpin_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject conversionPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_conversionPanel.data,
    qt_meta_data_conversionPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *conversionPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *conversionPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_conversionPanel.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int conversionPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
