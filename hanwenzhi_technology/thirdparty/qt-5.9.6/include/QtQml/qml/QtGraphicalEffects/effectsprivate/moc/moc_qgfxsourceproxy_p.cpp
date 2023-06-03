/****************************************************************************
** Meta object code from reading C++ file 'qgfxsourceproxy_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qgfxsourceproxy_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgfxsourceproxy_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGfxSourceProxy_t {
    QByteArrayData data[17];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGfxSourceProxy_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGfxSourceProxy_t qt_meta_stringdata_QGfxSourceProxy = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QGfxSourceProxy"
QT_MOC_LITERAL(1, 16, 12), // "inputChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "outputChanged"
QT_MOC_LITERAL(4, 44, 17), // "sourceRectChanged"
QT_MOC_LITERAL(5, 62, 13), // "activeChanged"
QT_MOC_LITERAL(6, 76, 20), // "interpolationChanged"
QT_MOC_LITERAL(7, 97, 5), // "input"
QT_MOC_LITERAL(8, 103, 11), // "QQuickItem*"
QT_MOC_LITERAL(9, 115, 6), // "output"
QT_MOC_LITERAL(10, 122, 10), // "sourceRect"
QT_MOC_LITERAL(11, 133, 6), // "active"
QT_MOC_LITERAL(12, 140, 13), // "interpolation"
QT_MOC_LITERAL(13, 154, 13), // "Interpolation"
QT_MOC_LITERAL(14, 168, 16), // "AnyInterpolation"
QT_MOC_LITERAL(15, 185, 20), // "NearestInterpolation"
QT_MOC_LITERAL(16, 206, 19) // "LinearInterpolation"

    },
    "QGfxSourceProxy\0inputChanged\0\0"
    "outputChanged\0sourceRectChanged\0"
    "activeChanged\0interpolationChanged\0"
    "input\0QQuickItem*\0output\0sourceRect\0"
    "active\0interpolation\0Interpolation\0"
    "AnyInterpolation\0NearestInterpolation\0"
    "LinearInterpolation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGfxSourceProxy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   44, // properties
       1,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0049510f,
       9, 0x80000000 | 8, 0x00495009,
      10, QMetaType::QRectF, 0x00495103,
      11, QMetaType::Bool, 0x00495001,
      12, 0x80000000 | 13, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

 // enums: name, flags, count, data
      13, 0x0,    3,   68,

 // enum data: key, value
      14, uint(QGfxSourceProxy::AnyInterpolation),
      15, uint(QGfxSourceProxy::NearestInterpolation),
      16, uint(QGfxSourceProxy::LinearInterpolation),

       0        // eod
};

void QGfxSourceProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGfxSourceProxy *_t = static_cast<QGfxSourceProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inputChanged(); break;
        case 1: _t->outputChanged(); break;
        case 2: _t->sourceRectChanged(); break;
        case 3: _t->activeChanged(); break;
        case 4: _t->interpolationChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGfxSourceProxy::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGfxSourceProxy::inputChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGfxSourceProxy::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGfxSourceProxy::outputChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGfxSourceProxy::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGfxSourceProxy::sourceRectChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGfxSourceProxy::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGfxSourceProxy::activeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QGfxSourceProxy::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGfxSourceProxy::interpolationChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGfxSourceProxy *_t = static_cast<QGfxSourceProxy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->input(); break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->output(); break;
        case 2: *reinterpret_cast< QRectF*>(_v) = _t->sourceRect(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 4: *reinterpret_cast< Interpolation*>(_v) = _t->interpolation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGfxSourceProxy *_t = static_cast<QGfxSourceProxy *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInput(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 2: _t->setSourceRect(*reinterpret_cast< QRectF*>(_v)); break;
        case 4: _t->setInterpolation(*reinterpret_cast< Interpolation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QGfxSourceProxy *_t = static_cast<QGfxSourceProxy *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetInput(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGfxSourceProxy::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QGfxSourceProxy.data,
      qt_meta_data_QGfxSourceProxy,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGfxSourceProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGfxSourceProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGfxSourceProxy.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QGfxSourceProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void QGfxSourceProxy::inputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGfxSourceProxy::outputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGfxSourceProxy::sourceRectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QGfxSourceProxy::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QGfxSourceProxy::interpolationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
