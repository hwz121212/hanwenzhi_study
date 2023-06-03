/****************************************************************************
** Meta object code from reading C++ file 'main.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../main.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDBusConnectionConstructor_t {
    QByteArrayData data[13];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDBusConnectionConstructor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDBusConnectionConstructor_t qt_meta_stringdata_QDBusConnectionConstructor = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QDBusConnectionConstructor"
QT_MOC_LITERAL(1, 27, 12), // "qscript_call"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "name"
QT_MOC_LITERAL(4, 46, 17), // "disconnectFromBus"
QT_MOC_LITERAL(5, 64, 12), // "connectToBus"
QT_MOC_LITERAL(6, 77, 15), // "QDBusConnection"
QT_MOC_LITERAL(7, 93, 7), // "address"
QT_MOC_LITERAL(8, 101, 24), // "QDBusConnection::BusType"
QT_MOC_LITERAL(9, 126, 4), // "type"
QT_MOC_LITERAL(10, 131, 10), // "sessionBus"
QT_MOC_LITERAL(11, 142, 12), // "QScriptValue"
QT_MOC_LITERAL(12, 155, 9) // "systemBus"

    },
    "QDBusConnectionConstructor\0qscript_call\0"
    "\0name\0disconnectFromBus\0connectToBus\0"
    "QDBusConnection\0address\0"
    "QDBusConnection::BusType\0type\0sessionBus\0"
    "QScriptValue\0systemBus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDBusConnectionConstructor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       5,    2,   40,    2, 0x0a /* Public */,
       5,    2,   45,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QObjectStar, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    0x80000000 | 6, QMetaType::QString, QMetaType::QString,    7,    3,
    0x80000000 | 6, 0x80000000 | 8, QMetaType::QString,    9,    3,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x00095009,
      12, 0x80000000 | 11, 0x00095009,

       0        // eod
};

