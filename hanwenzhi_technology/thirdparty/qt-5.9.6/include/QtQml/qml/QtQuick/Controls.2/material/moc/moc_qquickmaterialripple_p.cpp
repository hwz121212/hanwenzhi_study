/****************************************************************************
** Meta object code from reading C++ file 'qquickmaterialripple_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickmaterialripple_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickmaterialripple_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickMaterialRipple_t {
    QByteArrayData data[11];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickMaterialRipple_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickMaterialRipple_t qt_meta_stringdata_QQuickMaterialRipple = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickMaterialRipple"
QT_MOC_LITERAL(1, 21, 5), // "color"
QT_MOC_LITERAL(2, 27, 10), // "clipRadius"
QT_MOC_LITERAL(3, 38, 7), // "pressed"
QT_MOC_LITERAL(4, 46, 6), // "active"
QT_MOC_LITERAL(5, 53, 6), // "anchor"
QT_MOC_LITERAL(6, 60, 11), // "QQuickItem*"
QT_MOC_LITERAL(7, 72, 7), // "trigger"
QT_MOC_LITERAL(8, 80, 7), // "Trigger"
QT_MOC_LITERAL(9, 88, 5), // "Press"
QT_MOC_LITERAL(10, 94, 7) // "Release"

    },
    "QQuickMaterialRipple\0color\0clipRadius\0"
    "pressed\0active\0anchor\0QQuickItem*\0"
    "trigger\0Trigger\0Press\0Release"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickMaterialRipple[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       1,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00095903,
       2, QMetaType::QReal, 0x00095903,
       3, QMetaType::Bool, 0x00095903,
       4, QMetaType::Bool, 0x00095903,
       5, 0x80000000 | 6, 0x0009590b,
       7, 0x80000000 | 8, 0x0009590b,

 // enums: name, flags, count, data
       8, 0x0,    2,   36,

 // enum data: key, value
       9, uint(QQuickMaterialRipple::Press),
      10, uint(QQuickMaterialRipple::Release),

       0        // eod
};

void QQuickMaterialRipple::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickMaterialRipple *_t = static_cast<QQuickMaterialRipple *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->clipRadius(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isPressed(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 4: *reinterpret_cast< QQuickItem**>(_v) = _t->anchor(); break;
        case 5: *reinterpret_cast< Trigger*>(_v) = _t->trigger(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickMaterialRipple *_t = static_cast<QQuickMaterialRipple *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setClipRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setPressed(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setAnchor(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 5: _t->setTrigger(*reinterpret_cast< Trigger*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject QQuickMaterialRipple::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QQuickMaterialRipple.data,
      qt_meta_data_QQuickMaterialRipple,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickMaterialRipple::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickMaterialRipple::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickMaterialRipple.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickMaterialRipple::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
