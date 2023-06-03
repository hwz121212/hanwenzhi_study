/****************************************************************************
** Meta object code from reading C++ file 'qvertexblendanimation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qvertexblendanimation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvertexblendanimation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DAnimation__QVertexBlendAnimation_t {
    QByteArrayData data[16];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DAnimation__QVertexBlendAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DAnimation__QVertexBlendAnimation_t qt_meta_stringdata_Qt3DAnimation__QVertexBlendAnimation = {
    {
QT_MOC_LITERAL(0, 0, 36), // "Qt3DAnimation::QVertexBlendAn..."
QT_MOC_LITERAL(1, 37, 22), // "targetPositionsChanged"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 14), // "QVector<float>"
QT_MOC_LITERAL(4, 76, 15), // "targetPositions"
QT_MOC_LITERAL(5, 92, 19), // "interpolatorChanged"
QT_MOC_LITERAL(6, 112, 12), // "interpolator"
QT_MOC_LITERAL(7, 125, 13), // "targetChanged"
QT_MOC_LITERAL(8, 139, 30), // "Qt3DRender::QGeometryRenderer*"
QT_MOC_LITERAL(9, 170, 6), // "target"
QT_MOC_LITERAL(10, 177, 17), // "targetNameChanged"
QT_MOC_LITERAL(11, 195, 4), // "name"
QT_MOC_LITERAL(12, 200, 18), // "setTargetPositions"
QT_MOC_LITERAL(13, 219, 9), // "setTarget"
QT_MOC_LITERAL(14, 229, 13), // "setTargetName"
QT_MOC_LITERAL(15, 243, 10) // "targetName"

    },
    "Qt3DAnimation::QVertexBlendAnimation\0"
    "targetPositionsChanged\0\0QVector<float>\0"
    "targetPositions\0interpolatorChanged\0"
    "interpolator\0targetChanged\0"
    "Qt3DRender::QGeometryRenderer*\0target\0"
    "targetNameChanged\0name\0setTargetPositions\0"
    "setTarget\0setTargetName\0targetName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DAnimation__QVertexBlendAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       7,    1,   55,    2, 0x06 /* Public */,
      10,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   61,    2, 0x0a /* Public */,
      13,    1,   64,    2, 0x0a /* Public */,
      14,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, QMetaType::Float, 0x00495001,
       9, 0x80000000 | 8, 0x0049510b,
      15, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Qt3DAnimation::QVertexBlendAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QVertexBlendAnimation *_t = static_cast<QVertexBlendAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->targetPositionsChanged((*reinterpret_cast< const QVector<float>(*)>(_a[1]))); break;
        case 1: _t->interpolatorChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->targetChanged((*reinterpret_cast< Qt3DRender::QGeometryRenderer*(*)>(_a[1]))); break;
        case 3: _t->targetNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->setTargetPositions((*reinterpret_cast< const QVector<float>(*)>(_a[1]))); break;
        case 5: _t->setTarget((*reinterpret_cast< Qt3DRender::QGeometryRenderer*(*)>(_a[1]))); break;
        case 6: _t->setTargetName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<float> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DRender::QGeometryRenderer* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<float> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DRender::QGeometryRenderer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QVertexBlendAnimation::*_t)(const QVector<float> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVertexBlendAnimation::targetPositionsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QVertexBlendAnimation::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVertexBlendAnimation::interpolatorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QVertexBlendAnimation::*_t)(Qt3DRender::QGeometryRenderer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVertexBlendAnimation::targetChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QVertexBlendAnimation::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QVertexBlendAnimation::targetNameChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<float> >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DRender::QGeometryRenderer* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QVertexBlendAnimation *_t = static_cast<QVertexBlendAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector<float>*>(_v) = _t->targetPositions(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->interpolator(); break;
        case 2: *reinterpret_cast< Qt3DRender::QGeometryRenderer**>(_v) = _t->target(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->targetName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QVertexBlendAnimation *_t = static_cast<QVertexBlendAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTargetPositions(*reinterpret_cast< QVector<float>*>(_v)); break;
        case 2: _t->setTarget(*reinterpret_cast< Qt3DRender::QGeometryRenderer**>(_v)); break;
        case 3: _t->setTargetName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DAnimation::QVertexBlendAnimation::staticMetaObject = {
    { &QAbstractAnimation::staticMetaObject, qt_meta_stringdata_Qt3DAnimation__QVertexBlendAnimation.data,
      qt_meta_data_Qt3DAnimation__QVertexBlendAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DAnimation::QVertexBlendAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DAnimation::QVertexBlendAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DAnimation__QVertexBlendAnimation.stringdata0))
        return static_cast<void*>(this);
    return QAbstractAnimation::qt_metacast(_clname);
}

int Qt3DAnimation::QVertexBlendAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAnimation::qt_metacall(_c, _id, _a);
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
void Qt3DAnimation::QVertexBlendAnimation::targetPositionsChanged(const QVector<float> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DAnimation::QVertexBlendAnimation::interpolatorChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DAnimation::QVertexBlendAnimation::targetChanged(Qt3DRender::QGeometryRenderer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qt3DAnimation::QVertexBlendAnimation::targetNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
