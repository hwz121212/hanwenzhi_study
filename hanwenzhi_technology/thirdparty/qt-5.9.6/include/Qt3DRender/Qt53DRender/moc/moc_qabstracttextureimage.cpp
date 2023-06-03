/****************************************************************************
** Meta object code from reading C++ file 'qabstracttextureimage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qabstracttextureimage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstracttextureimage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QAbstractTextureImage_t {
    QByteArrayData data[14];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QAbstractTextureImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QAbstractTextureImage_t qt_meta_stringdata_Qt3DRender__QAbstractTextureImage = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Qt3DRender::QAbstractTextureI..."
QT_MOC_LITERAL(1, 34, 15), // "mipLevelChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 8), // "mipLevel"
QT_MOC_LITERAL(4, 60, 12), // "layerChanged"
QT_MOC_LITERAL(5, 73, 5), // "layer"
QT_MOC_LITERAL(6, 79, 11), // "faceChanged"
QT_MOC_LITERAL(7, 91, 29), // "QAbstractTexture::CubeMapFace"
QT_MOC_LITERAL(8, 121, 4), // "face"
QT_MOC_LITERAL(9, 126, 11), // "setMipLevel"
QT_MOC_LITERAL(10, 138, 5), // "level"
QT_MOC_LITERAL(11, 144, 8), // "setLayer"
QT_MOC_LITERAL(12, 153, 7), // "setFace"
QT_MOC_LITERAL(13, 161, 41) // "Qt3DRender::QAbstractTexture:..."

    },
    "Qt3DRender::QAbstractTextureImage\0"
    "mipLevelChanged\0\0mipLevel\0layerChanged\0"
    "layer\0faceChanged\0QAbstractTexture::CubeMapFace\0"
    "face\0setMipLevel\0level\0setLayer\0setFace\0"
    "Qt3DRender::QAbstractTexture::CubeMapFace"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QAbstractTextureImage[] = {

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
       6,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   53,    2, 0x0a /* Public */,
      11,    1,   56,    2, 0x0a /* Public */,
      12,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,
       5, QMetaType::Int, 0x00495103,
       8, 0x80000000 | 13, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Qt3DRender::QAbstractTextureImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractTextureImage *_t = static_cast<QAbstractTextureImage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mipLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->layerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->faceChanged((*reinterpret_cast< QAbstractTexture::CubeMapFace(*)>(_a[1]))); break;
        case 3: _t->setMipLevel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setLayer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setFace((*reinterpret_cast< QAbstractTexture::CubeMapFace(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAbstractTextureImage::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractTextureImage::mipLevelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractTextureImage::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractTextureImage::layerChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAbstractTextureImage::*_t)(QAbstractTexture::CubeMapFace );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAbstractTextureImage::faceChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAbstractTextureImage *_t = static_cast<QAbstractTextureImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->mipLevel(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->layer(); break;
        case 2: *reinterpret_cast< Qt3DRender::QAbstractTexture::CubeMapFace*>(_v) = _t->face(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAbstractTextureImage *_t = static_cast<QAbstractTextureImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMipLevel(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setLayer(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setFace(*reinterpret_cast< Qt3DRender::QAbstractTexture::CubeMapFace*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_Qt3DRender__QAbstractTextureImage[] = {
        &Qt3DRender::QAbstractTexture::staticMetaObject,
    nullptr
};

const QMetaObject Qt3DRender::QAbstractTextureImage::staticMetaObject = {
    { &Qt3DCore::QNode::staticMetaObject, qt_meta_stringdata_Qt3DRender__QAbstractTextureImage.data,
      qt_meta_data_Qt3DRender__QAbstractTextureImage,  qt_static_metacall, qt_meta_extradata_Qt3DRender__QAbstractTextureImage, nullptr}
};


const QMetaObject *Qt3DRender::QAbstractTextureImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QAbstractTextureImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QAbstractTextureImage.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QNode::qt_metacast(_clname);
}

int Qt3DRender::QAbstractTextureImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QNode::qt_metacall(_c, _id, _a);
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
void Qt3DRender::QAbstractTextureImage::mipLevelChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QAbstractTextureImage::layerChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DRender::QAbstractTextureImage::faceChanged(QAbstractTexture::CubeMapFace _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
