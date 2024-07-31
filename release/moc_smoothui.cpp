/****************************************************************************
** Meta object code from reading C++ file 'smoothui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ui/smoothui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'smoothui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_smoothUi_t {
    QByteArrayData data[15];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_smoothUi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_smoothUi_t qt_meta_stringdata_smoothUi = {
    {
QT_MOC_LITERAL(0, 0, 8), // "smoothUi"
QT_MOC_LITERAL(1, 9, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 38), // "on_smoothUnitTree_itemSelecti..."
QT_MOC_LITERAL(4, 71, 25), // "on_lengthBox_valueChanged"
QT_MOC_LITERAL(5, 97, 4), // "arg1"
QT_MOC_LITERAL(6, 102, 23), // "on_iterBox_valueChanged"
QT_MOC_LITERAL(7, 126, 23), // "on_fromBox_valueChanged"
QT_MOC_LITERAL(8, 150, 21), // "on_toBox_valueChanged"
QT_MOC_LITERAL(9, 172, 29), // "on_smoothUnitTree_itemChanged"
QT_MOC_LITERAL(10, 202, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(11, 219, 4), // "item"
QT_MOC_LITERAL(12, 224, 6), // "column"
QT_MOC_LITERAL(13, 231, 21), // "on_newButton_released"
QT_MOC_LITERAL(14, 253, 24) // "on_removeButton_released"

    },
    "smoothUi\0on_buttonBox_accepted\0\0"
    "on_smoothUnitTree_itemSelectionChanged\0"
    "on_lengthBox_valueChanged\0arg1\0"
    "on_iterBox_valueChanged\0on_fromBox_valueChanged\0"
    "on_toBox_valueChanged\0"
    "on_smoothUnitTree_itemChanged\0"
    "QTreeWidgetItem*\0item\0column\0"
    "on_newButton_released\0on_removeButton_released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_smoothUi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       6,    1,   64,    2, 0x08 /* Private */,
       7,    1,   67,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
       9,    2,   73,    2, 0x08 /* Private */,
      13,    0,   78,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void smoothUi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<smoothUi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_buttonBox_accepted(); break;
        case 1: _t->on_smoothUnitTree_itemSelectionChanged(); break;
        case 2: _t->on_lengthBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->on_iterBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_fromBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_toBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_smoothUnitTree_itemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->on_newButton_released(); break;
        case 8: _t->on_removeButton_released(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject smoothUi::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_smoothUi.data,
    qt_meta_data_smoothUi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *smoothUi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *smoothUi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_smoothUi.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int smoothUi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
