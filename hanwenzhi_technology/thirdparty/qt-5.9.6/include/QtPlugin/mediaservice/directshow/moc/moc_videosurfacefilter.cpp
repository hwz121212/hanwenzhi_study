/****************************************************************************
** Meta object code from reading C++ file 'videosurfacefilter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../player/videosurfacefilter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videosurfacefilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VideoSurfaceFilter_t {
    QByteArrayData data[4];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VideoSurfaceFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VideoSurfaceFilter_t qt_meta_stringdata_VideoSurfaceFilter = {
    {
QT_MOC_LITERAL(0, 0, 18), // "VideoSurfaceFilter"
QT_MOC_LITERAL(1, 19, 23), // "supportedFormatsChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 8) // "checkEOS"

    },
    "VideoSurfaceFilter\0supportedFormatsChanged\0"
    "\0checkEOS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoSurfaceFilter[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VideoSurfaceFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoSurfaceFilter *_t = static_cast<VideoSurfaceFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->supportedFormatsChanged(); break;
        case 1: _t->checkEOS(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject VideoSurfaceFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_VideoSurfaceFilter.data,
      qt_meta_data_VideoSurfaceFilter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *VideoSurfaceFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoSurfaceFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VideoSurfaceFilter.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "DirectShowBaseFilter"))
        return static_cast< DirectShowBaseFilter*>(this);
    if (!strcmp(_clname, "IAMFilterMiscFlags"))
        return static_cast< IAMFilterMiscFlags*>(this);
    return QObject::qt_metacast(_clname);
}

int VideoSurfaceFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
