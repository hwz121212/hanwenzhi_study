/****************************************************************************
** Meta object code from reading C++ file 'qquickflipable_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickflipable_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickflipable_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickFlipable_t {
    QByteArrayData data[13];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickFlipable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickFlipable_t qt_meta_stringdata_QQuickFlipable = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickFlipable"
QT_MOC_LITERAL(1, 15, 12), // "frontChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "backChanged"
QT_MOC_LITERAL(4, 41, 11), // "sideChanged"
QT_MOC_LITERAL(5, 53, 15), // "retransformBack"
QT_MOC_LITERAL(6, 69, 5), // "front"
QT_MOC_LITERAL(7, 75, 11), // "QQuickItem*"
QT_MOC_LITERAL(8, 87, 4), // "back"
QT_MOC_LITERAL(9, 92, 4), // "side"
QT_MOC_LITERAL(10, 97, 4), // "Side"
QT_MOC_LITERAL(11, 102, 5), // "Front"
QT_MOC_LITERAL(12, 108, 4) // "Back"

    },
    "QQuickFlipable\0frontChanged\0\0backChanged\0"
    "sideChanged\0retransformBack\0front\0"
    "QQuickItem*\0back\0side\0Side\0Front\0Back"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickFlipable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   38, // properties
       1,   50, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       6, 0x80000000 | 7, 0x0049510b,
       8, 0x80000000 | 7, 0x0049510b,
       9, 0x80000000 | 10, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
      10, 0x0,    2,   54,

 // enum data: key, value
      11, uint(QQuickFlipable::Front),
      12, uint(QQuickFlipable::Back),

       0        // eod
};

void QQuickFlipable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickFlipable *_t = static_cast<QQuickFlipable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->frontChanged(); break;
        case 1: _t->backChanged(); break;
        case 2: _t->sideChanged(); break;
        case 3: _t->retransformBack(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickFlipable::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlipable::frontChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickFlipable::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlipable::backChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickFlipable::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlipable::sideChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickFlipable *_t = static_cast<QQuickFlipable *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->front(); break;
        case 1: *reinterpret_cast< QQuickItem**>(_v) = _t->back(); break;
        case 2: *reinterpret_cast< Side*>(_v) = _t->side(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickFlipable *_t = static_cast<QQuickFlipable *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFront(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 1: _t->setBack(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickFlipable::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QQuickFlipable.data,
      qt_meta_data_QQuickFlipable,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickFlipable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickFlipable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickFlipable.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickFlipable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
void QQuickFlipable::frontChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickFlipable::backChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickFlipable::sideChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
