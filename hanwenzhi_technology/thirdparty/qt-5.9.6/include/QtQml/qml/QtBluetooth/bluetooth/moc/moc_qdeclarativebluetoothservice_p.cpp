/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativebluetoothservice_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarativebluetoothservice_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativebluetoothservice_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeBluetoothService_t {
    QByteArrayData data[21];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeBluetoothService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeBluetoothService_t qt_meta_stringdata_QDeclarativeBluetoothService = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QDeclarativeBluetoothService"
QT_MOC_LITERAL(1, 29, 14), // "detailsChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 17), // "registeredChanged"
QT_MOC_LITERAL(4, 63, 9), // "newClient"
QT_MOC_LITERAL(5, 73, 14), // "new_connection"
QT_MOC_LITERAL(6, 88, 10), // "nextClient"
QT_MOC_LITERAL(7, 99, 28), // "QDeclarativeBluetoothSocket*"
QT_MOC_LITERAL(8, 128, 16), // "assignNextClient"
QT_MOC_LITERAL(9, 145, 3), // "dbs"
QT_MOC_LITERAL(10, 149, 10), // "deviceName"
QT_MOC_LITERAL(11, 160, 13), // "deviceAddress"
QT_MOC_LITERAL(12, 174, 11), // "serviceName"
QT_MOC_LITERAL(13, 186, 18), // "serviceDescription"
QT_MOC_LITERAL(14, 205, 11), // "serviceUuid"
QT_MOC_LITERAL(15, 217, 15), // "serviceProtocol"
QT_MOC_LITERAL(16, 233, 8), // "Protocol"
QT_MOC_LITERAL(17, 242, 10), // "registered"
QT_MOC_LITERAL(18, 253, 14), // "RfcommProtocol"
QT_MOC_LITERAL(19, 268, 13), // "L2CapProtocol"
QT_MOC_LITERAL(20, 282, 15) // "UnknownProtocol"

    },
    "QDeclarativeBluetoothService\0"
    "detailsChanged\0\0registeredChanged\0"
    "newClient\0new_connection\0nextClient\0"
    "QDeclarativeBluetoothSocket*\0"
    "assignNextClient\0dbs\0deviceName\0"
    "deviceAddress\0serviceName\0serviceDescription\0"
    "serviceUuid\0serviceProtocol\0Protocol\0"
    "registered\0RfcommProtocol\0L2CapProtocol\0"
    "UnknownProtocol"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeBluetoothService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       7,   52, // properties
       1,   80, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       6,    0,   48,    2, 0x02 /* Public */,
       8,    1,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 7,
    QMetaType::Void, 0x80000000 | 7,    9,

 // properties: name, type, flags
      10, QMetaType::QString, 0x00495001,
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::QString, 0x00495103,
      14, QMetaType::QString, 0x00495103,
      15, 0x80000000 | 16, 0x0049510b,
      17, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       1,

 // enums: name, flags, count, data
      16, 0x0,    3,   84,

 // enum data: key, value
      18, uint(QDeclarativeBluetoothService::RfcommProtocol),
      19, uint(QDeclarativeBluetoothService::L2CapProtocol),
      20, uint(QDeclarativeBluetoothService::UnknownProtocol),

       0        // eod
};

void QDeclarativeBluetoothService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeBluetoothService *_t = static_cast<QDeclarativeBluetoothService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->detailsChanged(); break;
        case 1: _t->registeredChanged(); break;
        case 2: _t->newClient(); break;
        case 3: _t->new_connection(); break;
        case 4: { QDeclarativeBluetoothSocket* _r = _t->nextClient();
            if (_a[0]) *reinterpret_cast< QDeclarativeBluetoothSocket**>(_a[0]) = std::move(_r); }  break;
        case 5: _t->assignNextClient((*reinterpret_cast< QDeclarativeBluetoothSocket*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDeclarativeBluetoothSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeBluetoothService::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeBluetoothService::detailsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeBluetoothService::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeBluetoothService::registeredChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeBluetoothService::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeBluetoothService::newClient)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeBluetoothService *_t = static_cast<QDeclarativeBluetoothService *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->deviceName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->deviceAddress(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->serviceName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->serviceDescription(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->serviceUuid(); break;
        case 5: *reinterpret_cast< Protocol*>(_v) = _t->serviceProtocol(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isRegistered(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeBluetoothService *_t = static_cast<QDeclarativeBluetoothService *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setDeviceAddress(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setServiceName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setServiceDescription(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setServiceUuid(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setServiceProtocol(*reinterpret_cast< Protocol*>(_v)); break;
        case 6: _t->setRegistered(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeBluetoothService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeBluetoothService.data,
      qt_meta_data_QDeclarativeBluetoothService,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeBluetoothService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeBluetoothService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeBluetoothService.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeBluetoothService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDeclarativeBluetoothService::detailsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativeBluetoothService::registeredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativeBluetoothService::newClient()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
