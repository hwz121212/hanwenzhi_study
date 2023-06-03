/****************************************************************************
** Meta object code from reading C++ file 'qqmlwebchannel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qqmlwebchannel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmlwebchannel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlWebChannel_t {
    QByteArrayData data[12];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlWebChannel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlWebChannel_t qt_meta_stringdata_QQmlWebChannel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQmlWebChannel"
QT_MOC_LITERAL(1, 15, 18), // "_q_objectIdChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "newId"
QT_MOC_LITERAL(4, 41, 15), // "registerObjects"
QT_MOC_LITERAL(5, 57, 7), // "objects"
QT_MOC_LITERAL(6, 65, 9), // "connectTo"
QT_MOC_LITERAL(7, 75, 9), // "transport"
QT_MOC_LITERAL(8, 85, 14), // "disconnectFrom"
QT_MOC_LITERAL(9, 100, 10), // "transports"
QT_MOC_LITERAL(10, 111, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(11, 137, 17) // "registeredObjects"

    },
    "QQmlWebChannel\0_q_objectIdChanged\0\0"
    "newId\0registerObjects\0objects\0connectTo\0"
    "transport\0disconnectFrom\0transports\0"
    "QQmlListProperty<QObject>\0registeredObjects"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlWebChannel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x02 /* Public */,
       6,    1,   40,    2, 0x02 /* Public */,
       8,    1,   43,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariantMap,    5,
    QMetaType::Void, QMetaType::QObjectStar,    7,
    QMetaType::Void, QMetaType::QObjectStar,    7,

 // properties: name, type, flags
       9, 0x80000000 | 10, 0x00095009,
      11, 0x80000000 | 10, 0x00095009,

       0        // eod
};

void QQmlWebChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlWebChannel *_t = static_cast<QQmlWebChannel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d_func()->_q_objectIdChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->registerObjects((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 2: _t->connectTo((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->disconnectFrom((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlWebChannel *_t = static_cast<QQmlWebChannel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->transports(); break;
        case 1: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->registeredObjects(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQmlWebChannel::staticMetaObject = {
    { &QWebChannel::staticMetaObject, qt_meta_stringdata_QQmlWebChannel.data,
      qt_meta_data_QQmlWebChannel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlWebChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlWebChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlWebChannel.stringdata0))
        return static_cast<void*>(this);
    return QWebChannel::qt_metacast(_clname);
}

int QQmlWebChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebChannel::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
