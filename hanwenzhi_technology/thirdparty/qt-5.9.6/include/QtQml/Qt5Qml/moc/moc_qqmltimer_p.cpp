/****************************************************************************
** Meta object code from reading C++ file 'qqmltimer_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQml/private/qqmltimer_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qqmltimer_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQmlTimer_t {
    QByteArrayData data[16];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQmlTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQmlTimer_t qt_meta_stringdata_QQmlTimer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QQmlTimer"
QT_MOC_LITERAL(1, 10, 9), // "triggered"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 14), // "runningChanged"
QT_MOC_LITERAL(4, 36, 15), // "intervalChanged"
QT_MOC_LITERAL(5, 52, 13), // "repeatChanged"
QT_MOC_LITERAL(6, 66, 23), // "triggeredOnStartChanged"
QT_MOC_LITERAL(7, 90, 5), // "start"
QT_MOC_LITERAL(8, 96, 4), // "stop"
QT_MOC_LITERAL(9, 101, 7), // "restart"
QT_MOC_LITERAL(10, 109, 6), // "ticked"
QT_MOC_LITERAL(11, 116, 8), // "interval"
QT_MOC_LITERAL(12, 125, 7), // "running"
QT_MOC_LITERAL(13, 133, 6), // "repeat"
QT_MOC_LITERAL(14, 140, 16), // "triggeredOnStart"
QT_MOC_LITERAL(15, 157, 6) // "parent"

    },
    "QQmlTimer\0triggered\0\0runningChanged\0"
    "intervalChanged\0repeatChanged\0"
    "triggeredOnStartChanged\0start\0stop\0"
    "restart\0ticked\0interval\0running\0repeat\0"
    "triggeredOnStart\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQmlTimer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::Int, 0x00495103,
      12, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495003,
      14, QMetaType::Bool, 0x00495103,
      15, QMetaType::QObjectStar, 0x00095401,

 // properties: notify_signal_id
       2,
       1,
       3,
       4,
       0,

       0        // eod
};

void QQmlTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQmlTimer *_t = static_cast<QQmlTimer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggered(); break;
        case 1: _t->runningChanged(); break;
        case 2: _t->intervalChanged(); break;
        case 3: _t->repeatChanged(); break;
        case 4: _t->triggeredOnStartChanged(); break;
        case 5: _t->start(); break;
        case 6: _t->stop(); break;
        case 7: _t->restart(); break;
        case 8: _t->ticked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQmlTimer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlTimer::triggered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQmlTimer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlTimer::runningChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQmlTimer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlTimer::intervalChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQmlTimer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlTimer::repeatChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQmlTimer::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQmlTimer::triggeredOnStartChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQmlTimer *_t = static_cast<QQmlTimer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->interval(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isRunning(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isRepeating(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->triggeredOnStart(); break;
        case 4: *reinterpret_cast< QObject**>(_v) = _t->parent(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQmlTimer *_t = static_cast<QQmlTimer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInterval(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setRunning(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setRepeating(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setTriggeredOnStart(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQmlTimer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQmlTimer.data,
      qt_meta_data_QQmlTimer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQmlTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQmlTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQmlTimer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QQmlTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQmlTimer::triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQmlTimer::runningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQmlTimer::intervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQmlTimer::repeatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQmlTimer::triggeredOnStartChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
