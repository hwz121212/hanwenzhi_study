/****************************************************************************
** Meta object code from reading C++ file 'qextrudedtextgeometry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qextrudedtextgeometry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qextrudedtextgeometry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DExtras__QExtrudedTextGeometry_t {
    QByteArrayData data[15];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DExtras__QExtrudedTextGeometry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DExtras__QExtrudedTextGeometry_t qt_meta_stringdata_Qt3DExtras__QExtrudedTextGeometry = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Qt3DExtras::QExtrudedTextGeom..."
QT_MOC_LITERAL(1, 34, 11), // "textChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 4), // "text"
QT_MOC_LITERAL(4, 52, 11), // "fontChanged"
QT_MOC_LITERAL(5, 64, 4), // "font"
QT_MOC_LITERAL(6, 69, 12), // "depthChanged"
QT_MOC_LITERAL(7, 82, 15), // "extrusionLength"
QT_MOC_LITERAL(8, 98, 7), // "setText"
QT_MOC_LITERAL(9, 106, 7), // "setFont"
QT_MOC_LITERAL(10, 114, 8), // "setDepth"
QT_MOC_LITERAL(11, 123, 17), // "positionAttribute"
QT_MOC_LITERAL(12, 141, 23), // "Qt3DRender::QAttribute*"
QT_MOC_LITERAL(13, 165, 15), // "normalAttribute"
QT_MOC_LITERAL(14, 181, 14) // "indexAttribute"

    },
    "Qt3DExtras::QExtrudedTextGeometry\0"
    "textChanged\0\0text\0fontChanged\0font\0"
    "depthChanged\0extrusionLength\0setText\0"
    "setFont\0setDepth\0positionAttribute\0"
    "Qt3DRender::QAttribute*\0normalAttribute\0"
    "indexAttribute"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DExtras__QExtrudedTextGeometry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   53,    2, 0x0a /* Public */,
       9,    1,   56,    2, 0x0a /* Public */,
      10,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QFont,    5,
    QMetaType::Void, QMetaType::Float,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QFont,    5,
    QMetaType::Void, QMetaType::Float,    7,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::QFont, 0x00495103,
       7, QMetaType::Float, 0x00495003,
      11, 0x80000000 | 12, 0x00095409,
      13, 0x80000000 | 12, 0x00095409,
      14, 0x80000000 | 12, 0x00095409,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,
       0,
       0,

       0        // eod
};

void Qt3DExtras::QExtrudedTextGeometry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QExtrudedTextGeometry *_t = static_cast<QExtrudedTextGeometry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->fontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 2: _t->depthChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 5: _t->setDepth((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QExtrudedTextGeometry::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QExtrudedTextGeometry::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QExtrudedTextGeometry::*_t)(const QFont & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QExtrudedTextGeometry::fontChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QExtrudedTextGeometry::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QExtrudedTextGeometry::depthChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QExtrudedTextGeometry *_t = static_cast<QExtrudedTextGeometry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->extrusionLength(); break;
        case 3: *reinterpret_cast< Qt3DRender::QAttribute**>(_v) = _t->positionAttribute(); break;
        case 4: *reinterpret_cast< Qt3DRender::QAttribute**>(_v) = _t->normalAttribute(); break;
        case 5: *reinterpret_cast< Qt3DRender::QAttribute**>(_v) = _t->indexAttribute(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QExtrudedTextGeometry *_t = static_cast<QExtrudedTextGeometry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 2: _t->setDepth(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DExtras::QExtrudedTextGeometry::staticMetaObject = {
    { &Qt3DRender::QGeometry::staticMetaObject, qt_meta_stringdata_Qt3DExtras__QExtrudedTextGeometry.data,
      qt_meta_data_Qt3DExtras__QExtrudedTextGeometry,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DExtras::QExtrudedTextGeometry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DExtras::QExtrudedTextGeometry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DExtras__QExtrudedTextGeometry.stringdata0))
        return static_cast<void*>(this);
    return Qt3DRender::QGeometry::qt_metacast(_clname);
}

int Qt3DExtras::QExtrudedTextGeometry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DRender::QGeometry::qt_metacall(_c, _id, _a);
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
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Qt3DExtras::QExtrudedTextGeometry::textChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DExtras::QExtrudedTextGeometry::fontChanged(const QFont & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DExtras::QExtrudedTextGeometry::depthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
