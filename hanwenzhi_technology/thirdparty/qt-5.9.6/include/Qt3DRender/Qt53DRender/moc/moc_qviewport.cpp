/****************************************************************************
** Meta object code from reading C++ file 'qviewport.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qviewport.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qviewport.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QViewport_t {
    QByteArrayData data[8];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QViewport_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QViewport_t qt_meta_stringdata_Qt3DRender__QViewport = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Qt3DRender::QViewport"
QT_MOC_LITERAL(1, 22, 21), // "normalizedRectChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 14), // "normalizedRect"
QT_MOC_LITERAL(4, 60, 12), // "gammaChanged"
QT_MOC_LITERAL(5, 73, 5), // "gamma"
QT_MOC_LITERAL(6, 79, 17), // "setNormalizedRect"
QT_MOC_LITERAL(7, 97, 8) // "setGamma"

    },
    "Qt3DRender::QViewport\0normalizedRectChanged\0"
    "\0normalizedRect\0gammaChanged\0gamma\0"
    "setNormalizedRect\0setGamma"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QViewport[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRectF,    3,
    QMetaType::Void, QMetaType::Float,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QRectF,    3,
    QMetaType::Void, QMetaType::Float,    5,

 // properties: name, type, flags
       3, QMetaType::QRectF, 0x00495103,
       5, QMetaType::Float, 0x00c95103,

 // properties: notify_signal_id
       0,
       1,

 // properties: revision
       0,
       9,

       0        // eod
};

void Qt3DRender::QViewport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QViewport *_t = static_cast<QViewport *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->normalizedRectChanged((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 1: _t->gammaChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->setNormalizedRect((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 3: _t->setGamma((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QViewport::*_t)(const QRectF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QViewport::normalizedRectChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QViewport::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QViewport::gammaChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QViewport *_t = static_cast<QViewport *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRectF*>(_v) = _t->normalizedRect(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->gamma(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QViewport *_t = static_cast<QViewport *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNormalizedRect(*reinterpret_cast< QRectF*>(_v)); break;
        case 1: _t->setGamma(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QViewport::staticMetaObject = {
    { &QFrameGraphNode::staticMetaObject, qt_meta_stringdata_Qt3DRender__QViewport.data,
      qt_meta_data_Qt3DRender__QViewport,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QViewport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QViewport::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QViewport.stringdata0))
        return static_cast<void*>(this);
    return QFrameGraphNode::qt_metacast(_clname);
}

int Qt3DRender::QViewport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrameGraphNode::qt_metacall(_c, _id, _a);
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
void Qt3DRender::QViewport::normalizedRectChanged(const QRectF & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QViewport::gammaChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
