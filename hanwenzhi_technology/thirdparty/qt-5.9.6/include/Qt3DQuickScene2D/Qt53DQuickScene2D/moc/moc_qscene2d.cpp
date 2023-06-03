/****************************************************************************
** Meta object code from reading C++ file 'qscene2d.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qscene2d.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscene2d.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__Quick__QScene2D_t {
    QByteArrayData data[23];
    char stringdata0[317];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__Quick__QScene2D_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__Quick__QScene2D_t qt_meta_stringdata_Qt3DRender__Quick__QScene2D = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Qt3DRender::Quick::QScene2D"
QT_MOC_LITERAL(1, 28, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 44, 4), // "item"
QT_MOC_LITERAL(3, 49, 13), // "outputChanged"
QT_MOC_LITERAL(4, 63, 0), // ""
QT_MOC_LITERAL(5, 64, 32), // "Qt3DRender::QRenderTargetOutput*"
QT_MOC_LITERAL(6, 97, 6), // "output"
QT_MOC_LITERAL(7, 104, 19), // "renderPolicyChanged"
QT_MOC_LITERAL(8, 124, 22), // "QScene2D::RenderPolicy"
QT_MOC_LITERAL(9, 147, 6), // "policy"
QT_MOC_LITERAL(10, 154, 11), // "itemChanged"
QT_MOC_LITERAL(11, 166, 11), // "QQuickItem*"
QT_MOC_LITERAL(12, 178, 19), // "mouseEnabledChanged"
QT_MOC_LITERAL(13, 198, 7), // "enabled"
QT_MOC_LITERAL(14, 206, 9), // "setOutput"
QT_MOC_LITERAL(15, 216, 15), // "setRenderPolicy"
QT_MOC_LITERAL(16, 232, 7), // "setItem"
QT_MOC_LITERAL(17, 240, 15), // "setMouseEnabled"
QT_MOC_LITERAL(18, 256, 12), // "renderPolicy"
QT_MOC_LITERAL(19, 269, 12), // "mouseEnabled"
QT_MOC_LITERAL(20, 282, 12), // "RenderPolicy"
QT_MOC_LITERAL(21, 295, 10), // "Continuous"
QT_MOC_LITERAL(22, 306, 10) // "SingleShot"

    },
    "Qt3DRender::Quick::QScene2D\0DefaultProperty\0"
    "item\0outputChanged\0\0"
    "Qt3DRender::QRenderTargetOutput*\0"
    "output\0renderPolicyChanged\0"
    "QScene2D::RenderPolicy\0policy\0itemChanged\0"
    "QQuickItem*\0mouseEnabledChanged\0enabled\0"
    "setOutput\0setRenderPolicy\0setItem\0"
    "setMouseEnabled\0renderPolicy\0mouseEnabled\0"
    "RenderPolicy\0Continuous\0SingleShot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__Quick__QScene2D[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       8,   16, // methods
       4,   80, // properties
       1,   96, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   56,    4, 0x06 /* Public */,
       7,    1,   59,    4, 0x06 /* Public */,
      10,    1,   62,    4, 0x06 /* Public */,
      12,    1,   65,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   68,    4, 0x0a /* Public */,
      15,    1,   71,    4, 0x0a /* Public */,
      16,    1,   74,    4, 0x0a /* Public */,
      17,    1,   77,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, QMetaType::Bool,   13,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, QMetaType::Bool,   13,

 // properties: name, type, flags
       6, 0x80000000 | 5, 0x0049510b,
      18, 0x80000000 | 8, 0x0049510b,
       2, 0x80000000 | 11, 0x0049510b,
      19, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

 // enums: name, flags, count, data
      20, 0x0,    2,  100,

 // enum data: key, value
      21, uint(Qt3DRender::Quick::QScene2D::Continuous),
      22, uint(Qt3DRender::Quick::QScene2D::SingleShot),

       0        // eod
};

void Qt3DRender::Quick::QScene2D::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScene2D *_t = static_cast<QScene2D *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->outputChanged((*reinterpret_cast< Qt3DRender::QRenderTargetOutput*(*)>(_a[1]))); break;
        case 1: _t->renderPolicyChanged((*reinterpret_cast< QScene2D::RenderPolicy(*)>(_a[1]))); break;
        case 2: _t->itemChanged((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 3: _t->mouseEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setOutput((*reinterpret_cast< Qt3DRender::QRenderTargetOutput*(*)>(_a[1]))); break;
        case 5: _t->setRenderPolicy((*reinterpret_cast< QScene2D::RenderPolicy(*)>(_a[1]))); break;
        case 6: _t->setItem((*reinterpret_cast< QQuickItem*(*)>(_a[1]))); break;
        case 7: _t->setMouseEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DRender::QRenderTargetOutput* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DRender::QRenderTargetOutput* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QScene2D::*_t)(Qt3DRender::QRenderTargetOutput * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScene2D::outputChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QScene2D::*_t)(QScene2D::RenderPolicy );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScene2D::renderPolicyChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QScene2D::*_t)(QQuickItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScene2D::itemChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QScene2D::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QScene2D::mouseEnabledChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DRender::QRenderTargetOutput* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QScene2D *_t = static_cast<QScene2D *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DRender::QRenderTargetOutput**>(_v) = _t->output(); break;
        case 1: *reinterpret_cast< QScene2D::RenderPolicy*>(_v) = _t->renderPolicy(); break;
        case 2: *reinterpret_cast< QQuickItem**>(_v) = _t->item(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isMouseEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QScene2D *_t = static_cast<QScene2D *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOutput(*reinterpret_cast< Qt3DRender::QRenderTargetOutput**>(_v)); break;
        case 1: _t->setRenderPolicy(*reinterpret_cast< QScene2D::RenderPolicy*>(_v)); break;
        case 2: _t->setItem(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 3: _t->setMouseEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::Quick::QScene2D::staticMetaObject = {
    { &Qt3DCore::QNode::staticMetaObject, qt_meta_stringdata_Qt3DRender__Quick__QScene2D.data,
      qt_meta_data_Qt3DRender__Quick__QScene2D,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::Quick::QScene2D::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::Quick::QScene2D::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__Quick__QScene2D.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QNode::qt_metacast(_clname);
}

int Qt3DRender::Quick::QScene2D::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QNode::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
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
void Qt3DRender::Quick::QScene2D::outputChanged(Qt3DRender::QRenderTargetOutput * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::Quick::QScene2D::renderPolicyChanged(QScene2D::RenderPolicy _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Qt3DRender::Quick::QScene2D::itemChanged(QQuickItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Qt3DRender::Quick::QScene2D::mouseEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
