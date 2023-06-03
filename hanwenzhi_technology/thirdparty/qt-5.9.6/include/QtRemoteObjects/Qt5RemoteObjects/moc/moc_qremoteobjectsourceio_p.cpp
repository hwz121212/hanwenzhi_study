/****************************************************************************
** Meta object code from reading C++ file 'qremoteobjectsourceio_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtRemoteObjects/private/qremoteobjectsourceio_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qremoteobjectsourceio_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QRemoteObjectSourceIo_t {
    QByteArrayData data[11];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRemoteObjectSourceIo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRemoteObjectSourceIo_t qt_meta_stringdata_QRemoteObjectSourceIo = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QRemoteObjectSourceIo"
QT_MOC_LITERAL(1, 22, 17), // "remoteObjectAdded"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 27), // "QRemoteObjectSourceLocation"
QT_MOC_LITERAL(4, 69, 19), // "remoteObjectRemoved"
QT_MOC_LITERAL(5, 89, 13), // "serverRemoved"
QT_MOC_LITERAL(6, 103, 3), // "url"
QT_MOC_LITERAL(7, 107, 16), // "handleConnection"
QT_MOC_LITERAL(8, 124, 18), // "onServerDisconnect"
QT_MOC_LITERAL(9, 143, 3), // "obj"
QT_MOC_LITERAL(10, 147, 12) // "onServerRead"

    },
    "QRemoteObjectSourceIo\0remoteObjectAdded\0"
    "\0QRemoteObjectSourceLocation\0"
    "remoteObjectRemoved\0serverRemoved\0url\0"
    "handleConnection\0onServerDisconnect\0"
    "obj\0onServerRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRemoteObjectSourceIo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   58,    2, 0x0a /* Public */,
       8,    1,   59,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x2a /* Public | MethodCloned */,
      10,    1,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QUrl,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    9,

       0        // eod
};

void QRemoteObjectSourceIo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRemoteObjectSourceIo *_t = static_cast<QRemoteObjectSourceIo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->remoteObjectAdded((*reinterpret_cast< const QRemoteObjectSourceLocation(*)>(_a[1]))); break;
        case 1: _t->remoteObjectRemoved((*reinterpret_cast< const QRemoteObjectSourceLocation(*)>(_a[1]))); break;
        case 2: _t->serverRemoved((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->handleConnection(); break;
        case 4: _t->onServerDisconnect((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 5: _t->onServerDisconnect(); break;
        case 6: _t->onServerRead((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRemoteObjectSourceLocation >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QRemoteObjectSourceLocation >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QRemoteObjectSourceIo::*_t)(const QRemoteObjectSourceLocation & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRemoteObjectSourceIo::remoteObjectAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QRemoteObjectSourceIo::*_t)(const QRemoteObjectSourceLocation & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRemoteObjectSourceIo::remoteObjectRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QRemoteObjectSourceIo::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRemoteObjectSourceIo::serverRemoved)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QRemoteObjectSourceIo::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QRemoteObjectSourceIo.data,
      qt_meta_data_QRemoteObjectSourceIo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QRemoteObjectSourceIo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRemoteObjectSourceIo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QRemoteObjectSourceIo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QRemoteObjectSourceIo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QRemoteObjectSourceIo::remoteObjectAdded(const QRemoteObjectSourceLocation & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QRemoteObjectSourceIo::remoteObjectRemoved(const QRemoteObjectSourceLocation & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QRemoteObjectSourceIo::serverRemoved(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
