/****************************************************************************
** Meta object code from reading C++ file 'qgstreamervideooverlay_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtMultimedia/private/qgstreamervideooverlay_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstreamervideooverlay_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGstreamerVideoOverlay_t {
    QByteArrayData data[12];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGstreamerVideoOverlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGstreamerVideoOverlay_t qt_meta_stringdata_QGstreamerVideoOverlay = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QGstreamerVideoOverlay"
QT_MOC_LITERAL(1, 23, 22), // "nativeVideoSizeChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 13), // "activeChanged"
QT_MOC_LITERAL(4, 61, 17), // "brightnessChanged"
QT_MOC_LITERAL(5, 79, 10), // "brightness"
QT_MOC_LITERAL(6, 90, 15), // "contrastChanged"
QT_MOC_LITERAL(7, 106, 8), // "contrast"
QT_MOC_LITERAL(8, 115, 10), // "hueChanged"
QT_MOC_LITERAL(9, 126, 3), // "hue"
QT_MOC_LITERAL(10, 130, 17), // "saturationChanged"
QT_MOC_LITERAL(11, 148, 10) // "saturation"

    },
    "QGstreamerVideoOverlay\0nativeVideoSizeChanged\0"
    "\0activeChanged\0brightnessChanged\0"
    "brightness\0contrastChanged\0contrast\0"
    "hueChanged\0hue\0saturationChanged\0"
    "saturation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGstreamerVideoOverlay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,
       8,    1,   52,    2, 0x06 /* Public */,
      10,    1,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void QGstreamerVideoOverlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGstreamerVideoOverlay *_t = static_cast<QGstreamerVideoOverlay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nativeVideoSizeChanged(); break;
        case 1: _t->activeChanged(); break;
        case 2: _t->brightnessChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->contrastChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->hueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->saturationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGstreamerVideoOverlay::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGstreamerVideoOverlay::nativeVideoSizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGstreamerVideoOverlay::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGstreamerVideoOverlay::activeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGstreamerVideoOverlay::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGstreamerVideoOverlay::brightnessChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGstreamerVideoOverlay::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGstreamerVideoOverlay::contrastChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QGstreamerVideoOverlay::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGstreamerVideoOverlay::hueChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QGstreamerVideoOverlay::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGstreamerVideoOverlay::saturationChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QGstreamerVideoOverlay::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGstreamerVideoOverlay.data,
      qt_meta_data_QGstreamerVideoOverlay,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGstreamerVideoOverlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGstreamerVideoOverlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGstreamerVideoOverlay.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGstreamerSyncMessageFilter"))
        return static_cast< QGstreamerSyncMessageFilter*>(this);
    if (!strcmp(_clname, "QGstreamerBusMessageFilter"))
        return static_cast< QGstreamerBusMessageFilter*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.gstreamersyncmessagefilter/5.0"))
        return static_cast< QGstreamerSyncMessageFilter*>(this);
    if (!strcmp(_clname, "org.qt-project.qt.gstreamerbusmessagefilter/5.0"))
        return static_cast< QGstreamerBusMessageFilter*>(this);
    return QObject::qt_metacast(_clname);
}

int QGstreamerVideoOverlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QGstreamerVideoOverlay::nativeVideoSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QGstreamerVideoOverlay::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QGstreamerVideoOverlay::brightnessChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGstreamerVideoOverlay::contrastChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGstreamerVideoOverlay::hueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGstreamerVideoOverlay::saturationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
