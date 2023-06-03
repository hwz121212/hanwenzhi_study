/****************************************************************************
** Meta object code from reading C++ file 'qabstractclipanimator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qabstractclipanimator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractclipanimator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DAnimation__QAbstractClipAnimator_t {
    QByteArrayData data[16];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DAnimation__QAbstractClipAnimator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DAnimation__QAbstractClipAnimator_t qt_meta_stringdata_Qt3DAnimation__QAbstractClipAnimator = {
    {
QT_MOC_LITERAL(0, 0, 36), // "Qt3DAnimation::QAbstractClipA..."
QT_MOC_LITERAL(1, 37, 14), // "runningChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 7), // "running"
QT_MOC_LITERAL(4, 61, 20), // "channelMapperChanged"
QT_MOC_LITERAL(5, 82, 30), // "Qt3DAnimation::QChannelMapper*"
QT_MOC_LITERAL(6, 113, 13), // "channelMapper"
QT_MOC_LITERAL(7, 127, 16), // "loopCountChanged"
QT_MOC_LITERAL(8, 144, 5), // "loops"
QT_MOC_LITERAL(9, 150, 10), // "setRunning"
QT_MOC_LITERAL(10, 161, 16), // "setChannelMapper"
QT_MOC_LITERAL(11, 178, 12), // "setLoopCount"
QT_MOC_LITERAL(12, 191, 5), // "start"
QT_MOC_LITERAL(13, 197, 4), // "stop"
QT_MOC_LITERAL(14, 202, 5), // "Loops"
QT_MOC_LITERAL(15, 208, 8) // "Infinite"

    },
    "Qt3DAnimation::QAbstractClipAnimator\0"
    "runningChanged\0\0running\0channelMapperChanged\0"
    "Qt3DAnimation::QChannelMapper*\0"
    "channelMapper\0loopCountChanged\0loops\0"
    "setRunning\0setChannelMapper\0setLoopCount\0"
    "start\0stop\0Loops\0Infinite"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DAnimation__QAbstractClipAnimator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   74, // properties
       1,   86, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       7,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   63,    2, 0x0a /* Public */,
      10,    1,   66,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,
      12,    0,   72,    2, 0x0a /* Public */,
      13,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,
       8, QMetaType::Int, 0x00495003,
       6, 0x80000000 | 5, 0x0049510b,

 // properties: notify_signal_id
       0,
       2,
       1,

 // enums: name, flags, count, data
      14, 0x0,    1,   90,

 // enum data: key, value
      15, uint(Qt3DAnimation::QAbstractClipAnimator::Infinite),

       0        // eod
};

void Qt3DAnimation::QAbstractClipAnimator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractClipAnimator *_t = static_cast<QAbstractClipAnimator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->runningChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->channelMapperChanged((*reinterpret_cast< Qt3DAnimation::QChannelMapper*(*)>(_a[1]))); break;
        case 2: _t->loopCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setRunning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setChannelMapper((*reinterpret_cast< Qt3DAnimation::QChannelMapper*(*)>(_a[1]))); break;
        case 5: _t->setLoopCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->start(); break;
        case 7: _t->stop(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAbstractClipAnimator::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractClipAnimator::runningChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractClipAnimator::*_t)(Qt3DAnimation::QChannelMapper * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractClipAnimator::channelMapperChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAbstractClipAnimator::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractClipAnimator::loopCountChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAbstractClipAnimator *_t = static_cast<QAbstractClipAnimator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isRunning(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->loopCount(); break;
        case 2: *reinterpret_cast< Qt3DAnimation::QChannelMapper**>(_v) = _t->channelMapper(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAbstractClipAnimator *_t = static_cast<QAbstractClipAnimator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRunning(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setLoopCount(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setChannelMapper(*reinterpret_cast< Qt3DAnimation::QChannelMapper**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DAnimation::QAbstractClipAnimator::staticMetaObject = {
    { &Qt3DCore::QComponent::staticMetaObject, qt_meta_stringdata_Qt3DAnimation__QAbstractClipAnimator.data,
      qt_meta_data_Qt3DAnimation__QAbstractClipAnimator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DAnimation::QAbstractClipAnimator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DAnimation::QAbstractClipAnimator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DAnimation__QAbstractClipAnimator.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QComponent::qt_metacast(_clname);
}

int Qt3DAnimation::QAbstractClipAnimator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Qt3DAnimation::QAbstractClipAnimator::runningChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DAnimation::QAbstractClipAnimator::channelMapperChanged(Qt3DAnimation::QChannelMapper * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DAnimation::QAbstractClipAnimator::loopCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
