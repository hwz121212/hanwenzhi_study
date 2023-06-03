/****************************************************************************
** Meta object code from reading C++ file 'qscxmlinvokableservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qscxmlinvokableservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscxmlinvokableservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QScxmlInvokableService_t {
    QByteArrayData data[5];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScxmlInvokableService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScxmlInvokableService_t qt_meta_stringdata_QScxmlInvokableService = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QScxmlInvokableService"
QT_MOC_LITERAL(1, 23, 18), // "parentStateMachine"
QT_MOC_LITERAL(2, 42, 19), // "QScxmlStateMachine*"
QT_MOC_LITERAL(3, 62, 2), // "id"
QT_MOC_LITERAL(4, 65, 4) // "name"

    },
    "QScxmlInvokableService\0parentStateMachine\0"
    "QScxmlStateMachine*\0id\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScxmlInvokableService[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QString, 0x00095401,

       0        // eod
};

void QScxmlInvokableService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QScxmlInvokableService *_t = static_cast<QScxmlInvokableService *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QScxmlStateMachine**>(_v) = _t->parentStateMachine(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QScxmlInvokableService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScxmlInvokableService.data,
      qt_meta_data_QScxmlInvokableService,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScxmlInvokableService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScxmlInvokableService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScxmlInvokableService.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QScxmlInvokableService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QScxmlInvokableServiceFactory_t {
    QByteArrayData data[7];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScxmlInvokableServiceFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScxmlInvokableServiceFactory_t qt_meta_stringdata_QScxmlInvokableServiceFactory = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QScxmlInvokableServiceFactory"
QT_MOC_LITERAL(1, 30, 10), // "invokeInfo"
QT_MOC_LITERAL(2, 41, 35), // "QScxmlExecutableContent::Invo..."
QT_MOC_LITERAL(3, 77, 10), // "parameters"
QT_MOC_LITERAL(4, 88, 47), // "QVector<QScxmlExecutableConte..."
QT_MOC_LITERAL(5, 136, 5), // "names"
QT_MOC_LITERAL(6, 142, 42) // "QVector<QScxmlExecutableConte..."

    },
    "QScxmlInvokableServiceFactory\0invokeInfo\0"
    "QScxmlExecutableContent::InvokeInfo\0"
    "parameters\0QVector<QScxmlExecutableContent::ParameterInfo>\0"
    "names\0QVector<QScxmlExecutableContent::StringId>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScxmlInvokableServiceFactory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 4, 0x00095409,
       5, 0x80000000 | 6, 0x00095409,

       0        // eod
};

void QScxmlInvokableServiceFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QScxmlInvokableServiceFactory *_t = static_cast<QScxmlInvokableServiceFactory *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QScxmlExecutableContent::InvokeInfo*>(_v) = _t->invokeInfo(); break;
        case 1: *reinterpret_cast< QVector<QScxmlExecutableContent::ParameterInfo>*>(_v) = _t->parameters(); break;
        case 2: *reinterpret_cast< QVector<QScxmlExecutableContent::StringId>*>(_v) = _t->names(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QScxmlInvokableServiceFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScxmlInvokableServiceFactory.data,
      qt_meta_data_QScxmlInvokableServiceFactory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScxmlInvokableServiceFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScxmlInvokableServiceFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScxmlInvokableServiceFactory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QScxmlInvokableServiceFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QScxmlStaticScxmlServiceFactory_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScxmlStaticScxmlServiceFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScxmlStaticScxmlServiceFactory_t qt_meta_stringdata_QScxmlStaticScxmlServiceFactory = {
    {
QT_MOC_LITERAL(0, 0, 31) // "QScxmlStaticScxmlServiceFactory"

    },
    "QScxmlStaticScxmlServiceFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScxmlStaticScxmlServiceFactory[] = {

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

void QScxmlStaticScxmlServiceFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QScxmlStaticScxmlServiceFactory::staticMetaObject = {
    { &QScxmlInvokableServiceFactory::staticMetaObject, qt_meta_stringdata_QScxmlStaticScxmlServiceFactory.data,
      qt_meta_data_QScxmlStaticScxmlServiceFactory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScxmlStaticScxmlServiceFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScxmlStaticScxmlServiceFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScxmlStaticScxmlServiceFactory.stringdata0))
        return static_cast<void*>(this);
    return QScxmlInvokableServiceFactory::qt_metacast(_clname);
}

int QScxmlStaticScxmlServiceFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScxmlInvokableServiceFactory::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QScxmlDynamicScxmlServiceFactory_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScxmlDynamicScxmlServiceFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScxmlDynamicScxmlServiceFactory_t qt_meta_stringdata_QScxmlDynamicScxmlServiceFactory = {
    {
QT_MOC_LITERAL(0, 0, 32) // "QScxmlDynamicScxmlServiceFactory"

    },
    "QScxmlDynamicScxmlServiceFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScxmlDynamicScxmlServiceFactory[] = {

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

void QScxmlDynamicScxmlServiceFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QScxmlDynamicScxmlServiceFactory::staticMetaObject = {
    { &QScxmlInvokableServiceFactory::staticMetaObject, qt_meta_stringdata_QScxmlDynamicScxmlServiceFactory.data,
      qt_meta_data_QScxmlDynamicScxmlServiceFactory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QScxmlDynamicScxmlServiceFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScxmlDynamicScxmlServiceFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QScxmlDynamicScxmlServiceFactory.stringdata0))
        return static_cast<void*>(this);
    return QScxmlInvokableServiceFactory::qt_metacast(_clname);
}

int QScxmlDynamicScxmlServiceFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScxmlInvokableServiceFactory::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
