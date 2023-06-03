/****************************************************************************
** Meta object code from reading C++ file 'qmodbusserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmodbusserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmodbusserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QModbusServer_t {
    QByteArrayData data[18];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QModbusServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QModbusServer_t qt_meta_stringdata_QModbusServer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QModbusServer"
QT_MOC_LITERAL(1, 14, 11), // "dataWritten"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 29), // "QModbusDataUnit::RegisterType"
QT_MOC_LITERAL(4, 57, 5), // "table"
QT_MOC_LITERAL(5, 63, 7), // "address"
QT_MOC_LITERAL(6, 71, 4), // "size"
QT_MOC_LITERAL(7, 76, 6), // "Option"
QT_MOC_LITERAL(8, 83, 18), // "DiagnosticRegister"
QT_MOC_LITERAL(9, 102, 21), // "ExceptionStatusOffset"
QT_MOC_LITERAL(10, 124, 10), // "DeviceBusy"
QT_MOC_LITERAL(11, 135, 19), // "AsciiInputDelimiter"
QT_MOC_LITERAL(12, 155, 14), // "ListenOnlyMode"
QT_MOC_LITERAL(13, 170, 16), // "ServerIdentifier"
QT_MOC_LITERAL(14, 187, 18), // "RunIndicatorStatus"
QT_MOC_LITERAL(15, 206, 14), // "AdditionalData"
QT_MOC_LITERAL(16, 221, 20), // "DeviceIdentification"
QT_MOC_LITERAL(17, 242, 10) // "UserOption"

    },
    "QModbusServer\0dataWritten\0\0"
    "QModbusDataUnit::RegisterType\0table\0"
    "address\0size\0Option\0DiagnosticRegister\0"
    "ExceptionStatusOffset\0DeviceBusy\0"
    "AsciiInputDelimiter\0ListenOnlyMode\0"
    "ServerIdentifier\0RunIndicatorStatus\0"
    "AdditionalData\0DeviceIdentification\0"
    "UserOption"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QModbusServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    5,    6,

 // enums: name, flags, count, data
       7, 0x0,   10,   30,

 // enum data: key, value
       8, uint(QModbusServer::DiagnosticRegister),
       9, uint(QModbusServer::ExceptionStatusOffset),
      10, uint(QModbusServer::DeviceBusy),
      11, uint(QModbusServer::AsciiInputDelimiter),
      12, uint(QModbusServer::ListenOnlyMode),
      13, uint(QModbusServer::ServerIdentifier),
      14, uint(QModbusServer::RunIndicatorStatus),
      15, uint(QModbusServer::AdditionalData),
      16, uint(QModbusServer::DeviceIdentification),
      17, uint(QModbusServer::UserOption),

       0        // eod
};

void QModbusServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QModbusServer *_t = static_cast<QModbusServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataWritten((*reinterpret_cast< QModbusDataUnit::RegisterType(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModbusDataUnit::RegisterType >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QModbusServer::*_t)(QModbusDataUnit::RegisterType , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QModbusServer::dataWritten)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QModbusServer::staticMetaObject = {
    { &QModbusDevice::staticMetaObject, qt_meta_stringdata_QModbusServer.data,
      qt_meta_data_QModbusServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QModbusServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QModbusServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QModbusServer.stringdata0))
        return static_cast<void*>(this);
    return QModbusDevice::qt_metacast(_clname);
}

int QModbusServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QModbusDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QModbusServer::dataWritten(QModbusDataUnit::RegisterType _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