void QDBusConnectionConstructor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDBusConnectionConstructor *_t = static_cast<QDBusConnectionConstructor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QObject* _r = _t->qscript_call((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->disconnectFromBus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { QDBusConnection _r = _t->connectToBus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusConnection*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusConnection _r = _t->connectToBus((*reinterpret_cast< QDBusConnection::BusType(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusConnection*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDBusConnectionConstructor *_t = static_cast<QDBusConnectionConstructor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QScriptValue*>(_v) = _t->sessionBus(); break;
        case 1: *reinterpret_cast< QScriptValue*>(_v) = _t->systemBus(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDBusConnectionConstructor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDBusConnectionConstructor.data,
      qt_meta_data_QDBusConnectionConstructor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDBusConnectionConstructor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDBusConnectionConstructor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDBusConnectionConstructor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(this);
    return QObject::qt_metacast(_clname);
}

int QDBusConnectionConstructor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QScriptDBusConnection_t {
    QByteArrayData data[22];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScriptDBusConnection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScriptDBusConnection_t qt_meta_stringdata_QScriptDBusConnection = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QScriptDBusConnection"
QT_MOC_LITERAL(1, 22, 4), // "send"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 12), // "QDBusMessage"
QT_MOC_LITERAL(4, 41, 7), // "message"
QT_MOC_LITERAL(5, 49, 4), // "call"
QT_MOC_LITERAL(6, 54, 8), // "callMode"
QT_MOC_LITERAL(7, 63, 7), // "timeout"
QT_MOC_LITERAL(8, 71, 15), // "registerService"
QT_MOC_LITERAL(9, 87, 11), // "serviceName"
QT_MOC_LITERAL(10, 99, 17), // "unregisterService"
QT_MOC_LITERAL(11, 117, 9), // "lastError"
QT_MOC_LITERAL(12, 127, 10), // "QDBusError"
QT_MOC_LITERAL(13, 138, 16), // "unregisterObject"
QT_MOC_LITERAL(14, 155, 4), // "path"
QT_MOC_LITERAL(15, 160, 31), // "QDBusConnection::UnregisterMode"
QT_MOC_LITERAL(16, 192, 4), // "mode"
QT_MOC_LITERAL(17, 197, 18), // "objectRegisteredAt"
QT_MOC_LITERAL(18, 216, 11), // "baseService"
QT_MOC_LITERAL(19, 228, 11), // "isConnected"
QT_MOC_LITERAL(20, 240, 13), // "dbusInterface"
QT_MOC_LITERAL(21, 254, 12) // "QScriptValue"

    },
    "QScriptDBusConnection\0send\0\0QDBusMessage\0"
    "message\0call\0callMode\0timeout\0"
    "registerService\0serviceName\0"
    "unregisterService\0lastError\0QDBusError\0"
    "unregisterObject\0path\0"
    "QDBusConnection::UnregisterMode\0mode\0"
    "objectRegisteredAt\0baseService\0"
    "isConnected\0dbusInterface\0QScriptValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScriptDBusConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       3,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       5,    3,   67,    2, 0x0a /* Public */,
       5,    2,   74,    2, 0x2a /* Public | MethodCloned */,
       5,    1,   79,    2, 0x2a /* Public | MethodCloned */,
       8,    1,   82,    2, 0x0a /* Public */,
      10,    1,   85,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      13,    2,   89,    2, 0x0a /* Public */,
      13,    1,   94,    2, 0x2a /* Public | MethodCloned */,
      17,    1,   97,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3,    4,
    0x80000000 | 3, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    6,    7,
    0x80000000 | 3, 0x80000000 | 3, QMetaType::Int,    4,    6,
    0x80000000 | 3, 0x80000000 | 3,    4,
    QMetaType::Bool, QMetaType::QString,    9,
    QMetaType::Bool, QMetaType::QString,    9,
    0x80000000 | 12,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 15,   14,   16,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::QObjectStar, QMetaType::QString,   14,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00095001,
      19, QMetaType::Bool, 0x00095001,
      20, 0x80000000 | 21, 0x00095009,

       0        // eod
};

void QScriptDBusConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScriptDBusConnection *_t = static_cast<QScriptDBusConnection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->send((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { QDBusMessage _r = _t->call((*reinterpret_cast< const QDBusMessage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusMessage*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusMessage _r = _t->call((*reinterpret_cast< const QDBusMessage(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusMessage*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusMessage _r = _t->call((*reinterpret_cast< const QDBusMessage(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusMessage*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->registerService((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->unregisterService((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusError _r = _t->lastError();
            if (_a[0]) *reinterpret_cast< QDBusError*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->unregisterObject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QDBusConnection::UnregisterMode(*)>(_a[2]))); break;
        case 8: _t->unregisterObject((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: { QObject* _r = _t->objectRegisteredAt((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QScriptDBusConnection *_t = static_cast<QScriptDBusConnection *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->baseService(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isConnected(); break;
        case 2: *reinterpret_cast< QScriptValue*>(_v) = _t->dbusInterface(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QScriptDBusConnection::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScriptDBusConnection.data,
      qt_meta_data_QScriptDBusConnection,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScriptDBusConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScriptDBusConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptDBusConnection.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(this);
    return QObject::qt_metacast(_clname);
}

int QScriptDBusConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QScriptDBusInterfaceConstructor_t {
    QByteArrayData data[8];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScriptDBusInterfaceConstructor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScriptDBusInterfaceConstructor_t qt_meta_stringdata_QScriptDBusInterfaceConstructor = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QScriptDBusInterfaceConstructor"
QT_MOC_LITERAL(1, 32, 12), // "qscript_call"
QT_MOC_LITERAL(2, 45, 12), // "QScriptValue"
QT_MOC_LITERAL(3, 58, 0), // ""
QT_MOC_LITERAL(4, 59, 7), // "service"
QT_MOC_LITERAL(5, 67, 4), // "path"
QT_MOC_LITERAL(6, 72, 9), // "interface"
QT_MOC_LITERAL(7, 82, 4) // "conn"

    },
    "QScriptDBusInterfaceConstructor\0"
    "qscript_call\0QScriptValue\0\0service\0"
    "path\0interface\0conn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScriptDBusInterfaceConstructor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   29,    3, 0x0a /* Public */,
       1,    3,   38,    3, 0x2a /* Public | MethodCloned */,
       1,    2,   45,    3, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 2,    4,    5,    6,    7,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    4,    5,

       0        // eod
};

void QScriptDBusInterfaceConstructor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScriptDBusInterfaceConstructor *_t = static_cast<QScriptDBusInterfaceConstructor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QScriptValue _r = _t->qscript_call((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QScriptValue(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 1: { QScriptValue _r = _t->qscript_call((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 2: { QScriptValue _r = _t->qscript_call((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject QScriptDBusInterfaceConstructor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScriptDBusInterfaceConstructor.data,
      qt_meta_data_QScriptDBusInterfaceConstructor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScriptDBusInterfaceConstructor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScriptDBusInterfaceConstructor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptDBusInterfaceConstructor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(this);
    return QObject::qt_metacast(_clname);
}

int QScriptDBusInterfaceConstructor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_QScriptDBusMessageConstructor_t {
    QByteArrayData data[18];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScriptDBusMessageConstructor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScriptDBusMessageConstructor_t qt_meta_stringdata_QScriptDBusMessageConstructor = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QScriptDBusMessageConstructor"
QT_MOC_LITERAL(1, 30, 12), // "createSignal"
QT_MOC_LITERAL(2, 43, 12), // "QDBusMessage"
QT_MOC_LITERAL(3, 56, 0), // ""
QT_MOC_LITERAL(4, 57, 4), // "path"
QT_MOC_LITERAL(5, 62, 9), // "interface"
QT_MOC_LITERAL(6, 72, 4), // "name"
QT_MOC_LITERAL(7, 77, 16), // "createMethodCall"
QT_MOC_LITERAL(8, 94, 11), // "destination"
QT_MOC_LITERAL(9, 106, 6), // "method"
QT_MOC_LITERAL(10, 113, 11), // "createError"
QT_MOC_LITERAL(11, 125, 3), // "msg"
QT_MOC_LITERAL(12, 129, 11), // "MessageType"
QT_MOC_LITERAL(13, 141, 14), // "InvalidMessage"
QT_MOC_LITERAL(14, 156, 17), // "MethodCallMessage"
QT_MOC_LITERAL(15, 174, 12), // "ReplyMessage"
QT_MOC_LITERAL(16, 187, 12), // "ErrorMessage"
QT_MOC_LITERAL(17, 200, 13) // "SignalMessage"

    },
    "QScriptDBusMessageConstructor\0"
    "createSignal\0QDBusMessage\0\0path\0"
    "interface\0name\0createMethodCall\0"
    "destination\0method\0createError\0msg\0"
    "MessageType\0InvalidMessage\0MethodCallMessage\0"
    "ReplyMessage\0ErrorMessage\0SignalMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScriptDBusMessageConstructor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   29,    3, 0x0a /* Public */,
       7,    4,   36,    3, 0x0a /* Public */,
      10,    2,   45,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString,    4,    5,    6,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    4,    5,    9,
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    6,   11,

 // enums: name, flags, count, data
      12, 0x0,    5,   54,

 // enum data: key, value
      13, uint(QScriptDBusMessageConstructor::InvalidMessage),
      14, uint(QScriptDBusMessageConstructor::MethodCallMessage),
      15, uint(QScriptDBusMessageConstructor::ReplyMessage),
      16, uint(QScriptDBusMessageConstructor::ErrorMessage),
      17, uint(QScriptDBusMessageConstructor::SignalMessage),

       0        // eod
};

void QScriptDBusMessageConstructor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScriptDBusMessageConstructor *_t = static_cast<QScriptDBusMessageConstructor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QDBusMessage _r = _t->createSignal((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusMessage*>(_a[0]) = std::move(_r); }  break;
        case 1: { QDBusMessage _r = _t->createMethodCall((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QDBusMessage*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusMessage _r = _t->createError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusMessage*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject QScriptDBusMessageConstructor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScriptDBusMessageConstructor.data,
      qt_meta_data_QScriptDBusMessageConstructor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScriptDBusMessageConstructor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScriptDBusMessageConstructor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptDBusMessageConstructor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(this);
    return QObject::qt_metacast(_clname);
}

int QScriptDBusMessageConstructor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_QtDBusScriptPlugin_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDBusScriptPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDBusScriptPlugin_t qt_meta_stringdata_QtDBusScriptPlugin = {
    {
QT_MOC_LITERAL(0, 0, 18) // "QtDBusScriptPlugin"

    },
    "QtDBusScriptPlugin"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDBusScriptPlugin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QtDBusScriptPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QtDBusScriptPlugin::staticMetaObject = {
    { &QScriptExtensionPlugin::staticMetaObject, qt_meta_stringdata_QtDBusScriptPlugin.data,
      qt_meta_data_QtDBusScriptPlugin,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDBusScriptPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDBusScriptPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDBusScriptPlugin.stringdata0))
        return static_cast<void*>(this);
    return QScriptExtensionPlugin::qt_metacast(_clname);
}

int QtDBusScriptPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScriptExtensionPlugin::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION const uint qt_section_alignment_dummy = 42;

#ifdef QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xe4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xd0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '+',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'Q',  't',  '.',  'Q',  'S',  'c',  'r', 
    'i',  'p',  't',  'E',  'x',  't',  'e',  'n', 
    's',  'i',  'o',  'n',  'I',  'n',  't',  'e', 
    'r',  'f',  'a',  'c',  'e',  0x00, 0x00, 0x00,
    0x1b, 0x0b, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x12, 0x00, 'Q',  't',  'D',  'B',  'u',  's', 
    'S',  'c',  'r',  'i',  'p',  't',  'P',  'l', 
    'u',  'g',  'i',  'n',  0xda, ' ',  0xa1, 0x00,
    0x07, 0x00, 'v',  'e',  'r',  's',  'i',  'o', 
    'n',  0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0x15, 0x13, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    '8',  0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    '4',  0x00, 0x00, 0x00, 0x14, 0x03, 0x00, 0x00,
    0x04, 0x00, 'K',  'e',  'y',  's',  0x00, 0x00,
    0x1c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x18, 0x00, 0x00, 0x00, 0x07, 0x00, 'q',  't', 
    '.',  'd',  'b',  'u',  's',  0x00, 0x00, 0x00,
    0x8b, 0x01, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00,
    'H',  0x00, 0x00, 0x00, '|',  0x00, 0x00, 0x00,
    'l',  0x00, 0x00, 0x00
};

#else // QT_NO_DEBUG

QT_PLUGIN_METADATA_SECTION
static const unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', ' ',
    'q',  'b',  'j',  's',  0x01, 0x00, 0x00, 0x00,
    0xe4, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
    0xd0, 0x00, 0x00, 0x00, 0x1b, 0x03, 0x00, 0x00,
    0x03, 0x00, 'I',  'I',  'D',  0x00, 0x00, 0x00,
    '+',  0x00, 'o',  'r',  'g',  '.',  'q',  't', 
    '-',  'p',  'r',  'o',  'j',  'e',  'c',  't', 
    '.',  'Q',  't',  '.',  'Q',  'S',  'c',  'r', 
    'i',  'p',  't',  'E',  'x',  't',  'e',  'n', 
    's',  'i',  'o',  'n',  'I',  'n',  't',  'e', 
    'r',  'f',  'a',  'c',  'e',  0x00, 0x00, 0x00,
    0x15, 0x0b, 0x00, 0x00, 0x08, 0x00, 'M',  'e', 
    't',  'a',  'D',  'a',  't',  'a',  0x00, 0x00,
    '8',  0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    '4',  0x00, 0x00, 0x00, 0x14, 0x03, 0x00, 0x00,
    0x04, 0x00, 'K',  'e',  'y',  's',  0x00, 0x00,
    0x1c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x18, 0x00, 0x00, 0x00, 0x07, 0x00, 'q',  't', 
    '.',  'd',  'b',  'u',  's',  0x00, 0x00, 0x00,
    0x8b, 0x01, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
    0x1b, 0x14, 0x00, 0x00, 0x09, 0x00, 'c',  'l', 
    'a',  's',  's',  'N',  'a',  'm',  'e',  0x00,
    0x12, 0x00, 'Q',  't',  'D',  'B',  'u',  's', 
    'S',  'c',  'r',  'i',  'p',  't',  'P',  'l', 
    'u',  'g',  'i',  'n',  '1',  0x00, 0x00, 0x00,
    0x05, 0x00, 'd',  'e',  'b',  'u',  'g',  0x00,
    0xda, ' ',  0xa1, 0x00, 0x07, 0x00, 'v',  'e', 
    'r',  's',  'i',  'o',  'n',  0x00, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 'H',  0x00, 0x00, 0x00,
    0x90, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00,
    0xc0, 0x00, 0x00, 0x00
};
#endif // QT_NO_DEBUG

QT_MOC_EXPORT_PLUGIN(QtDBusScriptPlugin, QtDBusScriptPlugin)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
