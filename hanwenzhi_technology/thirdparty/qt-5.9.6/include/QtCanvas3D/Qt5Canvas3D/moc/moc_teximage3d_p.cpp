/****************************************************************************
** Meta object code from reading C++ file 'teximage3d_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCanvas3D/private/teximage3d_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'teximage3d_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCanvas3D__CanvasTextureImageFactory_t {
    QByteArrayData data[4];
    char stringdata0[60];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCanvas3D__CanvasTextureImageFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCanvas3D__CanvasTextureImageFactory_t qt_meta_stringdata_QtCanvas3D__CanvasTextureImageFactory = {
    {
QT_MOC_LITERAL(0, 0, 37), // "QtCanvas3D::CanvasTextureImag..."
QT_MOC_LITERAL(1, 38, 11), // "newTexImage"
QT_MOC_LITERAL(2, 50, 8), // "QJSValue"
QT_MOC_LITERAL(3, 59, 0) // ""

    },
    "QtCanvas3D::CanvasTextureImageFactory\0"
    "newTexImage\0QJSValue\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCanvas3D__CanvasTextureImageFactory[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   19,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2,

       0        // eod
};

void QtCanvas3D::CanvasTextureImageFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CanvasTextureImageFactory *_t = static_cast<CanvasTextureImageFactory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QJSValue _r = _t->newTexImage();
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject QtCanvas3D::CanvasTextureImageFactory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCanvas3D__CanvasTextureImageFactory.data,
      qt_meta_data_QtCanvas3D__CanvasTextureImageFactory,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCanvas3D::CanvasTextureImageFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCanvas3D::CanvasTextureImageFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCanvas3D__CanvasTextureImageFactory.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtCanvas3D::CanvasTextureImageFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_QtCanvas3D__CanvasTextureImage_t {
    QByteArrayData data[32];
    char stringdata0[377];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCanvas3D__CanvasTextureImage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCanvas3D__CanvasTextureImage_t qt_meta_stringdata_QtCanvas3D__CanvasTextureImage = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QtCanvas3D::CanvasTextureImage"
QT_MOC_LITERAL(1, 31, 10), // "srcChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 6), // "source"
QT_MOC_LITERAL(4, 50, 17), // "imageStateChanged"
QT_MOC_LITERAL(5, 68, 17), // "TextureImageState"
QT_MOC_LITERAL(6, 86, 5), // "state"
QT_MOC_LITERAL(7, 92, 12), // "widthChanged"
QT_MOC_LITERAL(8, 105, 5), // "width"
QT_MOC_LITERAL(9, 111, 13), // "heightChanged"
QT_MOC_LITERAL(10, 125, 6), // "height"
QT_MOC_LITERAL(11, 132, 18), // "errorStringChanged"
QT_MOC_LITERAL(12, 151, 11), // "errorString"
QT_MOC_LITERAL(13, 163, 15), // "anythingChanged"
QT_MOC_LITERAL(14, 179, 9), // "QVariant*"
QT_MOC_LITERAL(15, 189, 5), // "value"
QT_MOC_LITERAL(16, 195, 19), // "imageLoadingStarted"
QT_MOC_LITERAL(17, 215, 19), // "CanvasTextureImage*"
QT_MOC_LITERAL(18, 235, 5), // "image"
QT_MOC_LITERAL(19, 241, 11), // "imageLoaded"
QT_MOC_LITERAL(20, 253, 18), // "imageLoadingFailed"
QT_MOC_LITERAL(21, 272, 6), // "create"
QT_MOC_LITERAL(22, 279, 8), // "QJSValue"
QT_MOC_LITERAL(23, 288, 2), // "id"
QT_MOC_LITERAL(24, 291, 6), // "resize"
QT_MOC_LITERAL(25, 298, 3), // "src"
QT_MOC_LITERAL(26, 302, 10), // "imageState"
QT_MOC_LITERAL(27, 313, 11), // "INITIALIZED"
QT_MOC_LITERAL(28, 325, 12), // "LOAD_PENDING"
QT_MOC_LITERAL(29, 338, 7), // "LOADING"
QT_MOC_LITERAL(30, 346, 16), // "LOADING_FINISHED"
QT_MOC_LITERAL(31, 363, 13) // "LOADING_ERROR"

    },
    "QtCanvas3D::CanvasTextureImage\0"
    "srcChanged\0\0source\0imageStateChanged\0"
    "TextureImageState\0state\0widthChanged\0"
    "width\0heightChanged\0height\0"
    "errorStringChanged\0errorString\0"
    "anythingChanged\0QVariant*\0value\0"
    "imageLoadingStarted\0CanvasTextureImage*\0"
    "image\0imageLoaded\0imageLoadingFailed\0"
    "create\0QJSValue\0id\0resize\0src\0imageState\0"
    "INITIALIZED\0LOAD_PENDING\0LOADING\0"
    "LOADING_FINISHED\0LOADING_ERROR"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCanvas3D__CanvasTextureImage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       5,  108, // properties
       1,  128, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       7,    1,   80,    2, 0x06 /* Public */,
       9,    1,   83,    2, 0x06 /* Public */,
      11,    1,   86,    2, 0x06 /* Public */,
      13,    1,   89,    2, 0x06 /* Public */,
      16,    1,   92,    2, 0x06 /* Public */,
      19,    1,   95,    2, 0x06 /* Public */,
      20,    1,   98,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      21,    0,  101,    2, 0x02 /* Public */,
      23,    0,  102,    2, 0x02 /* Public */,
      24,    2,  103,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,

 // methods: parameters
    0x80000000 | 22,
    QMetaType::ULong,
    0x80000000 | 22, QMetaType::Int, QMetaType::Int,    8,   10,

 // properties: name, type, flags
      25, QMetaType::QUrl, 0x00495103,
      26, 0x80000000 | 5, 0x00495009,
       8, QMetaType::Int, 0x00495001,
      10, QMetaType::Int, 0x00495001,
      12, QMetaType::QString, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

 // enums: name, flags, count, data
       5, 0x0,    5,  132,

 // enum data: key, value
      27, uint(QtCanvas3D::CanvasTextureImage::INITIALIZED),
      28, uint(QtCanvas3D::CanvasTextureImage::LOAD_PENDING),
      29, uint(QtCanvas3D::CanvasTextureImage::LOADING),
      30, uint(QtCanvas3D::CanvasTextureImage::LOADING_FINISHED),
      31, uint(QtCanvas3D::CanvasTextureImage::LOADING_ERROR),

       0        // eod
};

