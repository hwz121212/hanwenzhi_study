/****************************************************************************
** Meta object code from reading C++ file 'qpickevent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qpickevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpickevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Qt3DRender__QPickEvent_t {
    QByteArrayData data[26];
    char stringdata0[327];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Qt3DRender__QPickEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Qt3DRender__QPickEvent_t qt_meta_stringdata_Qt3DRender__QPickEvent = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Qt3DRender::QPickEvent"
QT_MOC_LITERAL(1, 23, 15), // "acceptedChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 8), // "accepted"
QT_MOC_LITERAL(4, 49, 11), // "setAccepted"
QT_MOC_LITERAL(5, 61, 8), // "position"
QT_MOC_LITERAL(6, 70, 8), // "distance"
QT_MOC_LITERAL(7, 79, 17), // "localIntersection"
QT_MOC_LITERAL(8, 97, 17), // "worldIntersection"
QT_MOC_LITERAL(9, 115, 6), // "button"
QT_MOC_LITERAL(10, 122, 31), // "Qt3DRender::QPickEvent::Buttons"
QT_MOC_LITERAL(11, 154, 7), // "buttons"
QT_MOC_LITERAL(12, 162, 9), // "modifiers"
QT_MOC_LITERAL(13, 172, 7), // "Buttons"
QT_MOC_LITERAL(14, 180, 10), // "LeftButton"
QT_MOC_LITERAL(15, 191, 11), // "RightButton"
QT_MOC_LITERAL(16, 203, 12), // "MiddleButton"
QT_MOC_LITERAL(17, 216, 10), // "BackButton"
QT_MOC_LITERAL(18, 227, 8), // "NoButton"
QT_MOC_LITERAL(19, 236, 9), // "Modifiers"
QT_MOC_LITERAL(20, 246, 10), // "NoModifier"
QT_MOC_LITERAL(21, 257, 13), // "ShiftModifier"
QT_MOC_LITERAL(22, 271, 15), // "ControlModifier"
QT_MOC_LITERAL(23, 287, 11), // "AltModifier"
QT_MOC_LITERAL(24, 299, 12), // "MetaModifier"
QT_MOC_LITERAL(25, 312, 14) // "KeypadModifier"

    },
    "Qt3DRender::QPickEvent\0acceptedChanged\0"
    "\0accepted\0setAccepted\0position\0distance\0"
    "localIntersection\0worldIntersection\0"
    "button\0Qt3DRender::QPickEvent::Buttons\0"
    "buttons\0modifiers\0Buttons\0LeftButton\0"
    "RightButton\0MiddleButton\0BackButton\0"
    "NoButton\0Modifiers\0NoModifier\0"
    "ShiftModifier\0ControlModifier\0AltModifier\0"
    "MetaModifier\0KeypadModifier"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Qt3DRender__QPickEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       8,   30, // properties
       2,   62, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,
       5, QMetaType::QPointF, 0x00095401,
       6, QMetaType::Float, 0x00095401,
       7, QMetaType::QVector3D, 0x00095401,
       8, QMetaType::QVector3D, 0x00095401,
       9, 0x80000000 | 10, 0x00095409,
      11, QMetaType::Int, 0x00095401,
      12, QMetaType::Int, 0x00095401,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
      13, 0x0,    5,   70,
      19, 0x0,    6,   80,

 // enum data: key, value
      14, uint(Qt3DRender::QPickEvent::LeftButton),
      15, uint(Qt3DRender::QPickEvent::RightButton),
      16, uint(Qt3DRender::QPickEvent::MiddleButton),
      17, uint(Qt3DRender::QPickEvent::BackButton),
      18, uint(Qt3DRender::QPickEvent::NoButton),
      20, uint(Qt3DRender::QPickEvent::NoModifier),
      21, uint(Qt3DRender::QPickEvent::ShiftModifier),
      22, uint(Qt3DRender::QPickEvent::ControlModifier),
      23, uint(Qt3DRender::QPickEvent::AltModifier),
      24, uint(Qt3DRender::QPickEvent::MetaModifier),
      25, uint(Qt3DRender::QPickEvent::KeypadModifier),

       0        // eod
};

void Qt3DRender::QPickEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPickEvent *_t = static_cast<QPickEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->acceptedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setAccepted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QPickEvent::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPickEvent::acceptedChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QPickEvent *_t = static_cast<QPickEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = _t->position(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->distance(); break;
        case 3: *reinterpret_cast< QVector3D*>(_v) = _t->localIntersection(); break;
        case 4: *reinterpret_cast< QVector3D*>(_v) = _t->worldIntersection(); break;
        case 5: *reinterpret_cast< Qt3DRender::QPickEvent::Buttons*>(_v) = _t->button(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->buttons(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->modifiers(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QPickEvent *_t = static_cast<QPickEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Qt3DRender::QPickEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Qt3DRender__QPickEvent.data,
      qt_meta_data_Qt3DRender__QPickEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Qt3DRender::QPickEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Qt3DRender::QPickEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Qt3DRender__QPickEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Qt3DRender::QPickEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Qt3DRender::QPickEvent::acceptedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
