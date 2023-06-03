/****************************************************************************
** Meta object code from reading C++ file 'qqmlenginecontrolclient_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQmlDebug/private/qqmlenginecontrolclient_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlenginecontrolclient_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlEngineControlClient_t {
    QByteArrayData data[8];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlEngineControlClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlEngineControlClient_t qt_meta_stringdata_QQmlEngineControlClient = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQmlEngineControlClient"
QT_MOC_LITERAL(1, 24, 20), // "engineAboutToBeAdded"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 8), // "engineId"
QT_MOC_LITERAL(4, 55, 4), // "name"
QT_MOC_LITERAL(5, 60, 11), // "engineAdded"
QT_MOC_LITERAL(6, 72, 22), // "engineAboutToBeRemoved"
QT_MOC_LITERAL(7, 95, 13) // "engineRemoved"

    },
    "QQmlEngineControlClient\0engineAboutToBeAdded\0"
    "\0engineId\0name\0engineAdded\0"
    "engineAboutToBeRemoved\0engineRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlEngineControlClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       5,    2,   39,    2, 0x06 /* Public */,
       6,    2,   44,    2, 0x06 /* Public */,
       7,    2,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,

       0        // eod
};

void QQmlEngineControlClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlEngineControlClient *_t = static_cast<QQmlEngineControlClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->engineAboutToBeAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->engineAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->engineAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->engineRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlEngineControlClient::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlEngineControlClient::engineAboutToBeAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQmlEngineControlClient::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlEngineControlClient::engineAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQmlEngineControlClient::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlEngineControlClient::engineAboutToBeRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQmlEngineControlClient::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlEngineControlClient::engineRemoved)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QQmlEngineControlClient::staticMetaObject = {
    { &QQmlDebugClient::staticMetaObject, qt_meta_stringdata_QQmlEngineControlClient.data,
      qt_meta_data_QQmlEngineControlClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlEngineControlClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlEngineControlClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlEngineControlClient.stringdata0))
        return static_cast<void*>(this);
    return QQmlDebugClient::qt_metacast(_clname);
}

int QQmlEngineControlClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQmlDebugClient::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QQmlEngineControlClient::engineAboutToBeAdded(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQmlEngineControlClient::engineAdded(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQmlEngineControlClient::engineAboutToBeRemoved(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQmlEngineControlClient::engineRemoved(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
