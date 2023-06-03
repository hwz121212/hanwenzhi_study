/****************************************************************************
** Meta object code from reading C++ file 'qquickrangeslider_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquickrangeslider_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickrangeslider_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickRangeSlider_t {
    QByteArrayData data[25];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickRangeSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickRangeSlider_t qt_meta_stringdata_QQuickRangeSlider = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQuickRangeSlider"
QT_MOC_LITERAL(1, 18, 11), // "fromChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9), // "toChanged"
QT_MOC_LITERAL(4, 41, 15), // "stepSizeChanged"
QT_MOC_LITERAL(5, 57, 15), // "snapModeChanged"
QT_MOC_LITERAL(6, 73, 18), // "orientationChanged"
QT_MOC_LITERAL(7, 92, 11), // "liveChanged"
QT_MOC_LITERAL(8, 104, 9), // "setValues"
QT_MOC_LITERAL(9, 114, 10), // "firstValue"
QT_MOC_LITERAL(10, 125, 11), // "secondValue"
QT_MOC_LITERAL(11, 137, 4), // "from"
QT_MOC_LITERAL(12, 142, 2), // "to"
QT_MOC_LITERAL(13, 145, 5), // "first"
QT_MOC_LITERAL(14, 151, 22), // "QQuickRangeSliderNode*"
QT_MOC_LITERAL(15, 174, 6), // "second"
QT_MOC_LITERAL(16, 181, 8), // "stepSize"
QT_MOC_LITERAL(17, 190, 8), // "snapMode"
QT_MOC_LITERAL(18, 199, 8), // "SnapMode"
QT_MOC_LITERAL(19, 208, 11), // "orientation"
QT_MOC_LITERAL(20, 220, 15), // "Qt::Orientation"
QT_MOC_LITERAL(21, 236, 4), // "live"
QT_MOC_LITERAL(22, 241, 6), // "NoSnap"
QT_MOC_LITERAL(23, 248, 10), // "SnapAlways"
QT_MOC_LITERAL(24, 259, 13) // "SnapOnRelease"

    },
    "QQuickRangeSlider\0fromChanged\0\0toChanged\0"
    "stepSizeChanged\0snapModeChanged\0"
    "orientationChanged\0liveChanged\0setValues\0"
    "firstValue\0secondValue\0from\0to\0first\0"
    "QQuickRangeSliderNode*\0second\0stepSize\0"
    "snapMode\0SnapMode\0orientation\0"
    "Qt::Orientation\0live\0NoSnap\0SnapAlways\0"
    "SnapOnRelease"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickRangeSlider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       8,   67, // properties
       1,  107, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   56,    2, 0x06 /* Public */,
       3,    0,   57,    2, 0x06 /* Public */,
       4,    0,   58,    2, 0x06 /* Public */,
       5,    0,   59,    2, 0x06 /* Public */,
       6,    0,   60,    2, 0x06 /* Public */,
       7,    0,   61,    2, 0x86 /* Public | MethodRevisioned */,

 // methods: name, argc, parameters, tag, flags
       8,    2,   62,    2, 0x02 /* Public */,

 // signals: revision
       0,
       0,
       0,
       0,
       0,
       2,

 // methods: revision
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    9,   10,

 // properties: name, type, flags
      11, QMetaType::QReal, 0x00495903,
      12, QMetaType::QReal, 0x00495903,
      13, 0x80000000 | 14, 0x00095409,
      15, 0x80000000 | 14, 0x00095409,
      16, QMetaType::QReal, 0x00495903,
      17, 0x80000000 | 18, 0x0049590b,
      19, 0x80000000 | 20, 0x0049590b,
      21, QMetaType::Bool, 0x00c95903,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,
       2,
       3,
       4,
       5,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       2,

 // enums: name, flags, count, data
      18, 0x0,    3,  111,

 // enum data: key, value
      22, uint(QQuickRangeSlider::NoSnap),
      23, uint(QQuickRangeSlider::SnapAlways),
      24, uint(QQuickRangeSlider::SnapOnRelease),

       0        // eod
};

void QQuickRangeSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickRangeSlider *_t = static_cast<QQuickRangeSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fromChanged(); break;
        case 1: _t->toChanged(); break;
        case 2: _t->stepSizeChanged(); break;
        case 3: _t->snapModeChanged(); break;
        case 4: _t->orientationChanged(); break;
        case 5: _t->liveChanged(); break;
        case 6: _t->setValues((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickRangeSlider::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRangeSlider::fromChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickRangeSlider::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRangeSlider::toChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickRangeSlider::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRangeSlider::stepSizeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickRangeSlider::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRangeSlider::snapModeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickRangeSlider::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRangeSlider::orientationChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickRangeSlider::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRangeSlider::liveChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickRangeSliderNode* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickRangeSlider *_t = static_cast<QQuickRangeSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->from(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->to(); break;
        case 2: *reinterpret_cast< QQuickRangeSliderNode**>(_v) = _t->first(); break;
        case 3: *reinterpret_cast< QQuickRangeSliderNode**>(_v) = _t->second(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->stepSize(); break;
        case 5: *reinterpret_cast< SnapMode*>(_v) = _t->snapMode(); break;
        case 6: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->live(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickRangeSlider *_t = static_cast<QQuickRangeSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrom(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setTo(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setStepSize(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setSnapMode(*reinterpret_cast< SnapMode*>(_v)); break;
        case 6: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 7: _t->setLive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickRangeSlider::staticMetaObject = {
    { &QQuickControl::staticMetaObject, qt_meta_stringdata_QQuickRangeSlider.data,
      qt_meta_data_QQuickRangeSlider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickRangeSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickRangeSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickRangeSlider.stringdata0))
        return static_cast<void*>(this);
    return QQuickControl::qt_metacast(_clname);
}

int QQuickRangeSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickControl::qt_metacall(_c, _id, _a);
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
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickRangeSlider::fromChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickRangeSlider::toChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickRangeSlider::stepSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickRangeSlider::snapModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickRangeSlider::orientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickRangeSlider::liveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
struct qt_meta_stringdata_QQuickRangeSliderNode_t {
    QByteArrayData data[18];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickRangeSliderNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickRangeSliderNode_t qt_meta_stringdata_QQuickRangeSliderNode = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickRangeSliderNode"
QT_MOC_LITERAL(1, 22, 21), // "DeferredPropertyNames"
QT_MOC_LITERAL(2, 44, 6), // "handle"
QT_MOC_LITERAL(3, 51, 12), // "valueChanged"
QT_MOC_LITERAL(4, 64, 0), // ""
QT_MOC_LITERAL(5, 65, 15), // "positionChanged"
QT_MOC_LITERAL(6, 81, 21), // "visualPositionChanged"
QT_MOC_LITERAL(7, 103, 13), // "handleChanged"
QT_MOC_LITERAL(8, 117, 14), // "pressedChanged"
QT_MOC_LITERAL(9, 132, 14), // "hoveredChanged"
QT_MOC_LITERAL(10, 147, 8), // "increase"
QT_MOC_LITERAL(11, 156, 8), // "decrease"
QT_MOC_LITERAL(12, 165, 5), // "value"
QT_MOC_LITERAL(13, 171, 8), // "position"
QT_MOC_LITERAL(14, 180, 14), // "visualPosition"
QT_MOC_LITERAL(15, 195, 11), // "QQuickItem*"
QT_MOC_LITERAL(16, 207, 7), // "pressed"
QT_MOC_LITERAL(17, 215, 7) // "hovered"

    },
    "QQuickRangeSliderNode\0DeferredPropertyNames\0"
    "handle\0valueChanged\0\0positionChanged\0"
    "visualPositionChanged\0handleChanged\0"
    "pressedChanged\0hoveredChanged\0increase\0"
    "decrease\0value\0position\0visualPosition\0"
    "QQuickItem*\0pressed\0hovered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickRangeSliderNode[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       8,   16, // methods
       6,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   64,    4, 0x06 /* Public */,
       5,    0,   65,    4, 0x06 /* Public */,
       6,    0,   66,    4, 0x06 /* Public */,
       7,    0,   67,    4, 0x06 /* Public */,
       8,    0,   68,    4, 0x06 /* Public */,
       9,    0,   69,    4, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   70,    4, 0x0a /* Public */,
      11,    0,   71,    4, 0x0a /* Public */,

 // signals: revision
       0,
       0,
       0,
       0,
       0,
       1,

 // slots: revision
       0,
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QReal, 0x00495903,
      13, QMetaType::QReal, 0x00495801,
      14, QMetaType::QReal, 0x00495801,
       2, 0x80000000 | 15, 0x0049590b,
      16, QMetaType::Bool, 0x00495903,
      17, QMetaType::Bool, 0x00c95903,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

void QQuickRangeSliderNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickRangeSliderNode *_t = static_cast<QQuickRangeSliderNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->visualPositionChanged(); break;
        case 3: _t->handleChanged(); break;
        case 4: _t->pressedChanged(); break;
        case 5: _t->hoveredChanged(); break;
        case 6: _t->increase(); break;
        case 7: _t->decrease(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickRangeSliderNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRangeSliderNode::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickRangeSliderNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRangeSliderNode::positionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickRangeSliderNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRangeSliderNode::visualPositionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickRangeSliderNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRangeSliderNode::handleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickRangeSliderNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRangeSliderNode::pressedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickRangeSliderNode::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRangeSliderNode::hoveredChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickRangeSliderNode *_t = static_cast<QQuickRangeSliderNode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->position(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->visualPosition(); break;
        case 3: *reinterpret_cast< QQuickItem**>(_v) = _t->handle(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isPressed(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isHovered(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickRangeSliderNode *_t = static_cast<QQuickRangeSliderNode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setHandle(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 4: _t->setPressed(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setHovered(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickRangeSliderNode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickRangeSliderNode.data,
      qt_meta_data_QQuickRangeSliderNode,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickRangeSliderNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickRangeSliderNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickRangeSliderNode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickRangeSliderNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QQuickRangeSliderNode::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickRangeSliderNode::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickRangeSliderNode::visualPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickRangeSliderNode::handleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickRangeSliderNode::pressedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickRangeSliderNode::hoveredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
