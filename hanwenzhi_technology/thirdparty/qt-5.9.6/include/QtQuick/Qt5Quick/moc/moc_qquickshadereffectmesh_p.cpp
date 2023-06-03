/****************************************************************************
** Meta object code from reading C++ file 'qquickshadereffectmesh_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickshadereffectmesh_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickshadereffectmesh_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickShaderEffectMesh_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickShaderEffectMesh_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickShaderEffectMesh_t qt_meta_stringdata_QQuickShaderEffectMesh = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QQuickShaderEffectMesh"
QT_MOC_LITERAL(1, 23, 15), // "geometryChanged"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "QQuickShaderEffectMesh\0geometryChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickShaderEffectMesh[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QQuickShaderEffectMesh::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickShaderEffectMesh *_t = static_cast<QQuickShaderEffectMesh *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->geometryChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickShaderEffectMesh::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickShaderEffectMesh::geometryChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QQuickShaderEffectMesh::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickShaderEffectMesh.data,
      qt_meta_data_QQuickShaderEffectMesh,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickShaderEffectMesh::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickShaderEffectMesh::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickShaderEffectMesh.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickShaderEffectMesh::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QQuickShaderEffectMesh::geometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QQuickGridMesh_t {
    QByteArrayData data[4];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickGridMesh_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickGridMesh_t qt_meta_stringdata_QQuickGridMesh = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickGridMesh"
QT_MOC_LITERAL(1, 15, 17), // "resolutionChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10) // "resolution"

    },
    "QQuickGridMesh\0resolutionChanged\0\0"
    "resolution"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickGridMesh[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QSize, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QQuickGridMesh::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickGridMesh *_t = static_cast<QQuickGridMesh *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resolutionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickGridMesh::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGridMesh::resolutionChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickGridMesh *_t = static_cast<QQuickGridMesh *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSize*>(_v) = _t->resolution(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickGridMesh *_t = static_cast<QQuickGridMesh *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setResolution(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickGridMesh::staticMetaObject = {
    { &QQuickShaderEffectMesh::staticMetaObject, qt_meta_stringdata_QQuickGridMesh.data,
      qt_meta_data_QQuickGridMesh,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickGridMesh::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickGridMesh::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickGridMesh.stringdata0))
        return static_cast<void*>(this);
    return QQuickShaderEffectMesh::qt_metacast(_clname);
}

int QQuickGridMesh::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickShaderEffectMesh::qt_metacall(_c, _id, _a);
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
void QQuickGridMesh::resolutionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QQuickBorderImageMesh_t {
    QByteArrayData data[14];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickBorderImageMesh_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickBorderImageMesh_t qt_meta_stringdata_QQuickBorderImageMesh = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickBorderImageMesh"
QT_MOC_LITERAL(1, 22, 11), // "sizeChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 25), // "horizontalTileModeChanged"
QT_MOC_LITERAL(4, 61, 23), // "verticalTileModeChanged"
QT_MOC_LITERAL(5, 85, 6), // "border"
QT_MOC_LITERAL(6, 92, 16), // "QQuickScaleGrid*"
QT_MOC_LITERAL(7, 109, 4), // "size"
QT_MOC_LITERAL(8, 114, 18), // "horizontalTileMode"
QT_MOC_LITERAL(9, 133, 8), // "TileMode"
QT_MOC_LITERAL(10, 142, 16), // "verticalTileMode"
QT_MOC_LITERAL(11, 159, 7), // "Stretch"
QT_MOC_LITERAL(12, 167, 6), // "Repeat"
QT_MOC_LITERAL(13, 174, 5) // "Round"

    },
    "QQuickBorderImageMesh\0sizeChanged\0\0"
    "horizontalTileModeChanged\0"
    "verticalTileModeChanged\0border\0"
    "QQuickScaleGrid*\0size\0horizontalTileMode\0"
    "TileMode\0verticalTileMode\0Stretch\0"
    "Repeat\0Round"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickBorderImageMesh[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   32, // properties
       1,   48, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x00095409,
       7, QMetaType::QSize, 0x00495103,
       8, 0x80000000 | 9, 0x0049510b,
      10, 0x80000000 | 9, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

 // enums: name, flags, count, data
       9, 0x0,    3,   52,

 // enum data: key, value
      11, uint(QQuickBorderImageMesh::Stretch),
      12, uint(QQuickBorderImageMesh::Repeat),
      13, uint(QQuickBorderImageMesh::Round),

       0        // eod
};

void QQuickBorderImageMesh::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickBorderImageMesh *_t = static_cast<QQuickBorderImageMesh *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeChanged(); break;
        case 1: _t->horizontalTileModeChanged(); break;
        case 2: _t->verticalTileModeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickBorderImageMesh::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickBorderImageMesh::sizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickBorderImageMesh::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickBorderImageMesh::horizontalTileModeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickBorderImageMesh::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickBorderImageMesh::verticalTileModeChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickBorderImageMesh *_t = static_cast<QQuickBorderImageMesh *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickScaleGrid**>(_v) = _t->border(); break;
        case 1: *reinterpret_cast< QSize*>(_v) = _t->size(); break;
        case 2: *reinterpret_cast< TileMode*>(_v) = _t->horizontalTileMode(); break;
        case 3: *reinterpret_cast< TileMode*>(_v) = _t->verticalTileMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickBorderImageMesh *_t = static_cast<QQuickBorderImageMesh *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setSize(*reinterpret_cast< QSize*>(_v)); break;
        case 2: _t->setHorizontalTileMode(*reinterpret_cast< TileMode*>(_v)); break;
        case 3: _t->setVerticalTileMode(*reinterpret_cast< TileMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickBorderImageMesh::staticMetaObject = {
    { &QQuickShaderEffectMesh::staticMetaObject, qt_meta_stringdata_QQuickBorderImageMesh.data,
      qt_meta_data_QQuickBorderImageMesh,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickBorderImageMesh::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickBorderImageMesh::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickBorderImageMesh.stringdata0))
        return static_cast<void*>(this);
    return QQuickShaderEffectMesh::qt_metacast(_clname);
}

int QQuickBorderImageMesh::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickShaderEffectMesh::qt_metacall(_c, _id, _a);
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
void QQuickBorderImageMesh::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickBorderImageMesh::horizontalTileModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickBorderImageMesh::verticalTileModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
