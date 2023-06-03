/****************************************************************************
** Meta object code from reading C++ file 'qquickspritesequence_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickspritesequence_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickspritesequence_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickSpriteSequence_t {
    QByteArrayData data[20];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickSpriteSequence_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickSpriteSequence_t qt_meta_stringdata_QQuickSpriteSequence = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickSpriteSequence"
QT_MOC_LITERAL(1, 21, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 37, 7), // "sprites"
QT_MOC_LITERAL(3, 45, 14), // "runningChanged"
QT_MOC_LITERAL(4, 60, 0), // ""
QT_MOC_LITERAL(5, 61, 3), // "arg"
QT_MOC_LITERAL(6, 65, 18), // "interpolateChanged"
QT_MOC_LITERAL(7, 84, 17), // "goalSpriteChanged"
QT_MOC_LITERAL(8, 102, 20), // "currentSpriteChanged"
QT_MOC_LITERAL(9, 123, 6), // "jumpTo"
QT_MOC_LITERAL(10, 130, 6), // "sprite"
QT_MOC_LITERAL(11, 137, 13), // "setGoalSprite"
QT_MOC_LITERAL(12, 151, 10), // "setRunning"
QT_MOC_LITERAL(13, 162, 14), // "setInterpolate"
QT_MOC_LITERAL(14, 177, 12), // "createEngine"
QT_MOC_LITERAL(15, 190, 7), // "running"
QT_MOC_LITERAL(16, 198, 11), // "interpolate"
QT_MOC_LITERAL(17, 210, 10), // "goalSprite"
QT_MOC_LITERAL(18, 221, 13), // "currentSprite"
QT_MOC_LITERAL(19, 235, 30) // "QQmlListProperty<QQuickSprite>"

    },
    "QQuickSpriteSequence\0DefaultProperty\0"
    "sprites\0runningChanged\0\0arg\0"
    "interpolateChanged\0goalSpriteChanged\0"
    "currentSpriteChanged\0jumpTo\0sprite\0"
    "setGoalSprite\0setRunning\0setInterpolate\0"
    "createEngine\0running\0interpolate\0"
    "goalSprite\0currentSprite\0"
    "QQmlListProperty<QQuickSprite>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickSpriteSequence[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       9,   16, // methods
       5,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   61,    4, 0x06 /* Public */,
       6,    1,   64,    4, 0x06 /* Public */,
       7,    1,   67,    4, 0x06 /* Public */,
       8,    1,   70,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   73,    4, 0x0a /* Public */,
      11,    1,   76,    4, 0x0a /* Public */,
      12,    1,   79,    4, 0x0a /* Public */,
      13,    1,   82,    4, 0x0a /* Public */,
      14,    0,   85,    4, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00495103,
      16, QMetaType::Bool, 0x00495103,
      17, QMetaType::QString, 0x00495103,
      18, QMetaType::QString, 0x00495001,
       2, 0x80000000 | 19, 0x00095009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,

       0        // eod
};

void QQuickSpriteSequence::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickSpriteSequence *_t = static_cast<QQuickSpriteSequence *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->runningChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->interpolateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->goalSpriteChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->currentSpriteChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->jumpTo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->setGoalSprite((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setRunning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setInterpolate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->createEngine(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickSpriteSequence::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpriteSequence::runningChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickSpriteSequence::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpriteSequence::interpolateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickSpriteSequence::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpriteSequence::goalSpriteChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickSpriteSequence::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickSpriteSequence::currentSpriteChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickSpriteSequence *_t = static_cast<QQuickSpriteSequence *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->running(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->interpolate(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->goalSprite(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->currentSprite(); break;
        case 4: *reinterpret_cast< QQmlListProperty<QQuickSprite>*>(_v) = _t->sprites(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickSpriteSequence *_t = static_cast<QQuickSpriteSequence *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRunning(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setInterpolate(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setGoalSprite(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickSpriteSequence::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QQuickSpriteSequence.data,
      qt_meta_data_QQuickSpriteSequence,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickSpriteSequence::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickSpriteSequence::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickSpriteSequence.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickSpriteSequence::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
void QQuickSpriteSequence::runningChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickSpriteSequence::interpolateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickSpriteSequence::goalSpriteChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQuickSpriteSequence::currentSpriteChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
