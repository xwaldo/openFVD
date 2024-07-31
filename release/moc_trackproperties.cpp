/****************************************************************************
** Meta object code from reading C++ file 'trackproperties.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.14)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../ui/trackproperties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.14. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrackProperties_t {
    QByteArrayData data[17];
    char stringdata0[392];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackProperties_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackProperties_t qt_meta_stringdata_TrackProperties = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TrackProperties"
QT_MOC_LITERAL(1, 16, 27), // "on_frictionBox_valueChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 4), // "arg1"
QT_MOC_LITERAL(4, 50, 28), // "on_heartlineBox_valueChanged"
QT_MOC_LITERAL(5, 79, 30), // "on_defaultColorButton_released"
QT_MOC_LITERAL(6, 110, 23), // "ondefaultColor_received"
QT_MOC_LITERAL(7, 134, 30), // "on_sectionColorButton_released"
QT_MOC_LITERAL(8, 165, 23), // "onsectionColor_received"
QT_MOC_LITERAL(9, 189, 33), // "on_transitionColorButton_rele..."
QT_MOC_LITERAL(10, 223, 26), // "ontransitionColor_received"
QT_MOC_LITERAL(11, 250, 30), // "on_drawBox_currentIndexChanged"
QT_MOC_LITERAL(12, 281, 5), // "index"
QT_MOC_LITERAL(13, 287, 31), // "on_styleBox_currentIndexChanged"
QT_MOC_LITERAL(14, 319, 28), // "on_wireframeBox_stateChanged"
QT_MOC_LITERAL(15, 348, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(16, 370, 21) // "on_buttonBox_rejected"

    },
    "TrackProperties\0on_frictionBox_valueChanged\0"
    "\0arg1\0on_heartlineBox_valueChanged\0"
    "on_defaultColorButton_released\0"
    "ondefaultColor_received\0"
    "on_sectionColorButton_released\0"
    "onsectionColor_received\0"
    "on_transitionColorButton_released\0"
    "ontransitionColor_received\0"
    "on_drawBox_currentIndexChanged\0index\0"
    "on_styleBox_currentIndexChanged\0"
    "on_wireframeBox_stateChanged\0"
    "on_buttonBox_accepted\0on_buttonBox_rejected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackProperties[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       4,    1,   82,    2, 0x0a /* Public */,
       5,    0,   85,    2, 0x0a /* Public */,
       6,    0,   86,    2, 0x0a /* Public */,
       7,    0,   87,    2, 0x0a /* Public */,
       8,    0,   88,    2, 0x0a /* Public */,
       9,    0,   89,    2, 0x0a /* Public */,
      10,    0,   90,    2, 0x0a /* Public */,
      11,    1,   91,    2, 0x0a /* Public */,
      13,    1,   94,    2, 0x0a /* Public */,
      14,    1,   97,    2, 0x0a /* Public */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TrackProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackProperties *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_frictionBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->on_heartlineBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->on_defaultColorButton_released(); break;
        case 3: _t->ondefaultColor_received(); break;
        case 4: _t->on_sectionColorButton_released(); break;
        case 5: _t->onsectionColor_received(); break;
        case 6: _t->on_transitionColorButton_released(); break;
        case 7: _t->ontransitionColor_received(); break;
        case 8: _t->on_drawBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_styleBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_wireframeBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_buttonBox_accepted(); break;
        case 12: _t->on_buttonBox_rejected(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrackProperties::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TrackProperties.data,
    qt_meta_data_TrackProperties,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrackProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackProperties.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TrackProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
