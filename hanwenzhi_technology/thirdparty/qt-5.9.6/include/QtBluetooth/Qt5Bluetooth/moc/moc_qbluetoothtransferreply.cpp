/****************************************************************************
** Meta object code from reading C++ file 'qbluetoothtransferreply.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qbluetoothtransferreply.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbluetoothtransferreply.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QBluetoothTransferReply_t {
    QByteArrayData data[20];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBluetoothTransferReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBluetoothTransferReply_t qt_meta_stringdata_QBluetoothTransferReply = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QBluetoothTransferReply"
QT_MOC_LITERAL(1, 24, 8), // "finished"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 24), // "QBluetoothTransferReply*"
QT_MOC_LITERAL(4, 59, 16), // "transferProgress"
QT_MOC_LITERAL(5, 76, 16), // "bytesTransferred"
QT_MOC_LITERAL(6, 93, 10), // "bytesTotal"
QT_MOC_LITERAL(7, 104, 5), // "error"
QT_MOC_LITERAL(8, 110, 38), // "QBluetoothTransferReply::Tran..."
QT_MOC_LITERAL(9, 149, 9), // "lastError"
QT_MOC_LITERAL(10, 159, 5), // "abort"
QT_MOC_LITERAL(11, 165, 13), // "TransferError"
QT_MOC_LITERAL(12, 179, 7), // "NoError"
QT_MOC_LITERAL(13, 187, 12), // "UnknownError"
QT_MOC_LITERAL(14, 200, 17), // "FileNotFoundError"
QT_MOC_LITERAL(15, 218, 17), // "HostNotFoundError"
QT_MOC_LITERAL(16, 236, 25), // "UserCanceledTransferError"
QT_MOC_LITERAL(17, 262, 24), // "IODeviceNotReadableError"
QT_MOC_LITERAL(18, 287, 17), // "ResourceBusyError"
QT_MOC_LITERAL(19, 305, 12) // "SessionError"

    },
    "QBluetoothTransferReply\0finished\0\0"
    "QBluetoothTransferReply*\0transferProgress\0"
    "bytesTransferred\0bytesTotal\0error\0"
    "QBluetoothTransferReply::TransferError\0"
    "lastError\0abort\0TransferError\0NoError\0"
    "UnknownError\0FileNotFoundError\0"
    "HostNotFoundError\0UserCanceledTransferError\0"
    "IODeviceNotReadableError\0ResourceBusyError\0"
    "SessionError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBluetoothTransferReply[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       1,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    2,   37,    2, 0x06 /* Public */,
       7,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,

 // enums: name, flags, count, data
      11, 0x0,    8,   50,

 // enum data: key, value
      12, uint(QBluetoothTransferReply::NoError),
      13, uint(QBluetoothTransferReply::UnknownError),
      14, uint(QBluetoothTransferReply::FileNotFoundError),
      15, uint(QBluetoothTransferReply::HostNotFoundError),
      16, uint(QBluetoothTransferReply::UserCanceledTransferError),
      17, uint(QBluetoothTransferReply::IODeviceNotReadableError),
      18, uint(QBluetoothTransferReply::ResourceBusyError),
      19, uint(QBluetoothTransferReply::SessionError),

       0        // eod
};

void QBluetoothTransferReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBluetoothTransferReply *_t = static_cast<QBluetoothTransferReply *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< QBluetoothTransferReply*(*)>(_a[1]))); break;
        case 1: _t->transferProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->error((*reinterpret_cast< QBluetoothTransferReply::TransferError(*)>(_a[1]))); break;
        case 3: _t->abort(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothTransferReply* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothTransferReply::TransferError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QBluetoothTransferReply::*_t)(QBluetoothTransferReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBluetoothTransferReply::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QBluetoothTransferReply::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBluetoothTransferReply::transferProgress)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QBluetoothTransferReply::*_t)(QBluetoothTransferReply::TransferError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QBluetoothTransferReply::error)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QBluetoothTransferReply::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QBluetoothTransferReply.data,
      qt_meta_data_QBluetoothTransferReply,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QBluetoothTransferReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBluetoothTransferReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QBluetoothTransferReply.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QBluetoothTransferReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QBluetoothTransferReply::finished(QBluetoothTransferReply * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QBluetoothTransferReply::transferProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QBluetoothTransferReply::error(QBluetoothTransferReply::TransferError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
