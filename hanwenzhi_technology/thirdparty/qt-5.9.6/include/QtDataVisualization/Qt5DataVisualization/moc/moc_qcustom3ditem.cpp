/****************************************************************************
** Meta object code from reading C++ file 'qcustom3ditem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcustom3ditem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcustom3ditem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__QCustom3DItem_t {
    QByteArrayData data[23];
    char stringdata0[338];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__QCustom3DItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__QCustom3DItem_t qt_meta_stringdata_QtDataVisualization__QCustom3DItem = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QtDataVisualization::QCustom3..."
QT_MOC_LITERAL(1, 35, 15), // "meshFileChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 8), // "meshFile"
QT_MOC_LITERAL(4, 61, 18), // "textureFileChanged"
QT_MOC_LITERAL(5, 80, 11), // "textureFile"
QT_MOC_LITERAL(6, 92, 15), // "positionChanged"
QT_MOC_LITERAL(7, 108, 8), // "position"
QT_MOC_LITERAL(8, 117, 23), // "positionAbsoluteChanged"
QT_MOC_LITERAL(9, 141, 16), // "positionAbsolute"
QT_MOC_LITERAL(10, 158, 14), // "scalingChanged"
QT_MOC_LITERAL(11, 173, 7), // "scaling"
QT_MOC_LITERAL(12, 181, 15), // "rotationChanged"
QT_MOC_LITERAL(13, 197, 8), // "rotation"
QT_MOC_LITERAL(14, 206, 14), // "visibleChanged"
QT_MOC_LITERAL(15, 221, 7), // "visible"
QT_MOC_LITERAL(16, 229, 20), // "shadowCastingChanged"
QT_MOC_LITERAL(17, 250, 13), // "shadowCasting"
QT_MOC_LITERAL(18, 264, 22), // "scalingAbsoluteChanged"
QT_MOC_LITERAL(19, 287, 15), // "scalingAbsolute"
QT_MOC_LITERAL(20, 303, 23), // "setRotationAxisAndAngle"
QT_MOC_LITERAL(21, 327, 4), // "axis"
QT_MOC_LITERAL(22, 332, 5) // "angle"

    },
    "QtDataVisualization::QCustom3DItem\0"
    "meshFileChanged\0\0meshFile\0textureFileChanged\0"
    "textureFile\0positionChanged\0position\0"
    "positionAbsoluteChanged\0positionAbsolute\0"
    "scalingChanged\0scaling\0rotationChanged\0"
    "rotation\0visibleChanged\0visible\0"
    "shadowCastingChanged\0shadowCasting\0"
    "scalingAbsoluteChanged\0scalingAbsolute\0"
    "setRotationAxisAndAngle\0axis\0angle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__QCustom3DItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       9,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       8,    1,   83,    2, 0x06 /* Public */,
      10,    1,   86,    2, 0x06 /* Public */,
      12,    1,   89,    2, 0x06 /* Public */,
      14,    1,   92,    2, 0x06 /* Public */,
      16,    1,   95,    2, 0x06 /* Public */,
      18,    1,   98,    2, 0x86 /* Public | MethodRevisioned */,

 // methods: name, argc, parameters, tag, flags
      20,    2,  101,    2, 0x02 /* Public */,

 // signals: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,

 // methods: revision
       0,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QVector3D,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QVector3D,   11,
    QMetaType::Void, QMetaType::QQuaternion,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   19,

 // methods: parameters
    QMetaType::Void, QMetaType::QVector3D, QMetaType::Float,   21,   22,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::QString, 0x00495103,
       7, QMetaType::QVector3D, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
      11, QMetaType::QVector3D, 0x00495103,
      13, QMetaType::QQuaternion, 0x00495103,
      15, QMetaType::Bool, 0x00495103,
      17, QMetaType::Bool, 0x00495103,
      19, QMetaType::Bool, 0x00c95103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

void QtDataVisualization::QCustom3DItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCustom3DItem *_t = static_cast<QCustom3DItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->meshFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->textureFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->positionChanged((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 3: _t->positionAbsoluteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->scalingChanged((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 5: _t->rotationChanged((*reinterpret_cast< const QQuaternion(*)>(_a[1]))); break;
        case 6: _t->visibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->shadowCastingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->scalingAbsoluteChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setRotationAxisAndAngle((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QCustom3DItem::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DItem::meshFileChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCustom3DItem::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DItem::textureFileChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCustom3DItem::*_t)(const QVector3D & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DItem::positionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QCustom3DItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DItem::positionAbsoluteChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QCustom3DItem::*_t)(const QVector3D & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DItem::scalingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QCustom3DItem::*_t)(const QQuaternion & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DItem::rotationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QCustom3DItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DItem::visibleChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QCustom3DItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DItem::shadowCastingChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QCustom3DItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QCustom3DItem::scalingAbsoluteChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QCustom3DItem *_t = static_cast<QCustom3DItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->meshFile(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->textureFile(); break;
        case 2: *reinterpret_cast< QVector3D*>(_v) = _t->position(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isPositionAbsolute(); break;
        case 4: *reinterpret_cast< QVector3D*>(_v) = _t->scaling(); break;
        case 5: *reinterpret_cast< QQuaternion*>(_v) = _t->rotation(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isShadowCasting(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isScalingAbsolute(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QCustom3DItem *_t = static_cast<QCustom3DItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMeshFile(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setTextureFile(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPosition(*reinterpret_cast< QVector3D*>(_v)); break;
        case 3: _t->setPositionAbsolute(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setScaling(*reinterpret_cast< QVector3D*>(_v)); break;
        case 5: _t->setRotation(*reinterpret_cast< QQuaternion*>(_v)); break;
        case 6: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setShadowCasting(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setScalingAbsolute(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QtDataVisualization::QCustom3DItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtDataVisualization__QCustom3DItem.data,
      qt_meta_data_QtDataVisualization__QCustom3DItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::QCustom3DItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::QCustom3DItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__QCustom3DItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtDataVisualization::QCustom3DItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtDataVisualization::QCustom3DItem::meshFileChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtDataVisualization::QCustom3DItem::textureFileChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDataVisualization::QCustom3DItem::positionChanged(const QVector3D & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtDataVisualization::QCustom3DItem::positionAbsoluteChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtDataVisualization::QCustom3DItem::scalingChanged(const QVector3D & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtDataVisualization::QCustom3DItem::rotationChanged(const QQuaternion & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtDataVisualization::QCustom3DItem::visibleChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QtDataVisualization::QCustom3DItem::shadowCastingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QtDataVisualization::QCustom3DItem::scalingAbsoluteChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
