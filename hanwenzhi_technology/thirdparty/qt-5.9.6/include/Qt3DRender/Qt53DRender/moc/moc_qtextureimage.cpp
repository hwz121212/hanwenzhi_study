/****************************************************************************
** Meta object code from reading C++ file 'qtextureimage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qtextureimage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtextureimage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QTextureImage_t {
    QByteArrayData data[15];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QTextureImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QTextureImage_t qt_meta_stringdata_Qt3DRender__QTextureImage = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Qt3DRender::QTextureImage"
QT_MOC_LITERAL(1, 26, 13), // "sourceChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "source"
QT_MOC_LITERAL(4, 48, 13), // "statusChanged"
QT_MOC_LITERAL(5, 62, 6), // "Status"
QT_MOC_LITERAL(6, 69, 6), // "status"
QT_MOC_LITERAL(7, 76, 15), // "mirroredChanged"
QT_MOC_LITERAL(8, 92, 8), // "mirrored"
QT_MOC_LITERAL(9, 101, 9), // "setSource"
QT_MOC_LITERAL(10, 111, 11), // "setMirrored"
QT_MOC_LITERAL(11, 123, 4), // "None"
QT_MOC_LITERAL(12, 128, 7), // "Loading"
QT_MOC_LITERAL(13, 136, 5), // "Ready"
QT_MOC_LITERAL(14, 142, 5) // "Error"

    },
    "Qt3DRender::QTextureImage\0sourceChanged\0"
    "\0source\0statusChanged\0Status\0status\0"
    "mirroredChanged\0mirrored\0setSource\0"
    "setMirrored\0None\0Loading\0Ready\0Error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QTextureImage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   54, // properties
       1,   66, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       7,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   48,    2, 0x0a /* Public */,
      10,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::Bool,    8,

 // properties: name, type, flags
       3, QMetaType::QUrl, 0x00495103,
       6, 0x80000000 | 5, 0x00495009,
       8, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
       5, 0x0,    4,   70,

 // enum data: key, value
      11, uint(Qt3DRender::QTextureImage::None),
      12, uint(Qt3DRender::QTextureImage::Loading),
      13, uint(Qt3DRender::QTextureImage::Ready),
      14, uint(Qt3DRender::QTextureImage::Error),

       0        // eod
};

void Qt3DRender::QTextureImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTextureImage *_t = static_cast<QTextureImage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->statusChanged((*reinterpret_cast< Status(*)>(_a[1]))); break;
        case 2: _t->mirroredChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->setMirrored((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QTextureImage::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTextureImage::sourceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QTextureImage::*_t)(Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTextureImage::statusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QTextureImage::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTextureImage::mirroredChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QTextureImage *_t = static_cast<QTextureImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        case 1: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isMirrored(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QTextureImage *_t = static_cast<QTextureImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 2: _t->setMirrored(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QTextureImage::staticMetaObject = {
    { &QAbstractTextureImage::staticMetaObject, qt_meta_stringdata_Qt3DRender__QTextureImage.data,
      qt_meta_data_Qt3DRender__QTextureImage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QTextureImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QTextureImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QTextureImage.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTextureImage::qt_metacast(_clname);
}

int Qt3DRender::QTextureImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTextureImage::qt_metacall(_c, _id, _a);
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
void Qt3DRender::QTextureImage::sourceChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QTextureImage::statusChanged(Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DRender::QTextureImage::mirroredChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
