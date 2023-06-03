/****************************************************************************
** Meta object code from reading C++ file 'qplanemesh.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qplanemesh.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplanemesh.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DExtras__QPlaneMesh_t {
    QByteArrayData data[15];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DExtras__QPlaneMesh_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DExtras__QPlaneMesh_t qt_meta_stringdata_Qt3DExtras__QPlaneMesh = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Qt3DExtras::QPlaneMesh"
QT_MOC_LITERAL(1, 23, 21), // "meshResolutionChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "meshResolution"
QT_MOC_LITERAL(4, 61, 12), // "widthChanged"
QT_MOC_LITERAL(5, 74, 5), // "width"
QT_MOC_LITERAL(6, 80, 13), // "heightChanged"
QT_MOC_LITERAL(7, 94, 6), // "height"
QT_MOC_LITERAL(8, 101, 15), // "mirroredChanged"
QT_MOC_LITERAL(9, 117, 8), // "mirrored"
QT_MOC_LITERAL(10, 126, 8), // "setWidth"
QT_MOC_LITERAL(11, 135, 9), // "setHeight"
QT_MOC_LITERAL(12, 145, 17), // "setMeshResolution"
QT_MOC_LITERAL(13, 163, 10), // "resolution"
QT_MOC_LITERAL(14, 174, 11) // "setMirrored"

    },
    "Qt3DExtras::QPlaneMesh\0meshResolutionChanged\0"
    "\0meshResolution\0widthChanged\0width\0"
    "heightChanged\0height\0mirroredChanged\0"
    "mirrored\0setWidth\0setHeight\0"
    "setMeshResolution\0resolution\0setMirrored"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DExtras__QPlaneMesh[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   66,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,
      12,    1,   72,    2, 0x0a /* Public */,
      14,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QSize,    3,
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::Bool,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    5,
    QMetaType::Void, QMetaType::Float,    7,
    QMetaType::Void, QMetaType::QSize,   13,
    QMetaType::Void, QMetaType::Bool,    9,

 // properties: name, type, flags
       5, QMetaType::Float, 0x00495103,
       7, QMetaType::Float, 0x00495103,
       3, QMetaType::QSize, 0x00495103,
       9, QMetaType::Bool, 0x00c95103,

 // properties: notify_signal_id
       1,
       2,
       0,
       3,

 // properties: revision
       0,
       0,
       0,
       9,

       0        // eod
};

void Qt3DExtras::QPlaneMesh::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlaneMesh *_t = static_cast<QPlaneMesh *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->meshResolutionChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 1: _t->widthChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->heightChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->mirroredChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setWidth((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->setHeight((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->setMeshResolution((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 7: _t->setMirrored((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QPlaneMesh::*_t)(const QSize & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlaneMesh::meshResolutionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QPlaneMesh::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlaneMesh::widthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QPlaneMesh::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlaneMesh::heightChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QPlaneMesh::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPlaneMesh::mirroredChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QPlaneMesh *_t = static_cast<QPlaneMesh *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->width(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->height(); break;
        case 2: *reinterpret_cast< QSize*>(_v) = _t->meshResolution(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->mirrored(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QPlaneMesh *_t = static_cast<QPlaneMesh *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidth(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setHeight(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setMeshResolution(*reinterpret_cast< QSize*>(_v)); break;
        case 3: _t->setMirrored(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DExtras::QPlaneMesh::staticMetaObject = {
    { &Qt3DRender::QGeometryRenderer::staticMetaObject, qt_meta_stringdata_Qt3DExtras__QPlaneMesh.data,
      qt_meta_data_Qt3DExtras__QPlaneMesh,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DExtras::QPlaneMesh::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DExtras::QPlaneMesh::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DExtras__QPlaneMesh.stringdata0))
        return static_cast<void*>(this);
    return Qt3DRender::QGeometryRenderer::qt_metacast(_clname);
}

int Qt3DExtras::QPlaneMesh::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DRender::QGeometryRenderer::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3DExtras::QPlaneMesh::meshResolutionChanged(const QSize & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DExtras::QPlaneMesh::widthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DExtras::QPlaneMesh::heightChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qt3DExtras::QPlaneMesh::mirroredChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
