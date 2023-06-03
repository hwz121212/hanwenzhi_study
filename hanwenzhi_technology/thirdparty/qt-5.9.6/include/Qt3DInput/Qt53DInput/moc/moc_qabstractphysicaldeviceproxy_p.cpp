/****************************************************************************
** Meta object code from reading C++ file 'qabstractphysicaldeviceproxy_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/Qt3DInput/private/qabstractphysicaldeviceproxy_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractphysicaldeviceproxy_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DInput__QAbstractPhysicalDeviceProxy_t {
    QByteArrayData data[9];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DInput__QAbstractPhysicalDeviceProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DInput__QAbstractPhysicalDeviceProxy_t qt_meta_stringdata_Qt3DInput__QAbstractPhysicalDeviceProxy = {
    {
QT_MOC_LITERAL(0, 0, 39), // "Qt3DInput::QAbstractPhysicalD..."
QT_MOC_LITERAL(1, 40, 13), // "statusChanged"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 42), // "QAbstractPhysicalDeviceProxy:..."
QT_MOC_LITERAL(4, 98, 6), // "status"
QT_MOC_LITERAL(5, 105, 10), // "deviceName"
QT_MOC_LITERAL(6, 116, 12), // "DeviceStatus"
QT_MOC_LITERAL(7, 129, 5), // "Ready"
QT_MOC_LITERAL(8, 135, 8) // "NotFound"

    },
    "Qt3DInput::QAbstractPhysicalDeviceProxy\0"
    "statusChanged\0\0"
    "QAbstractPhysicalDeviceProxy::DeviceStatus\0"
    "status\0deviceName\0DeviceStatus\0Ready\0"
    "NotFound"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DInput__QAbstractPhysicalDeviceProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   22, // properties
       1,   30, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095401,
       4, 0x80000000 | 3, 0x00495009,

 // properties: notify_signal_id
       0,
       0,

 // enums: name, flags, count, data
       6, 0x0,    2,   34,

 // enum data: key, value
       7, uint(Qt3DInput::QAbstractPhysicalDeviceProxy::Ready),
       8, uint(Qt3DInput::QAbstractPhysicalDeviceProxy::NotFound),

       0        // eod
};

void Qt3DInput::QAbstractPhysicalDeviceProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractPhysicalDeviceProxy *_t = static_cast<QAbstractPhysicalDeviceProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< QAbstractPhysicalDeviceProxy::DeviceStatus(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAbstractPhysicalDeviceProxy::*_t)(QAbstractPhysicalDeviceProxy::DeviceStatus );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractPhysicalDeviceProxy::statusChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAbstractPhysicalDeviceProxy *_t = static_cast<QAbstractPhysicalDeviceProxy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->deviceName(); break;
        case 1: *reinterpret_cast< QAbstractPhysicalDeviceProxy::DeviceStatus*>(_v) = _t->status(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DInput::QAbstractPhysicalDeviceProxy::staticMetaObject = {
    { &QAbstractPhysicalDevice::staticMetaObject, qt_meta_stringdata_Qt3DInput__QAbstractPhysicalDeviceProxy.data,
      qt_meta_data_Qt3DInput__QAbstractPhysicalDeviceProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DInput::QAbstractPhysicalDeviceProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DInput::QAbstractPhysicalDeviceProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DInput__QAbstractPhysicalDeviceProxy.stringdata0))
        return static_cast<void*>(this);
    return QAbstractPhysicalDevice::qt_metacast(_clname);
}

int Qt3DInput::QAbstractPhysicalDeviceProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractPhysicalDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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

// SIGNAL 0
void Qt3DInput::QAbstractPhysicalDeviceProxy::statusChanged(QAbstractPhysicalDeviceProxy::DeviceStatus _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
