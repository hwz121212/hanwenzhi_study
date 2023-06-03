/****************************************************************************
** Meta object code from reading C++ file 'qrendercapture.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qrendercapture.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qrendercapture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QRenderCaptureReply_t {
    QByteArrayData data[11];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QRenderCaptureReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QRenderCaptureReply_t qt_meta_stringdata_Qt3DRender__QRenderCaptureReply = {
    {
QT_MOC_LITERAL(0, 0, 31), // "Qt3DRender::QRenderCaptureReply"
QT_MOC_LITERAL(1, 32, 15), // "completeChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 10), // "isComplete"
QT_MOC_LITERAL(4, 60, 9), // "completed"
QT_MOC_LITERAL(5, 70, 9), // "saveImage"
QT_MOC_LITERAL(6, 80, 8), // "fileName"
QT_MOC_LITERAL(7, 89, 10), // "saveToFile"
QT_MOC_LITERAL(8, 100, 5), // "image"
QT_MOC_LITERAL(9, 106, 9), // "captureId"
QT_MOC_LITERAL(10, 116, 8) // "complete"

    },
    "Qt3DRender::QRenderCaptureReply\0"
    "completeChanged\0\0isComplete\0completed\0"
    "saveImage\0fileName\0saveToFile\0image\0"
    "captureId\0complete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QRenderCaptureReply[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    0,   37,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   38,    2, 0x02 /* Public */,
       7,    1,   41,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
       8, QMetaType::QImage, 0x00095401,
       9, QMetaType::Int, 0x00095401,
      10, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,

       0        // eod
};

void Qt3DRender::QRenderCaptureReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRenderCaptureReply *_t = static_cast<QRenderCaptureReply *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->completeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->completed(); break;
        case 2: { bool _r = _t->saveImage((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->saveToFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QRenderCaptureReply::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRenderCaptureReply::completeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QRenderCaptureReply::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRenderCaptureReply::completed)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QRenderCaptureReply *_t = static_cast<QRenderCaptureReply *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QImage*>(_v) = _t->image(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->captureId(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isComplete(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QRenderCaptureReply::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3DRender__QRenderCaptureReply.data,
      qt_meta_data_Qt3DRender__QRenderCaptureReply,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QRenderCaptureReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QRenderCaptureReply::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QRenderCaptureReply.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qt3DRender::QRenderCaptureReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void Qt3DRender::QRenderCaptureReply::completeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QRenderCaptureReply::completed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_Qt3DRender__QRenderCapture_t {
    QByteArrayData data[5];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QRenderCapture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QRenderCapture_t qt_meta_stringdata_Qt3DRender__QRenderCapture = {
    {
QT_MOC_LITERAL(0, 0, 26), // "Qt3DRender::QRenderCapture"
QT_MOC_LITERAL(1, 27, 14), // "requestCapture"
QT_MOC_LITERAL(2, 42, 32), // "Qt3DRender::QRenderCaptureReply*"
QT_MOC_LITERAL(3, 75, 0), // ""
QT_MOC_LITERAL(4, 76, 9) // "captureId"

    },
    "Qt3DRender::QRenderCapture\0requestCapture\0"
    "Qt3DRender::QRenderCaptureReply*\0\0"
    "captureId"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QRenderCapture[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    1,   26,    3, 0x02 /* Public */,
       1,    0,   29,    3, 0x82 /* Public | MethodRevisioned */,

 // methods: revision
       0,
       9,

 // methods: parameters
    0x80000000 | 2, QMetaType::Int,    4,
    0x80000000 | 2,

       0        // eod
};

void Qt3DRender::QRenderCapture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRenderCapture *_t = static_cast<QRenderCapture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { Qt3DRender::QRenderCaptureReply* _r = _t->requestCapture((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt3DRender::QRenderCaptureReply**>(_a[0]) = std::move(_r); }  break;
        case 1: { Qt3DRender::QRenderCaptureReply* _r = _t->requestCapture();
            if (_a[0]) *reinterpret_cast< Qt3DRender::QRenderCaptureReply**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject Qt3DRender::QRenderCapture::staticMetaObject = {
    { &QFrameGraphNode::staticMetaObject, qt_meta_stringdata_Qt3DRender__QRenderCapture.data,
      qt_meta_data_Qt3DRender__QRenderCapture,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QRenderCapture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QRenderCapture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QRenderCapture.stringdata0))
        return static_cast<void*>(this);
    return QFrameGraphNode::qt_metacast(_clname);
}

int Qt3DRender::QRenderCapture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrameGraphNode::qt_metacall(_c, _id, _a);
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
