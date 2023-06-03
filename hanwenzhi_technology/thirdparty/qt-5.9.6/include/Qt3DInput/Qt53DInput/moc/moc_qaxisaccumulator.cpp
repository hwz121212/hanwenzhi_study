/****************************************************************************
** Meta object code from reading C++ file 'qaxisaccumulator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qaxisaccumulator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaxisaccumulator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DInput__QAxisAccumulator_t {
    QByteArrayData data[20];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DInput__QAxisAccumulator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DInput__QAxisAccumulator_t qt_meta_stringdata_Qt3DInput__QAxisAccumulator = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Qt3DInput::QAxisAccumulator"
QT_MOC_LITERAL(1, 28, 17), // "sourceAxisChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 17), // "Qt3DInput::QAxis*"
QT_MOC_LITERAL(4, 65, 10), // "sourceAxis"
QT_MOC_LITERAL(5, 76, 21), // "sourceAxisTypeChanged"
QT_MOC_LITERAL(6, 98, 32), // "QAxisAccumulator::SourceAxisType"
QT_MOC_LITERAL(7, 131, 14), // "sourceAxisType"
QT_MOC_LITERAL(8, 146, 12), // "valueChanged"
QT_MOC_LITERAL(9, 159, 5), // "value"
QT_MOC_LITERAL(10, 165, 15), // "velocityChanged"
QT_MOC_LITERAL(11, 181, 12), // "scaleChanged"
QT_MOC_LITERAL(12, 194, 5), // "scale"
QT_MOC_LITERAL(13, 200, 13), // "setSourceAxis"
QT_MOC_LITERAL(14, 214, 17), // "setSourceAxisType"
QT_MOC_LITERAL(15, 232, 8), // "setScale"
QT_MOC_LITERAL(16, 241, 14), // "SourceAxisType"
QT_MOC_LITERAL(17, 256, 8), // "velocity"
QT_MOC_LITERAL(18, 265, 8), // "Velocity"
QT_MOC_LITERAL(19, 274, 12) // "Acceleration"

    },
    "Qt3DInput::QAxisAccumulator\0"
    "sourceAxisChanged\0\0Qt3DInput::QAxis*\0"
    "sourceAxis\0sourceAxisTypeChanged\0"
    "QAxisAccumulator::SourceAxisType\0"
    "sourceAxisType\0valueChanged\0value\0"
    "velocityChanged\0scaleChanged\0scale\0"
    "setSourceAxis\0setSourceAxisType\0"
    "setScale\0SourceAxisType\0velocity\0"
    "Velocity\0Acceleration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DInput__QAxisAccumulator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       5,   78, // properties
       1,   98, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       8,    1,   60,    2, 0x06 /* Public */,
      10,    1,   63,    2, 0x06 /* Public */,
      11,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   69,    2, 0x0a /* Public */,
      14,    1,   72,    2, 0x0a /* Public */,
      15,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,    9,
    QMetaType::Void, QMetaType::Float,   12,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Float,   12,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       7, 0x80000000 | 16, 0x0049510b,
      12, QMetaType::Float, 0x00495103,
       9, QMetaType::Float, 0x00495001,
      17, QMetaType::Float, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       4,
       2,
       3,

 // enums: name, flags, count, data
      16, 0x0,    2,  102,

 // enum data: key, value
      18, uint(Qt3DInput::QAxisAccumulator::Velocity),
      19, uint(Qt3DInput::QAxisAccumulator::Acceleration),

       0        // eod
};

void Qt3DInput::QAxisAccumulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAxisAccumulator *_t = static_cast<QAxisAccumulator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceAxisChanged((*reinterpret_cast< Qt3DInput::QAxis*(*)>(_a[1]))); break;
        case 1: _t->sourceAxisTypeChanged((*reinterpret_cast< QAxisAccumulator::SourceAxisType(*)>(_a[1]))); break;
        case 2: _t->valueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->velocityChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->scaleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setSourceAxis((*reinterpret_cast< Qt3DInput::QAxis*(*)>(_a[1]))); break;
        case 6: _t->setSourceAxisType((*reinterpret_cast< QAxisAccumulator::SourceAxisType(*)>(_a[1]))); break;
        case 7: _t->setScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAxisAccumulator::*_t)(Qt3DInput::QAxis * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAxisAccumulator::sourceAxisChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAxisAccumulator::*_t)(QAxisAccumulator::SourceAxisType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAxisAccumulator::sourceAxisTypeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAxisAccumulator::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAxisAccumulator::valueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QAxisAccumulator::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAxisAccumulator::velocityChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QAxisAccumulator::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAxisAccumulator::scaleChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAxisAccumulator *_t = static_cast<QAxisAccumulator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DInput::QAxis**>(_v) = _t->sourceAxis(); break;
        case 1: *reinterpret_cast< SourceAxisType*>(_v) = _t->sourceAxisType(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->scale(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->value(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->velocity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAxisAccumulator *_t = static_cast<QAxisAccumulator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSourceAxis(*reinterpret_cast< Qt3DInput::QAxis**>(_v)); break;
        case 1: _t->setSourceAxisType(*reinterpret_cast< SourceAxisType*>(_v)); break;
        case 2: _t->setScale(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DInput::QAxisAccumulator::staticMetaObject = {
    { &Qt3DCore::QComponent::staticMetaObject, qt_meta_stringdata_Qt3DInput__QAxisAccumulator.data,
      qt_meta_data_Qt3DInput__QAxisAccumulator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DInput::QAxisAccumulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DInput::QAxisAccumulator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DInput__QAxisAccumulator.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QComponent::qt_metacast(_clname);
}

int Qt3DInput::QAxisAccumulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QComponent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3DInput::QAxisAccumulator::sourceAxisChanged(Qt3DInput::QAxis * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DInput::QAxisAccumulator::sourceAxisTypeChanged(QAxisAccumulator::SourceAxisType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DInput::QAxisAccumulator::valueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qt3DInput::QAxisAccumulator::velocityChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Qt3DInput::QAxisAccumulator::scaleChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
