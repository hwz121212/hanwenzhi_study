/****************************************************************************
** Meta object code from reading C++ file 'qquickanimation_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickanimation_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickanimation_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickAbstractAnimation_t {
    QByteArrayData data[23];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickAbstractAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickAbstractAnimation_t qt_meta_stringdata_QQuickAbstractAnimation = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQuickAbstractAnimation"
QT_MOC_LITERAL(1, 24, 13), // "DefaultMethod"
QT_MOC_LITERAL(2, 38, 7), // "start()"
QT_MOC_LITERAL(3, 46, 7), // "started"
QT_MOC_LITERAL(4, 54, 0), // ""
QT_MOC_LITERAL(5, 55, 7), // "stopped"
QT_MOC_LITERAL(6, 63, 14), // "runningChanged"
QT_MOC_LITERAL(7, 78, 13), // "pausedChanged"
QT_MOC_LITERAL(8, 92, 21), // "alwaysRunToEndChanged"
QT_MOC_LITERAL(9, 114, 16), // "loopCountChanged"
QT_MOC_LITERAL(10, 131, 7), // "restart"
QT_MOC_LITERAL(11, 139, 5), // "start"
QT_MOC_LITERAL(12, 145, 5), // "pause"
QT_MOC_LITERAL(13, 151, 6), // "resume"
QT_MOC_LITERAL(14, 158, 4), // "stop"
QT_MOC_LITERAL(15, 163, 8), // "complete"
QT_MOC_LITERAL(16, 172, 18), // "componentFinalized"
QT_MOC_LITERAL(17, 191, 7), // "running"
QT_MOC_LITERAL(18, 199, 6), // "paused"
QT_MOC_LITERAL(19, 206, 14), // "alwaysRunToEnd"
QT_MOC_LITERAL(20, 221, 5), // "loops"
QT_MOC_LITERAL(21, 227, 5), // "Loops"
QT_MOC_LITERAL(22, 233, 8) // "Infinite"

    },
    "QQuickAbstractAnimation\0DefaultMethod\0"
    "start()\0started\0\0stopped\0runningChanged\0"
    "pausedChanged\0alwaysRunToEndChanged\0"
    "loopCountChanged\0restart\0start\0pause\0"
    "resume\0stop\0complete\0componentFinalized\0"
    "running\0paused\0alwaysRunToEnd\0loops\0"
    "Loops\0Infinite"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickAbstractAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      13,   16, // methods
       4,  102, // properties
       1,  118, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   81,    4, 0x06 /* Public */,
       5,    0,   82,    4, 0x06 /* Public */,
       6,    1,   83,    4, 0x06 /* Public */,
       7,    1,   86,    4, 0x06 /* Public */,
       8,    1,   89,    4, 0x06 /* Public */,
       9,    1,   92,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   95,    4, 0x0a /* Public */,
      11,    0,   96,    4, 0x0a /* Public */,
      12,    0,   97,    4, 0x0a /* Public */,
      13,    0,   98,    4, 0x0a /* Public */,
      14,    0,   99,    4, 0x0a /* Public */,
      15,    0,  100,    4, 0x0a /* Public */,
      16,    0,  101,    4, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      17, QMetaType::Bool, 0x00495103,
      18, QMetaType::Bool, 0x00495103,
      19, QMetaType::Bool, 0x00495103,
      20, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       2,
       3,
       4,
       5,

 // enums: name, flags, count, data
      21, 0x0,    1,  122,

 // enum data: key, value
      22, uint(QQuickAbstractAnimation::Infinite),

       0        // eod
};

void QQuickAbstractAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickAbstractAnimation *_t = static_cast<QQuickAbstractAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->stopped(); break;
        case 2: _t->runningChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->pausedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->alwaysRunToEndChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->loopCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->restart(); break;
        case 7: _t->start(); break;
        case 8: _t->pause(); break;
        case 9: _t->resume(); break;
        case 10: _t->stop(); break;
        case 11: _t->complete(); break;
        case 12: _t->componentFinalized(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickAbstractAnimation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAbstractAnimation::started)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickAbstractAnimation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAbstractAnimation::stopped)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickAbstractAnimation::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAbstractAnimation::runningChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickAbstractAnimation::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAbstractAnimation::pausedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickAbstractAnimation::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAbstractAnimation::alwaysRunToEndChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickAbstractAnimation::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickAbstractAnimation::loopCountChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickAbstractAnimation *_t = static_cast<QQuickAbstractAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isRunning(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isPaused(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->alwaysRunToEnd(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->loops(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickAbstractAnimation *_t = static_cast<QQuickAbstractAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRunning(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setPaused(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setAlwaysRunToEnd(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setLoops(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickAbstractAnimation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickAbstractAnimation.data,
      qt_meta_data_QQuickAbstractAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickAbstractAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickAbstractAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickAbstractAnimation.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlPropertyValueSource"))
        return static_cast< QQmlPropertyValueSource*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlPropertyValueSource"))
        return static_cast< QQmlPropertyValueSource*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickAbstractAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void QQuickAbstractAnimation::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickAbstractAnimation::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickAbstractAnimation::runningChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQuickAbstractAnimation::pausedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQuickAbstractAnimation::alwaysRunToEndChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QQuickAbstractAnimation::loopCountChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_QQuickPauseAnimation_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPauseAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPauseAnimation_t qt_meta_stringdata_QQuickPauseAnimation = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickPauseAnimation"
QT_MOC_LITERAL(1, 21, 15), // "durationChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8) // "duration"

    },
    "QQuickPauseAnimation\0durationChanged\0"
    "\0duration"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPauseAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QQuickPauseAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPauseAnimation *_t = static_cast<QQuickPauseAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->durationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPauseAnimation::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPauseAnimation::durationChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPauseAnimation *_t = static_cast<QQuickPauseAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPauseAnimation *_t = static_cast<QQuickPauseAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDuration(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickPauseAnimation::staticMetaObject = {
    { &QQuickAbstractAnimation::staticMetaObject, qt_meta_stringdata_QQuickPauseAnimation.data,
      qt_meta_data_QQuickPauseAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPauseAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPauseAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPauseAnimation.stringdata0))
        return static_cast<void*>(this);
    return QQuickAbstractAnimation::qt_metacast(_clname);
}

int QQuickPauseAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAbstractAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickPauseAnimation::durationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QQuickScriptAction_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickScriptAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickScriptAction_t qt_meta_stringdata_QQuickScriptAction = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQuickScriptAction"
QT_MOC_LITERAL(1, 19, 6), // "script"
QT_MOC_LITERAL(2, 26, 16), // "QQmlScriptString"
QT_MOC_LITERAL(3, 43, 10) // "scriptName"

    },
    "QQuickScriptAction\0script\0QQmlScriptString\0"
    "scriptName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickScriptAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, QMetaType::QString, 0x00095003,

       0        // eod
};

void QQuickScriptAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlScriptString >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickScriptAction *_t = static_cast<QQuickScriptAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlScriptString*>(_v) = _t->script(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->stateChangeScriptName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickScriptAction *_t = static_cast<QQuickScriptAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setScript(*reinterpret_cast< QQmlScriptString*>(_v)); break;
        case 1: _t->setStateChangeScriptName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject QQuickScriptAction::staticMetaObject = {
    { &QQuickAbstractAnimation::staticMetaObject, qt_meta_stringdata_QQuickScriptAction.data,
      qt_meta_data_QQuickScriptAction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickScriptAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickScriptAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickScriptAction.stringdata0))
        return static_cast<void*>(this);
    return QQuickAbstractAnimation::qt_metacast(_clname);
}

int QQuickScriptAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAbstractAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickPropertyAction_t {
    QByteArrayData data[13];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPropertyAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPropertyAction_t qt_meta_stringdata_QQuickPropertyAction = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickPropertyAction"
QT_MOC_LITERAL(1, 21, 12), // "valueChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 17), // "propertiesChanged"
QT_MOC_LITERAL(4, 53, 13), // "targetChanged"
QT_MOC_LITERAL(5, 67, 15), // "propertyChanged"
QT_MOC_LITERAL(6, 83, 6), // "target"
QT_MOC_LITERAL(7, 90, 8), // "property"
QT_MOC_LITERAL(8, 99, 10), // "properties"
QT_MOC_LITERAL(9, 110, 7), // "targets"
QT_MOC_LITERAL(10, 118, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(11, 144, 7), // "exclude"
QT_MOC_LITERAL(12, 152, 5) // "value"

    },
    "QQuickPropertyAction\0valueChanged\0\0"
    "propertiesChanged\0targetChanged\0"
    "propertyChanged\0target\0property\0"
    "properties\0targets\0QQmlListProperty<QObject>\0"
    "exclude\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPropertyAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       6,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,
       4,    0,   40,    2, 0x06 /* Public */,
       5,    0,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QObjectStar, 0x00495003,
       7, QMetaType::QString, 0x00495103,
       8, QMetaType::QString, 0x00495103,
       9, 0x80000000 | 10, 0x00095009,
      11, 0x80000000 | 10, 0x00095009,
      12, QMetaType::QVariant, 0x00495103,

 // properties: notify_signal_id
       2,
       3,
       1,
       0,
       0,
       0,

       0        // eod
};

void QQuickPropertyAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPropertyAction *_t = static_cast<QQuickPropertyAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->propertiesChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->targetChanged(); break;
        case 3: _t->propertyChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPropertyAction::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPropertyAction::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPropertyAction::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPropertyAction::propertiesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPropertyAction::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPropertyAction::targetChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickPropertyAction::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPropertyAction::propertyChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPropertyAction *_t = static_cast<QQuickPropertyAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = _t->target(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->property(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->properties(); break;
        case 3: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->targets(); break;
        case 4: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->exclude(); break;
        case 5: *reinterpret_cast< QVariant*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPropertyAction *_t = static_cast<QQuickPropertyAction *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTargetObject(*reinterpret_cast< QObject**>(_v)); break;
        case 1: _t->setProperty(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setProperties(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setValue(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickPropertyAction::staticMetaObject = {
    { &QQuickAbstractAnimation::staticMetaObject, qt_meta_stringdata_QQuickPropertyAction.data,
      qt_meta_data_QQuickPropertyAction,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPropertyAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPropertyAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPropertyAction.stringdata0))
        return static_cast<void*>(this);
    return QQuickAbstractAnimation::qt_metacast(_clname);
}

int QQuickPropertyAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAbstractAnimation::qt_metacall(_c, _id, _a);
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
void QQuickPropertyAction::valueChanged(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickPropertyAction::propertiesChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickPropertyAction::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickPropertyAction::propertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_QQuickPropertyAnimation_t {
    QByteArrayData data[19];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPropertyAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPropertyAnimation_t qt_meta_stringdata_QQuickPropertyAnimation = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQuickPropertyAnimation"
QT_MOC_LITERAL(1, 24, 15), // "durationChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 11), // "fromChanged"
QT_MOC_LITERAL(4, 53, 9), // "toChanged"
QT_MOC_LITERAL(5, 63, 13), // "easingChanged"
QT_MOC_LITERAL(6, 77, 17), // "propertiesChanged"
QT_MOC_LITERAL(7, 95, 13), // "targetChanged"
QT_MOC_LITERAL(8, 109, 15), // "propertyChanged"
QT_MOC_LITERAL(9, 125, 8), // "duration"
QT_MOC_LITERAL(10, 134, 4), // "from"
QT_MOC_LITERAL(11, 139, 2), // "to"
QT_MOC_LITERAL(12, 142, 6), // "easing"
QT_MOC_LITERAL(13, 149, 6), // "target"
QT_MOC_LITERAL(14, 156, 8), // "property"
QT_MOC_LITERAL(15, 165, 10), // "properties"
QT_MOC_LITERAL(16, 176, 7), // "targets"
QT_MOC_LITERAL(17, 184, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(18, 210, 7) // "exclude"

    },
    "QQuickPropertyAnimation\0durationChanged\0"
    "\0fromChanged\0toChanged\0easingChanged\0"
    "propertiesChanged\0targetChanged\0"
    "propertyChanged\0duration\0from\0to\0"
    "easing\0target\0property\0properties\0"
    "targets\0QQmlListProperty<QObject>\0"
    "exclude"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPropertyAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       9,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,
       4,    1,   55,    2, 0x06 /* Public */,
       5,    1,   58,    2, 0x06 /* Public */,
       6,    1,   61,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void, QMetaType::QEasingCurve,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00495103,
      10, QMetaType::QVariant, 0x00495103,
      11, QMetaType::QVariant, 0x00495103,
      12, QMetaType::QEasingCurve, 0x00495103,
      13, QMetaType::QObjectStar, 0x00495003,
      14, QMetaType::QString, 0x00495103,
      15, QMetaType::QString, 0x00495103,
      16, 0x80000000 | 17, 0x00095009,
      18, 0x80000000 | 17, 0x00095009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       5,
       6,
       4,
       0,
       0,

       0        // eod
};

void QQuickPropertyAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPropertyAnimation *_t = static_cast<QQuickPropertyAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->durationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->fromChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->toChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 3: _t->easingChanged((*reinterpret_cast< const QEasingCurve(*)>(_a[1]))); break;
        case 4: _t->propertiesChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->targetChanged(); break;
        case 6: _t->propertyChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPropertyAnimation::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPropertyAnimation::durationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPropertyAnimation::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPropertyAnimation::fromChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPropertyAnimation::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPropertyAnimation::toChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickPropertyAnimation::*_t)(const QEasingCurve & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPropertyAnimation::easingChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickPropertyAnimation::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPropertyAnimation::propertiesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickPropertyAnimation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPropertyAnimation::targetChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickPropertyAnimation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPropertyAnimation::propertyChanged)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QObject> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPropertyAnimation *_t = static_cast<QQuickPropertyAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->from(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = _t->to(); break;
        case 3: *reinterpret_cast< QEasingCurve*>(_v) = _t->easing(); break;
        case 4: *reinterpret_cast< QObject**>(_v) = _t->target(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->property(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->properties(); break;
        case 7: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->targets(); break;
        case 8: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->exclude(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPropertyAnimation *_t = static_cast<QQuickPropertyAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDuration(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setFrom(*reinterpret_cast< QVariant*>(_v)); break;
        case 2: _t->setTo(*reinterpret_cast< QVariant*>(_v)); break;
        case 3: _t->setEasing(*reinterpret_cast< QEasingCurve*>(_v)); break;
        case 4: _t->setTargetObject(*reinterpret_cast< QObject**>(_v)); break;
        case 5: _t->setProperty(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setProperties(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickPropertyAnimation::staticMetaObject = {
    { &QQuickAbstractAnimation::staticMetaObject, qt_meta_stringdata_QQuickPropertyAnimation.data,
      qt_meta_data_QQuickPropertyAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPropertyAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPropertyAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPropertyAnimation.stringdata0))
        return static_cast<void*>(this);
    return QQuickAbstractAnimation::qt_metacast(_clname);
}

int QQuickPropertyAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAbstractAnimation::qt_metacall(_c, _id, _a);
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
void QQuickPropertyAnimation::durationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickPropertyAnimation::fromChanged(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickPropertyAnimation::toChanged(const QVariant & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQuickPropertyAnimation::easingChanged(const QEasingCurve & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQuickPropertyAnimation::propertiesChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QQuickPropertyAnimation::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickPropertyAnimation::propertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
struct qt_meta_stringdata_QQuickColorAnimation_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickColorAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickColorAnimation_t qt_meta_stringdata_QQuickColorAnimation = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickColorAnimation"
QT_MOC_LITERAL(1, 21, 4), // "from"
QT_MOC_LITERAL(2, 26, 2) // "to"

    },
    "QQuickColorAnimation\0from\0to"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickColorAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00095103,
       2, QMetaType::QColor, 0x00095103,

       0        // eod
};

void QQuickColorAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuickColorAnimation *_t = static_cast<QQuickColorAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->from(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->to(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickColorAnimation *_t = static_cast<QQuickColorAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrom(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setTo(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickColorAnimation::staticMetaObject = {
    { &QQuickPropertyAnimation::staticMetaObject, qt_meta_stringdata_QQuickColorAnimation.data,
      qt_meta_data_QQuickColorAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickColorAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickColorAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickColorAnimation.stringdata0))
        return static_cast<void*>(this);
    return QQuickPropertyAnimation::qt_metacast(_clname);
}

int QQuickColorAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPropertyAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickNumberAnimation_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickNumberAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickNumberAnimation_t qt_meta_stringdata_QQuickNumberAnimation = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickNumberAnimation"
QT_MOC_LITERAL(1, 22, 4), // "from"
QT_MOC_LITERAL(2, 27, 2) // "to"

    },
    "QQuickNumberAnimation\0from\0to"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickNumberAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095103,
       2, QMetaType::QReal, 0x00095103,

       0        // eod
};

void QQuickNumberAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuickNumberAnimation *_t = static_cast<QQuickNumberAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->from(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->to(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickNumberAnimation *_t = static_cast<QQuickNumberAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrom(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setTo(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickNumberAnimation::staticMetaObject = {
    { &QQuickPropertyAnimation::staticMetaObject, qt_meta_stringdata_QQuickNumberAnimation.data,
      qt_meta_data_QQuickNumberAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickNumberAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickNumberAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickNumberAnimation.stringdata0))
        return static_cast<void*>(this);
    return QQuickPropertyAnimation::qt_metacast(_clname);
}

int QQuickNumberAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPropertyAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickVector3dAnimation_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickVector3dAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickVector3dAnimation_t qt_meta_stringdata_QQuickVector3dAnimation = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQuickVector3dAnimation"
QT_MOC_LITERAL(1, 24, 4), // "from"
QT_MOC_LITERAL(2, 29, 2) // "to"

    },
    "QQuickVector3dAnimation\0from\0to"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickVector3dAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QVector3D, 0x00095103,
       2, QMetaType::QVector3D, 0x00095103,

       0        // eod
};

void QQuickVector3dAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuickVector3dAnimation *_t = static_cast<QQuickVector3dAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->from(); break;
        case 1: *reinterpret_cast< QVector3D*>(_v) = _t->to(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickVector3dAnimation *_t = static_cast<QQuickVector3dAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrom(*reinterpret_cast< QVector3D*>(_v)); break;
        case 1: _t->setTo(*reinterpret_cast< QVector3D*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickVector3dAnimation::staticMetaObject = {
    { &QQuickPropertyAnimation::staticMetaObject, qt_meta_stringdata_QQuickVector3dAnimation.data,
      qt_meta_data_QQuickVector3dAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickVector3dAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickVector3dAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickVector3dAnimation.stringdata0))
        return static_cast<void*>(this);
    return QQuickPropertyAnimation::qt_metacast(_clname);
}

int QQuickVector3dAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPropertyAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickRotationAnimation_t {
    QByteArrayData data[11];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickRotationAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickRotationAnimation_t qt_meta_stringdata_QQuickRotationAnimation = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QQuickRotationAnimation"
QT_MOC_LITERAL(1, 24, 16), // "directionChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "from"
QT_MOC_LITERAL(4, 47, 2), // "to"
QT_MOC_LITERAL(5, 50, 9), // "direction"
QT_MOC_LITERAL(6, 60, 17), // "RotationDirection"
QT_MOC_LITERAL(7, 78, 9), // "Numerical"
QT_MOC_LITERAL(8, 88, 8), // "Shortest"
QT_MOC_LITERAL(9, 97, 9), // "Clockwise"
QT_MOC_LITERAL(10, 107, 16) // "Counterclockwise"

    },
    "QQuickRotationAnimation\0directionChanged\0"
    "\0from\0to\0direction\0RotationDirection\0"
    "Numerical\0Shortest\0Clockwise\0"
    "Counterclockwise"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickRotationAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   20, // properties
       1,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00095103,
       4, QMetaType::QReal, 0x00095103,
       5, 0x80000000 | 6, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       0,

 // enums: name, flags, count, data
       6, 0x0,    4,   36,

 // enum data: key, value
       7, uint(QQuickRotationAnimation::Numerical),
       8, uint(QQuickRotationAnimation::Shortest),
       9, uint(QQuickRotationAnimation::Clockwise),
      10, uint(QQuickRotationAnimation::Counterclockwise),

       0        // eod
};

void QQuickRotationAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickRotationAnimation *_t = static_cast<QQuickRotationAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->directionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickRotationAnimation::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRotationAnimation::directionChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickRotationAnimation *_t = static_cast<QQuickRotationAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->from(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->to(); break;
        case 2: *reinterpret_cast< RotationDirection*>(_v) = _t->direction(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickRotationAnimation *_t = static_cast<QQuickRotationAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrom(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setTo(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setDirection(*reinterpret_cast< RotationDirection*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickRotationAnimation::staticMetaObject = {
    { &QQuickPropertyAnimation::staticMetaObject, qt_meta_stringdata_QQuickRotationAnimation.data,
      qt_meta_data_QQuickRotationAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickRotationAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickRotationAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickRotationAnimation.stringdata0))
        return static_cast<void*>(this);
    return QQuickPropertyAnimation::qt_metacast(_clname);
}

int QQuickRotationAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPropertyAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
void QQuickRotationAnimation::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QQuickAnimationGroup_t {
    QByteArrayData data[4];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickAnimationGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickAnimationGroup_t qt_meta_stringdata_QQuickAnimationGroup = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickAnimationGroup"
QT_MOC_LITERAL(1, 21, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 37, 10), // "animations"
QT_MOC_LITERAL(3, 48, 41) // "QQmlListProperty<QQuickAbstra..."

    },
    "QQuickAnimationGroup\0DefaultProperty\0"
    "animations\0QQmlListProperty<QQuickAbstractAnimation>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickAnimationGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       0,    0, // methods
       1,   16, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // properties: name, type, flags
       2, 0x80000000 | 3, 0x00095009,

       0        // eod
};

void QQuickAnimationGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QQuickAbstractAnimation> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickAnimationGroup *_t = static_cast<QQuickAnimationGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QQuickAbstractAnimation>*>(_v) = _t->animations(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject QQuickAnimationGroup::staticMetaObject = {
    { &QQuickAbstractAnimation::staticMetaObject, qt_meta_stringdata_QQuickAnimationGroup.data,
      qt_meta_data_QQuickAnimationGroup,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickAnimationGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickAnimationGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickAnimationGroup.stringdata0))
        return static_cast<void*>(this);
    return QQuickAbstractAnimation::qt_metacast(_clname);
}

int QQuickAnimationGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAbstractAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickSequentialAnimation_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickSequentialAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickSequentialAnimation_t qt_meta_stringdata_QQuickSequentialAnimation = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QQuickSequentialAnimation"

    },
    "QQuickSequentialAnimation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickSequentialAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QQuickSequentialAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickSequentialAnimation::staticMetaObject = {
    { &QQuickAnimationGroup::staticMetaObject, qt_meta_stringdata_QQuickSequentialAnimation.data,
      qt_meta_data_QQuickSequentialAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickSequentialAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickSequentialAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickSequentialAnimation.stringdata0))
        return static_cast<void*>(this);
    return QQuickAnimationGroup::qt_metacast(_clname);
}

int QQuickSequentialAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAnimationGroup::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickParallelAnimation_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickParallelAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickParallelAnimation_t qt_meta_stringdata_QQuickParallelAnimation = {
    {
QT_MOC_LITERAL(0, 0, 23) // "QQuickParallelAnimation"

    },
    "QQuickParallelAnimation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickParallelAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QQuickParallelAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickParallelAnimation::staticMetaObject = {
    { &QQuickAnimationGroup::staticMetaObject, qt_meta_stringdata_QQuickParallelAnimation.data,
      qt_meta_data_QQuickParallelAnimation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickParallelAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickParallelAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickParallelAnimation.stringdata0))
        return static_cast<void*>(this);
    return QQuickAnimationGroup::qt_metacast(_clname);
}

int QQuickParallelAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAnimationGroup::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
