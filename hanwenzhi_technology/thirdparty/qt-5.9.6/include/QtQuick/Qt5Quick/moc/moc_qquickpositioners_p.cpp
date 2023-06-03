/****************************************************************************
** Meta object code from reading C++ file 'qquickpositioners_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickpositioners_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickpositioners_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPositionerAttached_t {
    QByteArrayData data[8];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPositionerAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPositionerAttached_t qt_meta_stringdata_QQuickPositionerAttached = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QQuickPositionerAttached"
QT_MOC_LITERAL(1, 25, 12), // "indexChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "isFirstItemChanged"
QT_MOC_LITERAL(4, 58, 17), // "isLastItemChanged"
QT_MOC_LITERAL(5, 76, 5), // "index"
QT_MOC_LITERAL(6, 82, 11), // "isFirstItem"
QT_MOC_LITERAL(7, 94, 10) // "isLastItem"

    },
    "QQuickPositionerAttached\0indexChanged\0"
    "\0isFirstItemChanged\0isLastItemChanged\0"
    "index\0isFirstItem\0isLastItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPositionerAttached[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::Int, 0x00495001,
       6, QMetaType::Bool, 0x00495001,
       7, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QQuickPositionerAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPositionerAttached *_t = static_cast<QQuickPositionerAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexChanged(); break;
        case 1: _t->isFirstItemChanged(); break;
        case 2: _t->isLastItemChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPositionerAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPositionerAttached::indexChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPositionerAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPositionerAttached::isFirstItemChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPositionerAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPositionerAttached::isLastItemChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPositionerAttached *_t = static_cast<QQuickPositionerAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->index(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isFirstItem(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isLastItem(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickPositionerAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickPositionerAttached.data,
      qt_meta_data_QQuickPositionerAttached,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPositionerAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPositionerAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPositionerAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickPositionerAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void QQuickPositionerAttached::indexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPositionerAttached::isFirstItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPositionerAttached::isLastItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_QQuickBasePositioner_t {
    QByteArrayData data[24];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickBasePositioner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickBasePositioner_t qt_meta_stringdata_QQuickBasePositioner = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickBasePositioner"
QT_MOC_LITERAL(1, 21, 14), // "spacingChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "populateChanged"
QT_MOC_LITERAL(4, 53, 11), // "moveChanged"
QT_MOC_LITERAL(5, 65, 10), // "addChanged"
QT_MOC_LITERAL(6, 76, 14), // "paddingChanged"
QT_MOC_LITERAL(7, 91, 17), // "topPaddingChanged"
QT_MOC_LITERAL(8, 109, 18), // "leftPaddingChanged"
QT_MOC_LITERAL(9, 128, 19), // "rightPaddingChanged"
QT_MOC_LITERAL(10, 148, 20), // "bottomPaddingChanged"
QT_MOC_LITERAL(11, 169, 19), // "positioningComplete"
QT_MOC_LITERAL(12, 189, 14), // "prePositioning"
QT_MOC_LITERAL(13, 204, 11), // "forceLayout"
QT_MOC_LITERAL(14, 216, 7), // "spacing"
QT_MOC_LITERAL(15, 224, 8), // "populate"
QT_MOC_LITERAL(16, 233, 17), // "QQuickTransition*"
QT_MOC_LITERAL(17, 251, 4), // "move"
QT_MOC_LITERAL(18, 256, 3), // "add"
QT_MOC_LITERAL(19, 260, 7), // "padding"
QT_MOC_LITERAL(20, 268, 10), // "topPadding"
QT_MOC_LITERAL(21, 279, 11), // "leftPadding"
QT_MOC_LITERAL(22, 291, 12), // "rightPadding"
QT_MOC_LITERAL(23, 304, 13) // "bottomPadding"

    },
    "QQuickBasePositioner\0spacingChanged\0"
    "\0populateChanged\0moveChanged\0addChanged\0"
    "paddingChanged\0topPaddingChanged\0"
    "leftPaddingChanged\0rightPaddingChanged\0"
    "bottomPaddingChanged\0positioningComplete\0"
    "prePositioning\0forceLayout\0spacing\0"
    "populate\0QQuickTransition*\0move\0add\0"
    "padding\0topPadding\0leftPadding\0"
    "rightPadding\0bottomPadding"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickBasePositioner[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       9,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   86,    2, 0x06 /* Public */,
       3,    0,   87,    2, 0x06 /* Public */,
       4,    0,   88,    2, 0x06 /* Public */,
       5,    0,   89,    2, 0x06 /* Public */,
       6,    0,   90,    2, 0x86 /* Public | MethodRevisioned */,
       7,    0,   91,    2, 0x86 /* Public | MethodRevisioned */,
       8,    0,   92,    2, 0x86 /* Public | MethodRevisioned */,
       9,    0,   93,    2, 0x86 /* Public | MethodRevisioned */,
      10,    0,   94,    2, 0x86 /* Public | MethodRevisioned */,
      11,    0,   95,    2, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   96,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      13,    0,   97,    2, 0x82 /* Public | MethodRevisioned */,

 // signals: revision
       0,
       0,
       0,
       0,
       6,
       6,
       6,
       6,
       6,
       9,

 // slots: revision
       0,

 // methods: revision
       9,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::QReal, 0x00495103,
      15, 0x80000000 | 16, 0x0049510b,
      17, 0x80000000 | 16, 0x0049510b,
      18, 0x80000000 | 16, 0x0049510b,
      19, QMetaType::QReal, 0x00c95107,
      20, QMetaType::QReal, 0x00c95107,
      21, QMetaType::QReal, 0x00c95107,
      22, QMetaType::QReal, 0x00c95107,
      23, QMetaType::QReal, 0x00c95107,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,

 // properties: revision
       0,
       0,
       0,
       0,
       6,
       6,
       6,
       6,
       6,

       0        // eod
};

