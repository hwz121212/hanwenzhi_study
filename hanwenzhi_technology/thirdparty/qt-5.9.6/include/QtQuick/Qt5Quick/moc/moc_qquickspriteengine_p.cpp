/****************************************************************************
** Meta object code from reading C++ file 'qquickspriteengine_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickspriteengine_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickspriteengine_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickStochasticState_t {
    QByteArrayData data[19];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickStochasticState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickStochasticState_t qt_meta_stringdata_QQuickStochasticState = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickStochasticState"
QT_MOC_LITERAL(1, 22, 15), // "durationChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 3), // "arg"
QT_MOC_LITERAL(4, 43, 11), // "nameChanged"
QT_MOC_LITERAL(5, 55, 9), // "toChanged"
QT_MOC_LITERAL(6, 65, 24), // "durationVariationChanged"
QT_MOC_LITERAL(7, 90, 7), // "entered"
QT_MOC_LITERAL(8, 98, 18), // "randomStartChanged"
QT_MOC_LITERAL(9, 117, 11), // "setDuration"
QT_MOC_LITERAL(10, 129, 7), // "setName"
QT_MOC_LITERAL(11, 137, 5), // "setTo"
QT_MOC_LITERAL(12, 143, 20), // "setDurationVariation"
QT_MOC_LITERAL(13, 164, 14), // "setRandomStart"
QT_MOC_LITERAL(14, 179, 8), // "duration"
QT_MOC_LITERAL(15, 188, 17), // "durationVariation"
QT_MOC_LITERAL(16, 206, 11), // "randomStart"
QT_MOC_LITERAL(17, 218, 2), // "to"
QT_MOC_LITERAL(18, 221, 4) // "name"

    },
    "QQuickStochasticState\0durationChanged\0"
    "\0arg\0nameChanged\0toChanged\0"
    "durationVariationChanged\0entered\0"
    "randomStartChanged\0setDuration\0setName\0"
    "setTo\0setDurationVariation\0setRandomStart\0"
    "duration\0durationVariation\0randomStart\0"
    "to\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickStochasticState[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       5,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       5,    1,   75,    2, 0x06 /* Public */,
       6,    1,   78,    2, 0x06 /* Public */,
       7,    0,   81,    2, 0x06 /* Public */,
       8,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   85,    2, 0x0a /* Public */,
      10,    1,   88,    2, 0x0a /* Public */,
      11,    1,   91,    2, 0x0a /* Public */,
      12,    1,   94,    2, 0x0a /* Public */,
      13,    1,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QVariantMap,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QVariantMap,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
      14, QMetaType::Int, 0x00495103,
      15, QMetaType::Int, 0x00495103,
      16, QMetaType::Bool, 0x00495103,
      17, QMetaType::QVariantMap, 0x00495103,
      18, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       3,
       5,
       2,
       1,

       0        // eod
};

void QQuickStochasticState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickStochasticState *_t = static_cast<QQuickStochasticState *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->durationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->toChanged((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 3: _t->durationVariationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->entered(); break;
        case 5: _t->randomStartChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setTo((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 9: _t->setDurationVariation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setRandomStart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickStochasticState::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickStochasticState::durationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickStochasticState::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickStochasticState::nameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickStochasticState::*_t)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickStochasticState::toChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickStochasticState::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickStochasticState::durationVariationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickStochasticState::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickStochasticState::entered)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickStochasticState::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickStochasticState::randomStartChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickStochasticState *_t = static_cast<QQuickStochasticState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->durationVariation(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->randomStart(); break;
        case 3: *reinterpret_cast< QVariantMap*>(_v) = _t->to(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickStochasticState *_t = static_cast<QQuickStochasticState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDuration(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setDurationVariation(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setRandomStart(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setTo(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 4: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickStochasticState::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickStochasticState.data,
      qt_meta_data_QQuickStochasticState,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickStochasticState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickStochasticState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickStochasticState.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickStochasticState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
void QQuickStochasticState::durationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickStochasticState::nameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickStochasticState::toChanged(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQuickStochasticState::durationVariationChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQuickStochasticState::entered()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickStochasticState::randomStartChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_QQuickStochasticEngine_t {
    QByteArrayData data[12];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickStochasticEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickStochasticEngine_t qt_meta_stringdata_QQuickStochasticEngine = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QQuickStochasticEngine"
QT_MOC_LITERAL(1, 23, 17), // "globalGoalChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 3), // "arg"
QT_MOC_LITERAL(4, 46, 12), // "stateChanged"
QT_MOC_LITERAL(5, 59, 3), // "idx"
QT_MOC_LITERAL(6, 63, 13), // "setGlobalGoal"
QT_MOC_LITERAL(7, 77, 13), // "updateSprites"
QT_MOC_LITERAL(8, 91, 4), // "time"
QT_MOC_LITERAL(9, 96, 10), // "globalGoal"
QT_MOC_LITERAL(10, 107, 6), // "states"
QT_MOC_LITERAL(11, 114, 39) // "QQmlListProperty<QQuickStocha..."

    },
    "QQuickStochasticEngine\0globalGoalChanged\0"
    "\0arg\0stateChanged\0idx\0setGlobalGoal\0"
    "updateSprites\0time\0globalGoal\0states\0"
    "QQmlListProperty<QQuickStochasticState>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickStochasticEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::UInt, QMetaType::UInt,    8,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495103,
      10, 0x80000000 | 11, 0x00095009,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void QQuickStochasticEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickStochasticEngine *_t = static_cast<QQuickStochasticEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->globalGoalChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setGlobalGoal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { uint _r = _t->updateSprites((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickStochasticEngine::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickStochasticEngine::globalGoalChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickStochasticEngine::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickStochasticEngine::stateChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickStochasticEngine *_t = static_cast<QQuickStochasticEngine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->globalGoal(); break;
        case 1: *reinterpret_cast< QQmlListProperty<QQuickStochasticState>*>(_v) = _t->states(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickStochasticEngine *_t = static_cast<QQuickStochasticEngine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGlobalGoal(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickStochasticEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickStochasticEngine.data,
      qt_meta_data_QQuickStochasticEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickStochasticEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickStochasticEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickStochasticEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickStochasticEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QQuickStochasticEngine::globalGoalChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickStochasticEngine::stateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QQuickSpriteEngine_t {
    QByteArrayData data[3];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickSpriteEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickSpriteEngine_t qt_meta_stringdata_QQuickSpriteEngine = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQuickSpriteEngine"
QT_MOC_LITERAL(1, 19, 7), // "sprites"
QT_MOC_LITERAL(2, 27, 30) // "QQmlListProperty<QQuickSprite>"

    },
    "QQuickSpriteEngine\0sprites\0"
    "QQmlListProperty<QQuickSprite>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickSpriteEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095009,

       0        // eod
};

void QQuickSpriteEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuickSpriteEngine *_t = static_cast<QQuickSpriteEngine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QQuickSprite>*>(_v) = _t->sprites(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickSpriteEngine::staticMetaObject = {
    { &QQuickStochasticEngine::staticMetaObject, qt_meta_stringdata_QQuickSpriteEngine.data,
      qt_meta_data_QQuickSpriteEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickSpriteEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickSpriteEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickSpriteEngine.stringdata0))
        return static_cast<void*>(this);
    return QQuickStochasticEngine::qt_metacast(_clname);
}

int QQuickSpriteEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickStochasticEngine::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
