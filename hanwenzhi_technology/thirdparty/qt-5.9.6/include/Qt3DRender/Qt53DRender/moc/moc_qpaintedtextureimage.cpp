/****************************************************************************
** Meta object code from reading C++ file 'qpaintedtextureimage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qpaintedtextureimage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpaintedtextureimage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QPaintedTextureImage_t {
    QByteArrayData data[13];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QPaintedTextureImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QPaintedTextureImage_t qt_meta_stringdata_Qt3DRender__QPaintedTextureImage = {
    {
QT_MOC_LITERAL(0, 0, 32), // "Qt3DRender::QPaintedTextureImage"
QT_MOC_LITERAL(1, 33, 12), // "widthChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 1), // "w"
QT_MOC_LITERAL(4, 49, 13), // "heightChanged"
QT_MOC_LITERAL(5, 63, 11), // "sizeChanged"
QT_MOC_LITERAL(6, 75, 4), // "size"
QT_MOC_LITERAL(7, 80, 8), // "setWidth"
QT_MOC_LITERAL(8, 89, 9), // "setHeight"
QT_MOC_LITERAL(9, 99, 1), // "h"
QT_MOC_LITERAL(10, 101, 7), // "setSize"
QT_MOC_LITERAL(11, 109, 5), // "width"
QT_MOC_LITERAL(12, 115, 6) // "height"

    },
    "Qt3DRender::QPaintedTextureImage\0"
    "widthChanged\0\0w\0heightChanged\0sizeChanged\0"
    "size\0setWidth\0setHeight\0h\0setSize\0"
    "width\0height"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QPaintedTextureImage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   53,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QSize,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QSize,    6,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00495103,
      12, QMetaType::Int, 0x00495103,
       6, QMetaType::QSize, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Qt3DRender::QPaintedTextureImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPaintedTextureImage *_t = static_cast<QPaintedTextureImage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->heightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sizeChanged((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 3: _t->setWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setSize((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QPaintedTextureImage::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPaintedTextureImage::widthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QPaintedTextureImage::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPaintedTextureImage::heightChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QPaintedTextureImage::*_t)(QSize );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPaintedTextureImage::sizeChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QPaintedTextureImage *_t = static_cast<QPaintedTextureImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->width(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->height(); break;
        case 2: *reinterpret_cast< QSize*>(_v) = _t->size(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QPaintedTextureImage *_t = static_cast<QPaintedTextureImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidth(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setHeight(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSize(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QPaintedTextureImage::staticMetaObject = {
    { &QAbstractTextureImage::staticMetaObject, qt_meta_stringdata_Qt3DRender__QPaintedTextureImage.data,
      qt_meta_data_Qt3DRender__QPaintedTextureImage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QPaintedTextureImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QPaintedTextureImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QPaintedTextureImage.stringdata0))
        return static_cast<void*>(this);
    return QAbstractTextureImage::qt_metacast(_clname);
}

int Qt3DRender::QPaintedTextureImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTextureImage::qt_metacall(_c, _id, _a);
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
void Qt3DRender::QPaintedTextureImage::widthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QPaintedTextureImage::heightChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DRender::QPaintedTextureImage::sizeChanged(QSize _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
