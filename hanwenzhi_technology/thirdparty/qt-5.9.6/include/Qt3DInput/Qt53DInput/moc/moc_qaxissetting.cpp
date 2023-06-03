/****************************************************************************
** Meta object code from reading C++ file 'qaxissetting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qaxissetting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaxissetting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DInput__QAxisSetting_t {
    QByteArrayData data[13];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DInput__QAxisSetting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DInput__QAxisSetting_t qt_meta_stringdata_Qt3DInput__QAxisSetting = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Qt3DInput::QAxisSetting"
QT_MOC_LITERAL(1, 24, 21), // "deadZoneRadiusChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 14), // "deadZoneRadius"
QT_MOC_LITERAL(4, 62, 11), // "axesChanged"
QT_MOC_LITERAL(5, 74, 12), // "QVector<int>"
QT_MOC_LITERAL(6, 87, 4), // "axes"
QT_MOC_LITERAL(7, 92, 13), // "smoothChanged"
QT_MOC_LITERAL(8, 106, 6), // "smooth"
QT_MOC_LITERAL(9, 113, 17), // "setDeadZoneRadius"
QT_MOC_LITERAL(10, 131, 7), // "setAxes"
QT_MOC_LITERAL(11, 139, 16), // "setSmoothEnabled"
QT_MOC_LITERAL(12, 156, 7) // "enabled"

    },
    "Qt3DInput::QAxisSetting\0deadZoneRadiusChanged\0"
    "\0deadZoneRadius\0axesChanged\0QVector<int>\0"
    "axes\0smoothChanged\0smooth\0setDeadZoneRadius\0"
    "setAxes\0setSmoothEnabled\0enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DInput__QAxisSetting[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   53,    2, 0x0a /* Public */,
      10,    1,   56,    2, 0x0a /* Public */,
      11,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,   12,

 // properties: name, type, flags
       3, QMetaType::Float, 0x00495103,
       6, 0x80000000 | 5, 0x0049510b,
       8, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Qt3DInput::QAxisSetting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAxisSetting *_t = static_cast<QAxisSetting *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deadZoneRadiusChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->axesChanged((*reinterpret_cast< const QVector<int>(*)>(_a[1]))); break;
        case 2: _t->smoothChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setDeadZoneRadius((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->setAxes((*reinterpret_cast< const QVector<int>(*)>(_a[1]))); break;
        case 5: _t->setSmoothEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAxisSetting::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAxisSetting::deadZoneRadiusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAxisSetting::*_t)(const QVector<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAxisSetting::axesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAxisSetting::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAxisSetting::smoothChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAxisSetting *_t = static_cast<QAxisSetting *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->deadZoneRadius(); break;
        case 1: *reinterpret_cast< QVector<int>*>(_v) = _t->axes(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isSmoothEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAxisSetting *_t = static_cast<QAxisSetting *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDeadZoneRadius(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setAxes(*reinterpret_cast< QVector<int>*>(_v)); break;
        case 2: _t->setSmoothEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DInput::QAxisSetting::staticMetaObject = {
    { &Qt3DCore::QNode::staticMetaObject, qt_meta_stringdata_Qt3DInput__QAxisSetting.data,
      qt_meta_data_Qt3DInput__QAxisSetting,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DInput::QAxisSetting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DInput::QAxisSetting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DInput__QAxisSetting.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QNode::qt_metacast(_clname);
}

int Qt3DInput::QAxisSetting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QNode::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Qt3DInput::QAxisSetting::deadZoneRadiusChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DInput::QAxisSetting::axesChanged(const QVector<int> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DInput::QAxisSetting::smoothChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
