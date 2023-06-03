/****************************************************************************
** Meta object code from reading C++ file 'qchangearbiter_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/Qt3DCore/private/qchangearbiter_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qchangearbiter_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DCore__QChangeArbiter_t {
    QByteArrayData data[8];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DCore__QChangeArbiter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DCore__QChangeArbiter_t qt_meta_stringdata_Qt3DCore__QChangeArbiter = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Qt3DCore::QChangeArbiter"
QT_MOC_LITERAL(1, 25, 10), // "setPostman"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 27), // "Qt3DCore::QAbstractPostman*"
QT_MOC_LITERAL(4, 65, 7), // "postman"
QT_MOC_LITERAL(5, 73, 8), // "setScene"
QT_MOC_LITERAL(6, 82, 17), // "Qt3DCore::QScene*"
QT_MOC_LITERAL(7, 100, 5) // "scene"

    },
    "Qt3DCore::QChangeArbiter\0setPostman\0"
    "\0Qt3DCore::QAbstractPostman*\0postman\0"
    "setScene\0Qt3DCore::QScene*\0scene"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DCore__QChangeArbiter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x02 /* Public */,
       5,    1,   27,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void Qt3DCore::QChangeArbiter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QChangeArbiter *_t = static_cast<QChangeArbiter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPostman((*reinterpret_cast< Qt3DCore::QAbstractPostman*(*)>(_a[1]))); break;
        case 1: _t->setScene((*reinterpret_cast< Qt3DCore::QScene*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Qt3DCore::QChangeArbiter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3DCore__QChangeArbiter.data,
      qt_meta_data_Qt3DCore__QChangeArbiter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DCore::QChangeArbiter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DCore::QChangeArbiter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DCore__QChangeArbiter.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAbstractArbiter"))
        return static_cast< QAbstractArbiter*>(this);
    return QObject::qt_metacast(_clname);
}

int Qt3DCore::QChangeArbiter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
