/****************************************************************************
** Meta object code from reading C++ file 'qqmldebugservice_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQml/private/qqmldebugservice_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmldebugservice_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlDebugService_t {
    QByteArrayData data[10];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlDebugService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlDebugService_t qt_meta_stringdata_QQmlDebugService = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQmlDebugService"
QT_MOC_LITERAL(1, 17, 16), // "attachedToEngine"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "QJSEngine*"
QT_MOC_LITERAL(4, 46, 18), // "detachedFromEngine"
QT_MOC_LITERAL(5, 65, 15), // "messageToClient"
QT_MOC_LITERAL(6, 81, 4), // "name"
QT_MOC_LITERAL(7, 86, 7), // "message"
QT_MOC_LITERAL(8, 94, 16), // "messagesToClient"
QT_MOC_LITERAL(9, 111, 8) // "messages"

    },
    "QQmlDebugService\0attachedToEngine\0\0"
    "QJSEngine*\0detachedFromEngine\0"
    "messageToClient\0name\0message\0"
    "messagesToClient\0messages"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlDebugService[] = {

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
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    2,   40,    2, 0x06 /* Public */,
       8,    2,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArrayList,    6,    9,

       0        // eod
};

void QQmlDebugService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlDebugService *_t = static_cast<QQmlDebugService *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->attachedToEngine((*reinterpret_cast< QJSEngine*(*)>(_a[1]))); break;
        case 1: _t->detachedFromEngine((*reinterpret_cast< QJSEngine*(*)>(_a[1]))); break;
        case 2: _t->messageToClient((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 3: _t->messagesToClient((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QByteArray>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlDebugService::*_t)(QJSEngine * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlDebugService::attachedToEngine)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQmlDebugService::*_t)(QJSEngine * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlDebugService::detachedFromEngine)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQmlDebugService::*_t)(const QString & , const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlDebugService::messageToClient)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQmlDebugService::*_t)(const QString & , const QList<QByteArray> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlDebugService::messagesToClient)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QQmlDebugService::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQmlDebugService.data,
      qt_meta_data_QQmlDebugService,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlDebugService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlDebugService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlDebugService.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQmlDebugService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void QQmlDebugService::attachedToEngine(QJSEngine * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQmlDebugService::detachedFromEngine(QJSEngine * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQmlDebugService::messageToClient(const QString & _t1, const QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQmlDebugService::messagesToClient(const QString & _t1, const QList<QByteArray> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
