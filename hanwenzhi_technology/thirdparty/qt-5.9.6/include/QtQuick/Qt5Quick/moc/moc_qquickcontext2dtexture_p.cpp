/****************************************************************************
** Meta object code from reading C++ file 'qquickcontext2dtexture_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickcontext2dtexture_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickcontext2dtexture_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickContext2DTexture_t {
    QByteArrayData data[19];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickContext2DTexture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickContext2DTexture_t qt_meta_stringdata_QQuickContext2DTexture = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QQuickContext2DTexture"
QT_MOC_LITERAL(1, 23, 14), // "textureChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "canvasChanged"
QT_MOC_LITERAL(4, 53, 10), // "canvasSize"
QT_MOC_LITERAL(5, 64, 8), // "tileSize"
QT_MOC_LITERAL(6, 73, 12), // "canvasWindow"
QT_MOC_LITERAL(7, 86, 9), // "dirtyRect"
QT_MOC_LITERAL(8, 96, 6), // "smooth"
QT_MOC_LITERAL(9, 103, 12), // "antialiasing"
QT_MOC_LITERAL(10, 116, 5), // "paint"
QT_MOC_LITERAL(11, 122, 29), // "QQuickContext2DCommandBuffer*"
QT_MOC_LITERAL(12, 152, 3), // "ccb"
QT_MOC_LITERAL(13, 156, 16), // "markDirtyTexture"
QT_MOC_LITERAL(14, 173, 7), // "setItem"
QT_MOC_LITERAL(15, 181, 17), // "QQuickCanvasItem*"
QT_MOC_LITERAL(16, 199, 4), // "item"
QT_MOC_LITERAL(17, 204, 9), // "grabImage"
QT_MOC_LITERAL(18, 214, 6) // "region"

    },
    "QQuickContext2DTexture\0textureChanged\0"
    "\0canvasChanged\0canvasSize\0tileSize\0"
    "canvasWindow\0dirtyRect\0smooth\0"
    "antialiasing\0paint\0QQuickContext2DCommandBuffer*\0"
    "ccb\0markDirtyTexture\0setItem\0"
    "QQuickCanvasItem*\0item\0grabImage\0"
    "region"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickContext2DTexture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    6,   50,    2, 0x0a /* Public */,
      10,    1,   63,    2, 0x0a /* Public */,
      13,    0,   66,    2, 0x0a /* Public */,
      14,    1,   67,    2, 0x0a /* Public */,
      17,    1,   70,    2, 0x0a /* Public */,
      17,    0,   73,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QSize, QMetaType::QSize, QMetaType::QRect, QMetaType::QRect, QMetaType::Bool, QMetaType::Bool,    4,    5,    6,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QRectF,   18,
    QMetaType::Void,

       0        // eod
};

void QQuickContext2DTexture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickContext2DTexture *_t = static_cast<QQuickContext2DTexture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textureChanged(); break;
        case 1: _t->canvasChanged((*reinterpret_cast< const QSize(*)>(_a[1])),(*reinterpret_cast< const QSize(*)>(_a[2])),(*reinterpret_cast< const QRect(*)>(_a[3])),(*reinterpret_cast< const QRect(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 2: _t->paint((*reinterpret_cast< QQuickContext2DCommandBuffer*(*)>(_a[1]))); break;
        case 3: _t->markDirtyTexture(); break;
        case 4: _t->setItem((*reinterpret_cast< QQuickCanvasItem*(*)>(_a[1]))); break;
        case 5: _t->grabImage((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 6: _t->grabImage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickCanvasItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickContext2DTexture::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickContext2DTexture::textureChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QQuickContext2DTexture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickContext2DTexture.data,
      qt_meta_data_QQuickContext2DTexture,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickContext2DTexture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickContext2DTexture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickContext2DTexture.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickContext2DTexture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QQuickContext2DTexture::textureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QQuickContext2DFBOTexture_t {
    QByteArrayData data[4];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickContext2DFBOTexture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickContext2DFBOTexture_t qt_meta_stringdata_QQuickContext2DFBOTexture = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QQuickContext2DFBOTexture"
QT_MOC_LITERAL(1, 26, 9), // "grabImage"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 6) // "region"

    },
    "QQuickContext2DFBOTexture\0grabImage\0"
    "\0region"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickContext2DFBOTexture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       1,    0,   27,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::QRectF,    3,
    QMetaType::Void,

       0        // eod
};

void QQuickContext2DFBOTexture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickContext2DFBOTexture *_t = static_cast<QQuickContext2DFBOTexture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->grabImage((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 1: _t->grabImage(); break;
        default: ;
        }
    }
}

const QMetaObject QQuickContext2DFBOTexture::staticMetaObject = {
    { &QQuickContext2DTexture::staticMetaObject, qt_meta_stringdata_QQuickContext2DFBOTexture.data,
      qt_meta_data_QQuickContext2DFBOTexture,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickContext2DFBOTexture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickContext2DFBOTexture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickContext2DFBOTexture.stringdata0))
        return static_cast<void*>(this);
    return QQuickContext2DTexture::qt_metacast(_clname);
}

int QQuickContext2DFBOTexture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickContext2DTexture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_QQuickContext2DImageTexture_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickContext2DImageTexture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickContext2DImageTexture_t qt_meta_stringdata_QQuickContext2DImageTexture = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QQuickContext2DImageTexture"
QT_MOC_LITERAL(1, 28, 9), // "grabImage"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 6) // "region"

    },
    "QQuickContext2DImageTexture\0grabImage\0"
    "\0region"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickContext2DImageTexture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       1,    0,   27,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::QRectF,    3,
    QMetaType::Void,

       0        // eod
};

void QQuickContext2DImageTexture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickContext2DImageTexture *_t = static_cast<QQuickContext2DImageTexture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->grabImage((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 1: _t->grabImage(); break;
        default: ;
        }
    }
}

const QMetaObject QQuickContext2DImageTexture::staticMetaObject = {
    { &QQuickContext2DTexture::staticMetaObject, qt_meta_stringdata_QQuickContext2DImageTexture.data,
      qt_meta_data_QQuickContext2DImageTexture,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickContext2DImageTexture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickContext2DImageTexture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickContext2DImageTexture.stringdata0))
        return static_cast<void*>(this);
    return QQuickContext2DTexture::qt_metacast(_clname);
}

int QQuickContext2DImageTexture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickContext2DTexture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
