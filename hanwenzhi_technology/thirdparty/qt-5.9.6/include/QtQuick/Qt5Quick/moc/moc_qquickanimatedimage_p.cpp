/****************************************************************************
** Meta object code from reading C++ file 'qquickanimatedimage_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickanimatedimage_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickanimatedimage_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickAnimatedImage_t {
    QByteArrayData data[16];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickAnimatedImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickAnimatedImage_t qt_meta_stringdata_QQuickAnimatedImage = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickAnimatedImage"
QT_MOC_LITERAL(1, 20, 14), // "playingChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "pausedChanged"
QT_MOC_LITERAL(4, 50, 12), // "frameChanged"
QT_MOC_LITERAL(5, 63, 17), // "sourceSizeChanged"
QT_MOC_LITERAL(6, 81, 17), // "frameCountChanged"
QT_MOC_LITERAL(7, 99, 11), // "movieUpdate"
QT_MOC_LITERAL(8, 111, 20), // "movieRequestFinished"
QT_MOC_LITERAL(9, 132, 20), // "playingStatusChanged"
QT_MOC_LITERAL(10, 153, 14), // "onCacheChanged"
QT_MOC_LITERAL(11, 168, 7), // "playing"
QT_MOC_LITERAL(12, 176, 6), // "paused"
QT_MOC_LITERAL(13, 183, 12), // "currentFrame"
QT_MOC_LITERAL(14, 196, 10), // "frameCount"
QT_MOC_LITERAL(15, 207, 10) // "sourceSize"

    },
    "QQuickAnimatedImage\0playingChanged\0\0"
    "pausedChanged\0frameChanged\0sourceSizeChanged\0"
    "frameCountChanged\0movieUpdate\0"
    "movieRequestFinished\0playingStatusChanged\0"
    "onCacheChanged\0playing\0paused\0"
    "currentFrame\0frameCount\0sourceSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickAnimatedImage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495103,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::Int, 0x00495001,
      15, QMetaType::QSize, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       4,
       3,

       0        // eod
};

void QQuickAnimatedImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickAnimatedImage *_t = static_cast<QQuickAnimatedImage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playingChanged(); break;
        case 1: _t->pausedChanged(); break;
        case 2: _t->frameChanged(); break;
        case 3: _t->sourceSizeChanged(); break;
        case 4: _t->frameCountChanged(); break;
        case 5: _t->movieUpdate(); break;
        case 6: _t->movieRequestFinished(); break;
        case 7: _t->playingStatusChanged(); break;
        case 8: _t->onCacheChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickAnimatedImage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimatedImage::playingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickAnimatedImage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimatedImage::pausedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickAnimatedImage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimatedImage::frameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickAnimatedImage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimatedImage::sourceSizeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickAnimatedImage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAnimatedImage::frameCountChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickAnimatedImage *_t = static_cast<QQuickAnimatedImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isPlaying(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isPaused(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentFrame(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->frameCount(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = _t->sourceSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickAnimatedImage *_t = static_cast<QQuickAnimatedImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlaying(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setPaused(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setCurrentFrame(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickAnimatedImage::staticMetaObject = {
    { &QQuickImage::staticMetaObject, qt_meta_stringdata_QQuickAnimatedImage.data,
      qt_meta_data_QQuickAnimatedImage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickAnimatedImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickAnimatedImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickAnimatedImage.stringdata0))
        return static_cast<void*>(this);
    return QQuickImage::qt_metacast(_clname);
}

int QQuickAnimatedImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickImage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void QQuickAnimatedImage::playingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickAnimatedImage::pausedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickAnimatedImage::frameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickAnimatedImage::sourceSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickAnimatedImage::frameCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