void QtCanvas3D::CanvasTextureImage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CanvasTextureImage *_t = static_cast<CanvasTextureImage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->srcChanged((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 1: _t->imageStateChanged((*reinterpret_cast< TextureImageState(*)>(_a[1]))); break;
        case 2: _t->widthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->heightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->errorStringChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->anythingChanged((*reinterpret_cast< QVariant*(*)>(_a[1]))); break;
        case 6: _t->imageLoadingStarted((*reinterpret_cast< CanvasTextureImage*(*)>(_a[1]))); break;
        case 7: _t->imageLoaded((*reinterpret_cast< CanvasTextureImage*(*)>(_a[1]))); break;
        case 8: _t->imageLoadingFailed((*reinterpret_cast< CanvasTextureImage*(*)>(_a[1]))); break;
        case 9: { QJSValue _r = _t->create();
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 10: { ulong _r = _t->id();
            if (_a[0]) *reinterpret_cast< ulong*>(_a[0]) = std::move(_r); }  break;
        case 11: { QJSValue _r = _t->resize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CanvasTextureImage* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CanvasTextureImage* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< CanvasTextureImage* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CanvasTextureImage::*_t)(QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasTextureImage::srcChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CanvasTextureImage::*_t)(TextureImageState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasTextureImage::imageStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CanvasTextureImage::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasTextureImage::widthChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CanvasTextureImage::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasTextureImage::heightChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CanvasTextureImage::*_t)(const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasTextureImage::errorStringChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CanvasTextureImage::*_t)(QVariant * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasTextureImage::anythingChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (CanvasTextureImage::*_t)(CanvasTextureImage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasTextureImage::imageLoadingStarted)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (CanvasTextureImage::*_t)(CanvasTextureImage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasTextureImage::imageLoaded)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (CanvasTextureImage::*_t)(CanvasTextureImage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanvasTextureImage::imageLoadingFailed)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CanvasTextureImage *_t = static_cast<CanvasTextureImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->src(); break;
        case 1: *reinterpret_cast< TextureImageState*>(_v) = _t->imageState(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->width(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->height(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CanvasTextureImage *_t = static_cast<CanvasTextureImage *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSrc(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtCanvas3D::CanvasTextureImage::staticMetaObject = {
    { &CanvasAbstractObject::staticMetaObject, qt_meta_stringdata_QtCanvas3D__CanvasTextureImage.data,
      qt_meta_data_QtCanvas3D__CanvasTextureImage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCanvas3D::CanvasTextureImage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCanvas3D::CanvasTextureImage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCanvas3D__CanvasTextureImage.stringdata0))
        return static_cast<void*>(this);
    return CanvasAbstractObject::qt_metacast(_clname);
}

int QtCanvas3D::CanvasTextureImage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CanvasAbstractObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
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
void QtCanvas3D::CanvasTextureImage::srcChanged(QUrl _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCanvas3D::CanvasTextureImage::imageStateChanged(TextureImageState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCanvas3D::CanvasTextureImage::widthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCanvas3D::CanvasTextureImage::heightChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCanvas3D::CanvasTextureImage::errorStringChanged(const QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtCanvas3D::CanvasTextureImage::anythingChanged(QVariant * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtCanvas3D::CanvasTextureImage::imageLoadingStarted(CanvasTextureImage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QtCanvas3D::CanvasTextureImage::imageLoaded(CanvasTextureImage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QtCanvas3D::CanvasTextureImage::imageLoadingFailed(CanvasTextureImage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
