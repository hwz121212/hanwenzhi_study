/****************************************************************************
** Meta object code from reading C++ file 'qabstractvideosurface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qabstractvideosurface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractvideosurface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAbstractVideoSurface_t {
    QByteArrayData data[10];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractVideoSurface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractVideoSurface_t qt_meta_stringdata_QAbstractVideoSurface = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QAbstractVideoSurface"
QT_MOC_LITERAL(1, 22, 13), // "activeChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 6), // "active"
QT_MOC_LITERAL(4, 44, 20), // "surfaceFormatChanged"
QT_MOC_LITERAL(5, 65, 19), // "QVideoSurfaceFormat"
QT_MOC_LITERAL(6, 85, 6), // "format"
QT_MOC_LITERAL(7, 92, 23), // "supportedFormatsChanged"
QT_MOC_LITERAL(8, 116, 23), // "nativeResolutionChanged"
QT_MOC_LITERAL(9, 140, 16) // "nativeResolution"

    },
    "QAbstractVideoSurface\0activeChanged\0"
    "\0active\0surfaceFormatChanged\0"
    "QVideoSurfaceFormat\0format\0"
    "supportedFormatsChanged\0nativeResolutionChanged\0"
    "nativeResolution"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractVideoSurface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       7,    0,   40,    2, 0x06 /* Public */,
       8,    1,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,    2,

 // properties: name, type, flags
       9, QMetaType::QSize, 0x00495001,

 // properties: notify_signal_id
       3,

       0        // eod
};

void QAbstractVideoSurface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractVideoSurface *_t = static_cast<QAbstractVideoSurface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->surfaceFormatChanged((*reinterpret_cast< const QVideoSurfaceFormat(*)>(_a[1]))); break;
        case 2: _t->supportedFormatsChanged(); break;
        case 3: _t->nativeResolutionChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAbstractVideoSurface::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractVideoSurface::activeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractVideoSurface::*_t)(const QVideoSurfaceFormat & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractVideoSurface::surfaceFormatChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAbstractVideoSurface::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractVideoSurface::supportedFormatsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QAbstractVideoSurface::*_t)(const QSize & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractVideoSurface::nativeResolutionChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAbstractVideoSurface *_t = static_cast<QAbstractVideoSurface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSize*>(_v) = _t->nativeResolution(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QAbstractVideoSurface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractVideoSurface.data,
      qt_meta_data_QAbstractVideoSurface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAbstractVideoSurface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractVideoSurface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractVideoSurface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QAbstractVideoSurface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QAbstractVideoSurface::activeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAbstractVideoSurface::surfaceFormatChanged(const QVideoSurfaceFormat & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAbstractVideoSurface::supportedFormatsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QAbstractVideoSurface::nativeResolutionChanged(const QSize & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
