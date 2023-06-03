/****************************************************************************
** Meta object code from reading C++ file 'qmodbusreply.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmodbusreply.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmodbusreply.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QModbusReply_t {
    QByteArrayData data[9];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QModbusReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QModbusReply_t qt_meta_stringdata_QModbusReply = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QModbusReply"
QT_MOC_LITERAL(1, 13, 8), // "finished"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "errorOccurred"
QT_MOC_LITERAL(4, 37, 20), // "QModbusDevice::Error"
QT_MOC_LITERAL(5, 58, 5), // "error"
QT_MOC_LITERAL(6, 64, 9), // "ReplyType"
QT_MOC_LITERAL(7, 74, 3), // "Raw"
QT_MOC_LITERAL(8, 78, 6) // "Common"

    },
    "QModbusReply\0finished\0\0errorOccurred\0"
    "QModbusDevice::Error\0error\0ReplyType\0"
    "Raw\0Common"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QModbusReply[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   28, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // enums: name, flags, count, data
       6, 0x0,    2,   32,

 // enum data: key, value
       7, uint(QModbusReply::Raw),
       8, uint(QModbusReply::Common),

       0        // eod
};

void QModbusReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QModbusReply *_t = static_cast<QModbusReply *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->errorOccurred((*reinterpret_cast< QModbusDevice::Error(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QModbusReply::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModbusReply::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QModbusReply::*_t)(QModbusDevice::Error );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModbusReply::errorOccurred)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QModbusReply::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QModbusReply.data,
      qt_meta_data_QModbusReply,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QModbusReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QModbusReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QModbusReply.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QModbusReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QModbusReply::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QModbusReply::errorOccurred(QModbusDevice::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
