/****************************************************************************
** Meta object code from reading C++ file 'qabstractaxisinput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qabstractaxisinput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractaxisinput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DInput__QAbstractAxisInput_t {
    QByteArrayData data[7];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DInput__QAbstractAxisInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DInput__QAbstractAxisInput_t qt_meta_stringdata_Qt3DInput__QAbstractAxisInput = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Qt3DInput::QAbstractAxisInput"
QT_MOC_LITERAL(1, 30, 19), // "sourceDeviceChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 24), // "QAbstractPhysicalDevice*"
QT_MOC_LITERAL(4, 76, 12), // "sourceDevice"
QT_MOC_LITERAL(5, 89, 15), // "setSourceDevice"
QT_MOC_LITERAL(6, 105, 35) // "Qt3DInput::QAbstractPhysicalD..."

    },
    "Qt3DInput::QAbstractAxisInput\0"
    "sourceDeviceChanged\0\0QAbstractPhysicalDevice*\0"
    "sourceDevice\0setSourceDevice\0"
    "Qt3DInput::QAbstractPhysicalDevice*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DInput__QAbstractAxisInput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       4, 0x80000000 | 6, 0x0049510b,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Qt3DInput::QAbstractAxisInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractAxisInput *_t = static_cast<QAbstractAxisInput *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceDeviceChanged((*reinterpret_cast< QAbstractPhysicalDevice*(*)>(_a[1]))); break;
        case 1: _t->setSourceDevice((*reinterpret_cast< QAbstractPhysicalDevice*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractPhysicalDevice* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractPhysicalDevice* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAbstractAxisInput::*_t)(QAbstractPhysicalDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractAxisInput::sourceDeviceChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DInput::QAbstractPhysicalDevice* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAbstractAxisInput *_t = static_cast<QAbstractAxisInput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DInput::QAbstractPhysicalDevice**>(_v) = _t->sourceDevice(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAbstractAxisInput *_t = static_cast<QAbstractAxisInput *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSourceDevice(*reinterpret_cast< Qt3DInput::QAbstractPhysicalDevice**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DInput::QAbstractAxisInput::staticMetaObject = {
    { &Qt3DCore::QNode::staticMetaObject, qt_meta_stringdata_Qt3DInput__QAbstractAxisInput.data,
      qt_meta_data_Qt3DInput__QAbstractAxisInput,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DInput::QAbstractAxisInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DInput::QAbstractAxisInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DInput__QAbstractAxisInput.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QNode::qt_metacast(_clname);
}

int Qt3DInput::QAbstractAxisInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3DInput::QAbstractAxisInput::sourceDeviceChanged(QAbstractPhysicalDevice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
