/****************************************************************************
** Meta object code from reading C++ file 'qrendersettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qcomponent.h"
#include "qrendersettings_p.h"
#include "../../qrendersettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qrendersettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QRenderSettings_t {
    QByteArrayData data[22];
    char stringdata0[475];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QRenderSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QRenderSettings_t qt_meta_stringdata_Qt3DRender__QRenderSettings = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Qt3DRender::QRenderSettings"
QT_MOC_LITERAL(1, 28, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 44, 16), // "activeFrameGraph"
QT_MOC_LITERAL(3, 61, 23), // "activeFrameGraphChanged"
QT_MOC_LITERAL(4, 85, 0), // ""
QT_MOC_LITERAL(5, 86, 16), // "QFrameGraphNode*"
QT_MOC_LITERAL(6, 103, 19), // "renderPolicyChanged"
QT_MOC_LITERAL(7, 123, 12), // "RenderPolicy"
QT_MOC_LITERAL(8, 136, 12), // "renderPolicy"
QT_MOC_LITERAL(9, 149, 19), // "setActiveFrameGraph"
QT_MOC_LITERAL(10, 169, 15), // "setRenderPolicy"
QT_MOC_LITERAL(11, 185, 25), // "_q_onPickingMethodChanged"
QT_MOC_LITERAL(12, 211, 28), // "QPickingSettings::PickMethod"
QT_MOC_LITERAL(13, 240, 26), // "_q_onPickResultModeChanged"
QT_MOC_LITERAL(14, 267, 32), // "QPickingSettings::PickResultMode"
QT_MOC_LITERAL(15, 300, 38), // "_q_onFaceOrientationPickingMo..."
QT_MOC_LITERAL(16, 339, 44), // "QPickingSettings::FaceOrienta..."
QT_MOC_LITERAL(17, 384, 15), // "pickingSettings"
QT_MOC_LITERAL(18, 400, 29), // "Qt3DRender::QPickingSettings*"
QT_MOC_LITERAL(19, 430, 28), // "Qt3DRender::QFrameGraphNode*"
QT_MOC_LITERAL(20, 459, 8), // "OnDemand"
QT_MOC_LITERAL(21, 468, 6) // "Always"

    },
    "Qt3DRender::QRenderSettings\0DefaultProperty\0"
    "activeFrameGraph\0activeFrameGraphChanged\0"
    "\0QFrameGraphNode*\0renderPolicyChanged\0"
    "RenderPolicy\0renderPolicy\0setActiveFrameGraph\0"
    "setRenderPolicy\0_q_onPickingMethodChanged\0"
    "QPickingSettings::PickMethod\0"
    "_q_onPickResultModeChanged\0"
    "QPickingSettings::PickResultMode\0"
    "_q_onFaceOrientationPickingModeChanged\0"
    "QPickingSettings::FaceOrientationPickingMode\0"
    "pickingSettings\0Qt3DRender::QPickingSettings*\0"
    "Qt3DRender::QFrameGraphNode*\0OnDemand\0"
    "Always"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QRenderSettings[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       7,   16, // methods
       3,   72, // properties
       1,   84, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   51,    4, 0x06 /* Public */,
       6,    1,   54,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   57,    4, 0x0a /* Public */,
      10,    1,   60,    4, 0x0a /* Public */,
      11,    1,   63,    4, 0x08 /* Private */,
      13,    1,   66,    4, 0x08 /* Private */,
      15,    1,   69,    4, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 12,    4,
    QMetaType::Void, 0x80000000 | 14,    4,
    QMetaType::Void, 0x80000000 | 16,    4,

 // properties: name, type, flags
      17, 0x80000000 | 18, 0x00095409,
       8, 0x80000000 | 7, 0x0049510b,
       2, 0x80000000 | 19, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       0,

 // enums: name, flags, count, data
       7, 0x0,    2,   88,

 // enum data: key, value
      20, uint(Qt3DRender::QRenderSettings::OnDemand),
      21, uint(Qt3DRender::QRenderSettings::Always),

       0        // eod
};

void Qt3DRender::QRenderSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRenderSettings *_t = static_cast<QRenderSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeFrameGraphChanged((*reinterpret_cast< QFrameGraphNode*(*)>(_a[1]))); break;
        case 1: _t->renderPolicyChanged((*reinterpret_cast< RenderPolicy(*)>(_a[1]))); break;
        case 2: _t->setActiveFrameGraph((*reinterpret_cast< QFrameGraphNode*(*)>(_a[1]))); break;
        case 3: _t->setRenderPolicy((*reinterpret_cast< RenderPolicy(*)>(_a[1]))); break;
        case 4: _t->d_func()->_q_onPickingMethodChanged((*reinterpret_cast< QPickingSettings::PickMethod(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_onPickResultModeChanged((*reinterpret_cast< QPickingSettings::PickResultMode(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_onFaceOrientationPickingModeChanged((*reinterpret_cast< QPickingSettings::FaceOrientationPickingMode(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QRenderSettings::*_t)(QFrameGraphNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRenderSettings::activeFrameGraphChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QRenderSettings::*_t)(RenderPolicy );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRenderSettings::renderPolicyChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt3DRender::QPickingSettings* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QRenderSettings *_t = static_cast<QRenderSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt3DRender::QPickingSettings**>(_v) = _t->pickingSettings(); break;
        case 1: *reinterpret_cast< RenderPolicy*>(_v) = _t->renderPolicy(); break;
        case 2: *reinterpret_cast< Qt3DRender::QFrameGraphNode**>(_v) = _t->activeFrameGraph(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QRenderSettings *_t = static_cast<QRenderSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setRenderPolicy(*reinterpret_cast< RenderPolicy*>(_v)); break;
        case 2: _t->setActiveFrameGraph(*reinterpret_cast< Qt3DRender::QFrameGraphNode**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QRenderSettings::staticMetaObject = {
    { &Qt3DCore::QComponent::staticMetaObject, qt_meta_stringdata_Qt3DRender__QRenderSettings.data,
      qt_meta_data_Qt3DRender__QRenderSettings,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QRenderSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QRenderSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QRenderSettings.stringdata0))
        return static_cast<void*>(this);
    return Qt3DCore::QComponent::qt_metacast(_clname);
}

int Qt3DRender::QRenderSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Qt3DCore::QComponent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void Qt3DRender::QRenderSettings::activeFrameGraphChanged(QFrameGraphNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Qt3DRender::QRenderSettings::renderPolicyChanged(RenderPolicy _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