void QQuickBasePositioner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickBasePositioner *_t = static_cast<QQuickBasePositioner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->spacingChanged(); break;
        case 1: _t->populateChanged(); break;
        case 2: _t->moveChanged(); break;
        case 3: _t->addChanged(); break;
        case 4: _t->paddingChanged(); break;
        case 5: _t->topPaddingChanged(); break;
        case 6: _t->leftPaddingChanged(); break;
        case 7: _t->rightPaddingChanged(); break;
        case 8: _t->bottomPaddingChanged(); break;
        case 9: _t->positioningComplete(); break;
        case 10: _t->prePositioning(); break;
        case 11: _t->forceLayout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickBasePositioner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickBasePositioner::spacingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickBasePositioner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickBasePositioner::populateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickBasePositioner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickBasePositioner::moveChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickBasePositioner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickBasePositioner::addChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickBasePositioner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickBasePositioner::paddingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickBasePositioner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickBasePositioner::topPaddingChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickBasePositioner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickBasePositioner::leftPaddingChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickBasePositioner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickBasePositioner::rightPaddingChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QQuickBasePositioner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickBasePositioner::bottomPaddingChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QQuickBasePositioner::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickBasePositioner::positioningComplete)) {
                *result = 9;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickTransition* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickBasePositioner *_t = static_cast<QQuickBasePositioner *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->spacing(); break;
        case 1: *reinterpret_cast< QQuickTransition**>(_v) = _t->populate(); break;
        case 2: *reinterpret_cast< QQuickTransition**>(_v) = _t->move(); break;
        case 3: *reinterpret_cast< QQuickTransition**>(_v) = _t->add(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->padding(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->topPadding(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->leftPadding(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->rightPadding(); break;
        case 8: *reinterpret_cast< qreal*>(_v) = _t->bottomPadding(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickBasePositioner *_t = static_cast<QQuickBasePositioner *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setPopulate(*reinterpret_cast< QQuickTransition**>(_v)); break;
        case 2: _t->setMove(*reinterpret_cast< QQuickTransition**>(_v)); break;
        case 3: _t->setAdd(*reinterpret_cast< QQuickTransition**>(_v)); break;
        case 4: _t->setPadding(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setTopPadding(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setLeftPadding(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setRightPadding(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setBottomPadding(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickBasePositioner *_t = static_cast<QQuickBasePositioner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 4: _t->resetPadding(); break;
        case 5: _t->resetTopPadding(); break;
        case 6: _t->resetLeftPadding(); break;
        case 7: _t->resetRightPadding(); break;
        case 8: _t->resetBottomPadding(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickBasePositioner::staticMetaObject = {
    { &QQuickImplicitSizeItem::staticMetaObject, qt_meta_stringdata_QQuickBasePositioner.data,
      qt_meta_data_QQuickBasePositioner,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickBasePositioner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickBasePositioner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickBasePositioner.stringdata0))
        return static_cast<void*>(this);
    return QQuickImplicitSizeItem::qt_metacast(_clname);
}

int QQuickBasePositioner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickImplicitSizeItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
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
void QQuickBasePositioner::spacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickBasePositioner::populateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickBasePositioner::moveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickBasePositioner::addChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickBasePositioner::paddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickBasePositioner::topPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickBasePositioner::leftPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickBasePositioner::rightPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QQuickBasePositioner::bottomPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QQuickBasePositioner::positioningComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
struct qt_meta_stringdata_QQuickColumn_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickColumn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickColumn_t qt_meta_stringdata_QQuickColumn = {
    {
QT_MOC_LITERAL(0, 0, 12) // "QQuickColumn"

    },
    "QQuickColumn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickColumn[] = {

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

void QQuickColumn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickColumn::staticMetaObject = {
    { &QQuickBasePositioner::staticMetaObject, qt_meta_stringdata_QQuickColumn.data,
      qt_meta_data_QQuickColumn,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickColumn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickColumn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickColumn.stringdata0))
        return static_cast<void*>(this);
    return QQuickBasePositioner::qt_metacast(_clname);
}

int QQuickColumn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickBasePositioner::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickRow_t {
    QByteArrayData data[7];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickRow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickRow_t qt_meta_stringdata_QQuickRow = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QQuickRow"
QT_MOC_LITERAL(1, 10, 22), // "layoutDirectionChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 31), // "effectiveLayoutDirectionChanged"
QT_MOC_LITERAL(4, 66, 15), // "layoutDirection"
QT_MOC_LITERAL(5, 82, 19), // "Qt::LayoutDirection"
QT_MOC_LITERAL(6, 102, 24) // "effectiveLayoutDirection"

    },
    "QQuickRow\0layoutDirectionChanged\0\0"
    "effectiveLayoutDirectionChanged\0"
    "layoutDirection\0Qt::LayoutDirection\0"
    "effectiveLayoutDirection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickRow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x0049510b,
       6, 0x80000000 | 5, 0x00495009,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QQuickRow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickRow *_t = static_cast<QQuickRow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layoutDirectionChanged(); break;
        case 1: _t->effectiveLayoutDirectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickRow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRow::layoutDirectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickRow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickRow::effectiveLayoutDirectionChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickRow *_t = static_cast<QQuickRow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->layoutDirection(); break;
        case 1: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->effectiveLayoutDirection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickRow *_t = static_cast<QQuickRow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickRow::staticMetaObject = {
    { &QQuickBasePositioner::staticMetaObject, qt_meta_stringdata_QQuickRow.data,
      qt_meta_data_QQuickRow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickRow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickRow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickRow.stringdata0))
        return static_cast<void*>(this);
    return QQuickBasePositioner::qt_metacast(_clname);
}

int QQuickRow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickBasePositioner::qt_metacall(_c, _id, _a);
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
void QQuickRow::layoutDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickRow::effectiveLayoutDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QQuickGrid_t {
    QByteArrayData data[35];
    char stringdata0[545];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickGrid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickGrid_t qt_meta_stringdata_QQuickGrid = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QQuickGrid"
QT_MOC_LITERAL(1, 11, 11), // "rowsChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "columnsChanged"
QT_MOC_LITERAL(4, 39, 11), // "flowChanged"
QT_MOC_LITERAL(5, 51, 22), // "layoutDirectionChanged"
QT_MOC_LITERAL(6, 74, 31), // "effectiveLayoutDirectionChanged"
QT_MOC_LITERAL(7, 106, 17), // "rowSpacingChanged"
QT_MOC_LITERAL(8, 124, 20), // "columnSpacingChanged"
QT_MOC_LITERAL(9, 145, 26), // "horizontalAlignmentChanged"
QT_MOC_LITERAL(10, 172, 10), // "HAlignment"
QT_MOC_LITERAL(11, 183, 9), // "alignment"
QT_MOC_LITERAL(12, 193, 35), // "effectiveHorizontalAlignmentC..."
QT_MOC_LITERAL(13, 229, 24), // "verticalAlignmentChanged"
QT_MOC_LITERAL(14, 254, 10), // "VAlignment"
QT_MOC_LITERAL(15, 265, 4), // "rows"
QT_MOC_LITERAL(16, 270, 7), // "columns"
QT_MOC_LITERAL(17, 278, 10), // "rowSpacing"
QT_MOC_LITERAL(18, 289, 13), // "columnSpacing"
QT_MOC_LITERAL(19, 303, 4), // "flow"
QT_MOC_LITERAL(20, 308, 4), // "Flow"
QT_MOC_LITERAL(21, 313, 15), // "layoutDirection"
QT_MOC_LITERAL(22, 329, 19), // "Qt::LayoutDirection"
QT_MOC_LITERAL(23, 349, 24), // "effectiveLayoutDirection"
QT_MOC_LITERAL(24, 374, 23), // "horizontalItemAlignment"
QT_MOC_LITERAL(25, 398, 32), // "effectiveHorizontalItemAlignment"
QT_MOC_LITERAL(26, 431, 21), // "verticalItemAlignment"
QT_MOC_LITERAL(27, 453, 11), // "LeftToRight"
QT_MOC_LITERAL(28, 465, 11), // "TopToBottom"
QT_MOC_LITERAL(29, 477, 9), // "AlignLeft"
QT_MOC_LITERAL(30, 487, 10), // "AlignRight"
QT_MOC_LITERAL(31, 498, 12), // "AlignHCenter"
QT_MOC_LITERAL(32, 511, 8), // "AlignTop"
QT_MOC_LITERAL(33, 520, 11), // "AlignBottom"
QT_MOC_LITERAL(34, 532, 12) // "AlignVCenter"

    },
    "QQuickGrid\0rowsChanged\0\0columnsChanged\0"
    "flowChanged\0layoutDirectionChanged\0"
    "effectiveLayoutDirectionChanged\0"
    "rowSpacingChanged\0columnSpacingChanged\0"
    "horizontalAlignmentChanged\0HAlignment\0"
    "alignment\0effectiveHorizontalAlignmentChanged\0"
    "verticalAlignmentChanged\0VAlignment\0"
    "rows\0columns\0rowSpacing\0columnSpacing\0"
    "flow\0Flow\0layoutDirection\0Qt::LayoutDirection\0"
    "effectiveLayoutDirection\0"
    "horizontalItemAlignment\0"
    "effectiveHorizontalItemAlignment\0"
    "verticalItemAlignment\0LeftToRight\0"
    "TopToBottom\0AlignLeft\0AlignRight\0"
    "AlignHCenter\0AlignTop\0AlignBottom\0"
    "AlignVCenter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickGrid[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,   90, // properties
       3,  140, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,
       8,    0,   80,    2, 0x06 /* Public */,
       9,    1,   81,    2, 0x86 /* Public | MethodRevisioned */,
      12,    1,   84,    2, 0x86 /* Public | MethodRevisioned */,
      13,    1,   87,    2, 0x86 /* Public | MethodRevisioned */,

 // signals: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       1,
       1,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 14,   11,

 // properties: name, type, flags
      15, QMetaType::Int, 0x00495103,
      16, QMetaType::Int, 0x00495103,
      17, QMetaType::QReal, 0x00495107,
      18, QMetaType::QReal, 0x00495107,
      19, 0x80000000 | 20, 0x0049510b,
      21, 0x80000000 | 22, 0x0049510b,
      23, 0x80000000 | 22, 0x00495009,
      24, 0x80000000 | 10, 0x00c9500b,
      25, 0x80000000 | 10, 0x00c95009,
      26, 0x80000000 | 14, 0x00c9500b,

 // properties: notify_signal_id
       0,
       1,
       5,
       6,
       2,
       3,
       4,
       7,
       8,
       9,

 // properties: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       1,
       1,

 // enums: name, flags, count, data
      20, 0x0,    2,  152,
      10, 0x0,    3,  156,
      14, 0x0,    3,  162,

 // enum data: key, value
      27, uint(QQuickGrid::LeftToRight),
      28, uint(QQuickGrid::TopToBottom),
      29, uint(QQuickGrid::AlignLeft),
      30, uint(QQuickGrid::AlignRight),
      31, uint(QQuickGrid::AlignHCenter),
      32, uint(QQuickGrid::AlignTop),
      33, uint(QQuickGrid::AlignBottom),
      34, uint(QQuickGrid::AlignVCenter),

       0        // eod
};

void QQuickGrid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickGrid *_t = static_cast<QQuickGrid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rowsChanged(); break;
        case 1: _t->columnsChanged(); break;
        case 2: _t->flowChanged(); break;
        case 3: _t->layoutDirectionChanged(); break;
        case 4: _t->effectiveLayoutDirectionChanged(); break;
        case 5: _t->rowSpacingChanged(); break;
        case 6: _t->columnSpacingChanged(); break;
        case 7: _t->horizontalAlignmentChanged((*reinterpret_cast< HAlignment(*)>(_a[1]))); break;
        case 8: _t->effectiveHorizontalAlignmentChanged((*reinterpret_cast< HAlignment(*)>(_a[1]))); break;
        case 9: _t->verticalAlignmentChanged((*reinterpret_cast< VAlignment(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickGrid::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGrid::rowsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickGrid::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGrid::columnsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickGrid::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGrid::flowChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickGrid::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGrid::layoutDirectionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickGrid::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGrid::effectiveLayoutDirectionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickGrid::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGrid::rowSpacingChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickGrid::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGrid::columnSpacingChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickGrid::*_t)(HAlignment );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGrid::horizontalAlignmentChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QQuickGrid::*_t)(HAlignment );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGrid::effectiveHorizontalAlignmentChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QQuickGrid::*_t)(VAlignment );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickGrid::verticalAlignmentChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickGrid *_t = static_cast<QQuickGrid *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->rows(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->columns(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->rowSpacing(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->columnSpacing(); break;
        case 4: *reinterpret_cast< Flow*>(_v) = _t->flow(); break;
        case 5: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->layoutDirection(); break;
        case 6: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->effectiveLayoutDirection(); break;
        case 7: *reinterpret_cast< HAlignment*>(_v) = _t->hItemAlign(); break;
        case 8: *reinterpret_cast< HAlignment*>(_v) = _t->effectiveHAlign(); break;
        case 9: *reinterpret_cast< VAlignment*>(_v) = _t->vItemAlign(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickGrid *_t = static_cast<QQuickGrid *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRows(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setColumns(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setRowSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setColumnSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setFlow(*reinterpret_cast< Flow*>(_v)); break;
        case 5: _t->setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        case 7: _t->setHItemAlign(*reinterpret_cast< HAlignment*>(_v)); break;
        case 9: _t->setVItemAlign(*reinterpret_cast< VAlignment*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickGrid *_t = static_cast<QQuickGrid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 2: _t->resetRowSpacing(); break;
        case 3: _t->resetColumnSpacing(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickGrid::staticMetaObject = {
    { &QQuickBasePositioner::staticMetaObject, qt_meta_stringdata_QQuickGrid.data,
      qt_meta_data_QQuickGrid,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickGrid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickGrid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickGrid.stringdata0))
        return static_cast<void*>(this);
    return QQuickBasePositioner::qt_metacast(_clname);
}

int QQuickGrid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickBasePositioner::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickGrid::rowsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickGrid::columnsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickGrid::flowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickGrid::layoutDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickGrid::effectiveLayoutDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickGrid::rowSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickGrid::columnSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickGrid::horizontalAlignmentChanged(HAlignment _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QQuickGrid::effectiveHorizontalAlignmentChanged(HAlignment _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QQuickGrid::verticalAlignmentChanged(VAlignment _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
struct qt_meta_stringdata_QQuickFlow_t {
    QByteArrayData data[12];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickFlow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickFlow_t qt_meta_stringdata_QQuickFlow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QQuickFlow"
QT_MOC_LITERAL(1, 11, 11), // "flowChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 22), // "layoutDirectionChanged"
QT_MOC_LITERAL(4, 47, 31), // "effectiveLayoutDirectionChanged"
QT_MOC_LITERAL(5, 79, 4), // "flow"
QT_MOC_LITERAL(6, 84, 4), // "Flow"
QT_MOC_LITERAL(7, 89, 15), // "layoutDirection"
QT_MOC_LITERAL(8, 105, 19), // "Qt::LayoutDirection"
QT_MOC_LITERAL(9, 125, 24), // "effectiveLayoutDirection"
QT_MOC_LITERAL(10, 150, 11), // "LeftToRight"
QT_MOC_LITERAL(11, 162, 11) // "TopToBottom"

    },
    "QQuickFlow\0flowChanged\0\0layoutDirectionChanged\0"
    "effectiveLayoutDirectionChanged\0flow\0"
    "Flow\0layoutDirection\0Qt::LayoutDirection\0"
    "effectiveLayoutDirection\0LeftToRight\0"
    "TopToBottom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickFlow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       1,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0049510b,
       7, 0x80000000 | 8, 0x0049510b,
       9, 0x80000000 | 8, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
       6, 0x0,    2,   48,

 // enum data: key, value
      10, uint(QQuickFlow::LeftToRight),
      11, uint(QQuickFlow::TopToBottom),

       0        // eod
};

void QQuickFlow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickFlow *_t = static_cast<QQuickFlow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flowChanged(); break;
        case 1: _t->layoutDirectionChanged(); break;
        case 2: _t->effectiveLayoutDirectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickFlow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlow::flowChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickFlow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlow::layoutDirectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickFlow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlow::effectiveLayoutDirectionChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickFlow *_t = static_cast<QQuickFlow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Flow*>(_v) = _t->flow(); break;
        case 1: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->layoutDirection(); break;
        case 2: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->effectiveLayoutDirection(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickFlow *_t = static_cast<QQuickFlow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlow(*reinterpret_cast< Flow*>(_v)); break;
        case 1: _t->setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickFlow::staticMetaObject = {
    { &QQuickBasePositioner::staticMetaObject, qt_meta_stringdata_QQuickFlow.data,
      qt_meta_data_QQuickFlow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickFlow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickFlow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickFlow.stringdata0))
        return static_cast<void*>(this);
    return QQuickBasePositioner::qt_metacast(_clname);
}

int QQuickFlow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickBasePositioner::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void QQuickFlow::flowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickFlow::layoutDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickFlow::effectiveLayoutDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
