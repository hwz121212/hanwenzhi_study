/****************************************************************************
** Meta object code from reading C++ file 'qgeometry.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgeometry.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeometry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QGeometry_t {
    QByteArrayData data[10];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QGeometry_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QGeometry_t qt_meta_stringdata_Qt3DRender__QGeometry = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Qt3DRender::QGeometry"
QT_MOC_LITERAL(1, 22, 38), // "boundingVolumePositionAttribu..."
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 11), // "QAttribute*"
QT_MOC_LITERAL(4, 74, 31), // "boundingVolumePositionAttribute"
QT_MOC_LITERAL(5, 106, 34), // "setBoundingVolumePositionAttr..."
QT_MOC_LITERAL(6, 141, 12), // "addAttribute"
QT_MOC_LITERAL(7, 154, 23), // "Qt3DRender::QAttribute*"
QT_MOC_LITERAL(8, 178, 9), // "attribute"
QT_MOC_LITERAL(9, 188, 15) // "removeAttribute"

    },
    "Qt3DRender::QGeometry\0"
    "boundingVolumePositionAttributeChanged\0"
    "\0QAttribute*\0boundingVolumePositionAttribute\0"
    "setBoundingVolumePositionAttribute\0"
    "addAttribute\0Qt3DRender::QAttribute*\0"
    "attribute\0removeAttribute"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QGeometry[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x02 /* Public */,
       9,    1,   43,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

 // properties: name, type, flags
       4, 0x80000000 | 7, 0x0049510b,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Qt3DRender::QGeometry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeometry *_t = static_cast<QGeometry *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->boundingVolumePositionAttributeChanged((*reinterpret_cast< QAttribute*(*)>(_a[1]))); break;
        case 1: _t->setBoundingVolumePositionAttribute((*reinterpret_cast< QAttribute*(*)>(_a[1]))); break;
        case 2: _t->addAttribute((*reinterpret_cast< Qt3DRender::QAttribute*(*)>(_a[1]))); break;
        case 3: _t->removeAttribute((*reinterpret_cast< Qt3DRender::QAttribute*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGeometry::*_t)(QAttribute * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeometry::boundingVolumePositionAttributeChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGeometry *_t = static_cast<QGeometry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DRender::QAttribute**>(_v) = _t->boundingVolumePositionAttribute(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGeometry *_t = static_cast<QGeometry *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBoundingVolumePositionAttribute(*reinterpret_cast< Qt3DRender::QAttribute**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QGeometry::staticMetaObject = {
    { &Qt3DCore::QNode::staticMetaObject, qt_meta_stringdata_Qt3DRender__QGeometry.data,
      qt_meta_data_Qt3DRender__QGeometry,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QGeometry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QGeometry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QGeometry.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QNode::qt_metacast(_clname);
}

int Qt3DRender::QGeometry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QNode::qt_metacall(_c, _id, _a);
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
void Qt3DRender::QGeometry::boundingVolumePositionAttributeChanged(QAttribute * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
