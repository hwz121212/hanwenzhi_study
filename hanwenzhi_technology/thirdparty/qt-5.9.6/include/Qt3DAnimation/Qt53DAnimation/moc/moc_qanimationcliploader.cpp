/****************************************************************************
** Meta object code from reading C++ file 'qanimationcliploader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qanimationcliploader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qanimationcliploader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DAnimation__QAnimationClipLoader_t {
    QByteArrayData data[11];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DAnimation__QAnimationClipLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DAnimation__QAnimationClipLoader_t qt_meta_stringdata_Qt3DAnimation__QAnimationClipLoader = {
    {
QT_MOC_LITERAL(0, 0, 35), // "Qt3DAnimation::QAnimationClip..."
QT_MOC_LITERAL(1, 36, 13), // "sourceChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 6), // "source"
QT_MOC_LITERAL(4, 58, 13), // "statusChanged"
QT_MOC_LITERAL(5, 72, 6), // "Status"
QT_MOC_LITERAL(6, 79, 6), // "status"
QT_MOC_LITERAL(7, 86, 9), // "setSource"
QT_MOC_LITERAL(8, 96, 8), // "NotReady"
QT_MOC_LITERAL(9, 105, 5), // "Ready"
QT_MOC_LITERAL(10, 111, 5) // "Error"

    },
    "Qt3DAnimation::QAnimationClipLoader\0"
    "sourceChanged\0\0source\0statusChanged\0"
    "Status\0status\0setSource\0NotReady\0Ready\0"
    "Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DAnimation__QAnimationClipLoader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   38, // properties
       1,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

 // properties: name, type, flags
       3, QMetaType::QUrl, 0x00495103,
       6, 0x80000000 | 5, 0x00495009,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
       5, 0x0,    3,   50,

 // enum data: key, value
       8, uint(Qt3DAnimation::QAnimationClipLoader::NotReady),
       9, uint(Qt3DAnimation::QAnimationClipLoader::Ready),
      10, uint(Qt3DAnimation::QAnimationClipLoader::Error),

       0        // eod
};

void Qt3DAnimation::QAnimationClipLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAnimationClipLoader *_t = static_cast<QAnimationClipLoader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->statusChanged((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 2: _t->setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAnimationClipLoader::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAnimationClipLoader::sourceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAnimationClipLoader::*_t)(Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAnimationClipLoader::statusChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAnimationClipLoader *_t = static_cast<QAnimationClipLoader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        case 1: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAnimationClipLoader *_t = static_cast<QAnimationClipLoader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DAnimation::QAnimationClipLoader::staticMetaObject = {
    { &QAbstractAnimationClip::staticMetaObject, qt_meta_stringdata_Qt3DAnimation__QAnimationClipLoader.data,
      qt_meta_data_Qt3DAnimation__QAnimationClipLoader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DAnimation::QAnimationClipLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DAnimation::QAnimationClipLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DAnimation__QAnimationClipLoader.stringdata0))
        return static_cast<void*>(this);
    return QAbstractAnimationClip::qt_metacast(_clname);
}

int Qt3DAnimation::QAnimationClipLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAnimationClip::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void Qt3DAnimation::QAnimationClipLoader::sourceChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DAnimation::QAnimationClipLoader::statusChanged(Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
