/****************************************************************************
** Meta object code from reading C++ file 'qpointsize.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qpointsize.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpointsize.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QPointSize_t {
    QByteArrayData data[11];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QPointSize_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QPointSize_t qt_meta_stringdata_Qt3DRender__QPointSize = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Qt3DRender::QPointSize"
QT_MOC_LITERAL(1, 23, 15), // "sizeModeChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "SizeMode"
QT_MOC_LITERAL(4, 49, 8), // "sizeMode"
QT_MOC_LITERAL(5, 58, 12), // "valueChanged"
QT_MOC_LITERAL(6, 71, 5), // "value"
QT_MOC_LITERAL(7, 77, 11), // "setSizeMode"
QT_MOC_LITERAL(8, 89, 8), // "setValue"
QT_MOC_LITERAL(9, 98, 5), // "Fixed"
QT_MOC_LITERAL(10, 104, 12) // "Programmable"

    },
    "Qt3DRender::QPointSize\0sizeModeChanged\0"
    "\0SizeMode\0sizeMode\0valueChanged\0value\0"
    "setSizeMode\0setValue\0Fixed\0Programmable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QPointSize[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       1,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Float,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Float,    6,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
       3, 0x0,    2,   58,

 // enum data: key, value
       9, uint(Qt3DRender::QPointSize::Fixed),
      10, uint(Qt3DRender::QPointSize::Programmable),

       0        // eod
};

void Qt3DRender::QPointSize::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPointSize *_t = static_cast<QPointSize *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeModeChanged((*reinterpret_cast< SizeMode(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->setSizeMode((*reinterpret_cast< SizeMode(*)>(_a[1]))); break;
        case 3: _t->setValue((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QPointSize::*_t)(SizeMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointSize::sizeModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QPointSize::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPointSize::valueChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QPointSize *_t = static_cast<QPointSize *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< SizeMode*>(_v) = _t->sizeMode(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QPointSize *_t = static_cast<QPointSize *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSizeMode(*reinterpret_cast< SizeMode*>(_v)); break;
        case 1: _t->setValue(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QPointSize::staticMetaObject = {
    { &QRenderState::staticMetaObject, qt_meta_stringdata_Qt3DRender__QPointSize.data,
      qt_meta_data_Qt3DRender__QPointSize,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QPointSize::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QPointSize::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QPointSize.stringdata0))
        return static_cast<void*>(this);
    return QRenderState::qt_metacast(_clname);
}

int Qt3DRender::QPointSize::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QRenderState::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Qt3DRender::QPointSize::sizeModeChanged(SizeMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QPointSize::valueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
