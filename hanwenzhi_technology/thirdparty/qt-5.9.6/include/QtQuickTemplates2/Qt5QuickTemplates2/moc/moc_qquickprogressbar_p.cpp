/****************************************************************************
** Meta object code from reading C++ file 'qquickprogressbar_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquickprogressbar_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickprogressbar_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickProgressBar_t {
    QByteArrayData data[14];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickProgressBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickProgressBar_t qt_meta_stringdata_QQuickProgressBar = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQuickProgressBar"
QT_MOC_LITERAL(1, 18, 11), // "fromChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9), // "toChanged"
QT_MOC_LITERAL(4, 41, 12), // "valueChanged"
QT_MOC_LITERAL(5, 54, 15), // "positionChanged"
QT_MOC_LITERAL(6, 70, 21), // "visualPositionChanged"
QT_MOC_LITERAL(7, 92, 20), // "indeterminateChanged"
QT_MOC_LITERAL(8, 113, 4), // "from"
QT_MOC_LITERAL(9, 118, 2), // "to"
QT_MOC_LITERAL(10, 121, 5), // "value"
QT_MOC_LITERAL(11, 127, 8), // "position"
QT_MOC_LITERAL(12, 136, 14), // "visualPosition"
QT_MOC_LITERAL(13, 151, 13) // "indeterminate"

    },
    "QQuickProgressBar\0fromChanged\0\0toChanged\0"
    "valueChanged\0positionChanged\0"
    "visualPositionChanged\0indeterminateChanged\0"
    "from\0to\0value\0position\0visualPosition\0"
    "indeterminate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickProgressBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QReal, 0x00495903,
       9, QMetaType::QReal, 0x00495903,
      10, QMetaType::QReal, 0x00495903,
      11, QMetaType::QReal, 0x00495801,
      12, QMetaType::QReal, 0x00495801,
      13, QMetaType::Bool, 0x00495903,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void QQuickProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickProgressBar *_t = static_cast<QQuickProgressBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fromChanged(); break;
        case 1: _t->toChanged(); break;
        case 2: _t->valueChanged(); break;
        case 3: _t->positionChanged(); break;
        case 4: _t->visualPositionChanged(); break;
        case 5: _t->indeterminateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickProgressBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickProgressBar::fromChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickProgressBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickProgressBar::toChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickProgressBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickProgressBar::valueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickProgressBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickProgressBar::positionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickProgressBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickProgressBar::visualPositionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickProgressBar::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickProgressBar::indeterminateChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickProgressBar *_t = static_cast<QQuickProgressBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->from(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->to(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->value(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->position(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->visualPosition(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isIndeterminate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickProgressBar *_t = static_cast<QQuickProgressBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrom(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setTo(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setValue(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setIndeterminate(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickProgressBar::staticMetaObject = {
    { &QQuickControl::staticMetaObject, qt_meta_stringdata_QQuickProgressBar.data,
      qt_meta_data_QQuickProgressBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickProgressBar.stringdata0))
        return static_cast<void*>(this);
    return QQuickControl::qt_metacast(_clname);
}

int QQuickProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickControl::qt_metacall(_c, _id, _a);
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
void QQuickProgressBar::fromChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickProgressBar::toChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickProgressBar::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickProgressBar::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickProgressBar::visualPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickProgressBar::indeterminateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
