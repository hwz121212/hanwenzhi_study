/****************************************************************************
** Meta object code from reading C++ file 'qquicktooltip_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickTemplates2/private/qquicktooltip_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquicktooltip_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickToolTip_t {
    QByteArrayData data[8];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickToolTip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickToolTip_t qt_meta_stringdata_QQuickToolTip = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QQuickToolTip"
QT_MOC_LITERAL(1, 14, 11), // "textChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "delayChanged"
QT_MOC_LITERAL(4, 40, 14), // "timeoutChanged"
QT_MOC_LITERAL(5, 55, 5), // "delay"
QT_MOC_LITERAL(6, 61, 7), // "timeout"
QT_MOC_LITERAL(7, 69, 4) // "text"

    },
    "QQuickToolTip\0textChanged\0\0delayChanged\0"
    "timeoutChanged\0delay\0timeout\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickToolTip[] = {

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
       5, QMetaType::Int, 0x00495903,
       6, QMetaType::Int, 0x00495903,
       7, QMetaType::QString, 0x00495903,

 // properties: notify_signal_id
       1,
       2,
       0,

       0        // eod
};

void QQuickToolTip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickToolTip *_t = static_cast<QQuickToolTip *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->delayChanged(); break;
        case 2: _t->timeoutChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickToolTip::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickToolTip::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickToolTip::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickToolTip::delayChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickToolTip::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickToolTip::timeoutChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickToolTip *_t = static_cast<QQuickToolTip *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->delay(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->timeout(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickToolTip *_t = static_cast<QQuickToolTip *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDelay(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setTimeout(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickToolTip::staticMetaObject = {
    { &QQuickPopup::staticMetaObject, qt_meta_stringdata_QQuickToolTip.data,
      qt_meta_data_QQuickToolTip,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickToolTip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickToolTip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickToolTip.stringdata0))
        return static_cast<void*>(this);
    return QQuickPopup::qt_metacast(_clname);
}

int QQuickToolTip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPopup::qt_metacall(_c, _id, _a);
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
void QQuickToolTip::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickToolTip::delayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickToolTip::timeoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_QQuickToolTipAttached_t {
    QByteArrayData data[15];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickToolTipAttached_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickToolTipAttached_t qt_meta_stringdata_QQuickToolTipAttached = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickToolTipAttached"
QT_MOC_LITERAL(1, 22, 11), // "textChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "delayChanged"
QT_MOC_LITERAL(4, 48, 14), // "timeoutChanged"
QT_MOC_LITERAL(5, 63, 14), // "visibleChanged"
QT_MOC_LITERAL(6, 78, 4), // "show"
QT_MOC_LITERAL(7, 83, 4), // "text"
QT_MOC_LITERAL(8, 88, 2), // "ms"
QT_MOC_LITERAL(9, 91, 4), // "hide"
QT_MOC_LITERAL(10, 96, 5), // "delay"
QT_MOC_LITERAL(11, 102, 7), // "timeout"
QT_MOC_LITERAL(12, 110, 7), // "visible"
QT_MOC_LITERAL(13, 118, 7), // "toolTip"
QT_MOC_LITERAL(14, 126, 14) // "QQuickToolTip*"

    },
    "QQuickToolTipAttached\0textChanged\0\0"
    "delayChanged\0timeoutChanged\0visibleChanged\0"
    "show\0text\0ms\0hide\0delay\0timeout\0visible\0"
    "toolTip\0QQuickToolTip*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickToolTipAttached[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   53,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x2a /* Public | MethodCloned */,
       9,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495903,
      10, QMetaType::Int, 0x00495903,
      11, QMetaType::Int, 0x00495903,
      12, QMetaType::Bool, 0x00495903,
      13, 0x80000000 | 14, 0x00095c09,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,

       0        // eod
};

void QQuickToolTipAttached::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickToolTipAttached *_t = static_cast<QQuickToolTipAttached *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->delayChanged(); break;
        case 2: _t->timeoutChanged(); break;
        case 3: _t->visibleChanged(); break;
        case 4: _t->show((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->show((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->hide(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickToolTipAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickToolTipAttached::textChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickToolTipAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickToolTipAttached::delayChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickToolTipAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickToolTipAttached::timeoutChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickToolTipAttached::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickToolTipAttached::visibleChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickToolTip* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickToolTipAttached *_t = static_cast<QQuickToolTipAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->delay(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->timeout(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 4: *reinterpret_cast< QQuickToolTip**>(_v) = _t->toolTip(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickToolTipAttached *_t = static_cast<QQuickToolTipAttached *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDelay(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setTimeout(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickToolTipAttached::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickToolTipAttached.data,
      qt_meta_data_QQuickToolTipAttached,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickToolTipAttached::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickToolTipAttached::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickToolTipAttached.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickToolTipAttached::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QQuickToolTipAttached::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickToolTipAttached::delayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickToolTipAttached::timeoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickToolTipAttached::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
