/****************************************************************************
** Meta object code from reading C++ file 'qanimationclip.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qanimationclip.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qanimationclip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DAnimation__QAnimationClip_t {
    QByteArrayData data[6];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DAnimation__QAnimationClip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DAnimation__QAnimationClip_t qt_meta_stringdata_Qt3DAnimation__QAnimationClip = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Qt3DAnimation::QAnimationClip"
QT_MOC_LITERAL(1, 30, 15), // "clipDataChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 33), // "Qt3DAnimation::QAnimationClip..."
QT_MOC_LITERAL(4, 81, 8), // "clipData"
QT_MOC_LITERAL(5, 90, 11) // "setClipData"

    },
    "Qt3DAnimation::QAnimationClip\0"
    "clipDataChanged\0\0Qt3DAnimation::QAnimationClipData\0"
    "clipData\0setClipData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DAnimation__QAnimationClip[] = {

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
       4, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Qt3DAnimation::QAnimationClip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAnimationClip *_t = static_cast<QAnimationClip *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clipDataChanged((*reinterpret_cast< Qt3DAnimation::QAnimationClipData(*)>(_a[1]))); break;
        case 1: _t->setClipData((*reinterpret_cast< const Qt3DAnimation::QAnimationClipData(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DAnimation::QAnimationClipData >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DAnimation::QAnimationClipData >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAnimationClip::*_t)(Qt3DAnimation::QAnimationClipData );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAnimationClip::clipDataChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DAnimation::QAnimationClipData >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAnimationClip *_t = static_cast<QAnimationClip *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DAnimation::QAnimationClipData*>(_v) = _t->clipData(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAnimationClip *_t = static_cast<QAnimationClip *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setClipData(*reinterpret_cast< Qt3DAnimation::QAnimationClipData*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DAnimation::QAnimationClip::staticMetaObject = {
    { &QAbstractAnimationClip::staticMetaObject, qt_meta_stringdata_Qt3DAnimation__QAnimationClip.data,
      qt_meta_data_Qt3DAnimation__QAnimationClip,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DAnimation::QAnimationClip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DAnimation::QAnimationClip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DAnimation__QAnimationClip.stringdata0))
        return static_cast<void*>(this);
    return QAbstractAnimationClip::qt_metacast(_clname);
}

int Qt3DAnimation::QAnimationClip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAnimationClip::qt_metacall(_c, _id, _a);
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
void Qt3DAnimation::QAnimationClip::clipDataChanged(Qt3DAnimation::QAnimationClipData _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
