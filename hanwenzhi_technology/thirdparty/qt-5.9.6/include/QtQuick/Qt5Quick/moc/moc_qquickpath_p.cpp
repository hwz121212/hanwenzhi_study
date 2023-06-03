/****************************************************************************
** Meta object code from reading C++ file 'qquickpath_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickpath_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickpath_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPathElement_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPathElement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPathElement_t qt_meta_stringdata_QQuickPathElement = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQuickPathElement"
QT_MOC_LITERAL(1, 18, 7), // "changed"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "QQuickPathElement\0changed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPathElement[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QQuickPathElement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPathElement *_t = static_cast<QQuickPathElement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPathElement::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathElement::changed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QQuickPathElement::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickPathElement.data,
      qt_meta_data_QQuickPathElement,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPathElement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPathElement::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPathElement.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickPathElement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QQuickPathElement::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QQuickPathAttribute_t {
    QByteArrayData data[6];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPathAttribute_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPathAttribute_t qt_meta_stringdata_QQuickPathAttribute = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickPathAttribute"
QT_MOC_LITERAL(1, 20, 11), // "nameChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "valueChanged"
QT_MOC_LITERAL(4, 46, 4), // "name"
QT_MOC_LITERAL(5, 51, 5) // "value"

    },
    "QQuickPathAttribute\0nameChanged\0\0"
    "valueChanged\0name\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPathAttribute[] = {

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
       4, QMetaType::QString, 0x00495103,
       5, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QQuickPathAttribute::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPathAttribute *_t = static_cast<QQuickPathAttribute *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPathAttribute::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathAttribute::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPathAttribute::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathAttribute::valueChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPathAttribute *_t = static_cast<QQuickPathAttribute *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPathAttribute *_t = static_cast<QQuickPathAttribute *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setValue(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickPathAttribute::staticMetaObject = {
    { &QQuickPathElement::staticMetaObject, qt_meta_stringdata_QQuickPathAttribute.data,
      qt_meta_data_QQuickPathAttribute,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPathAttribute::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPathAttribute::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPathAttribute.stringdata0))
        return static_cast<void*>(this);
    return QQuickPathElement::qt_metacast(_clname);
}

int QQuickPathAttribute::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPathElement::qt_metacall(_c, _id, _a);
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
void QQuickPathAttribute::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPathAttribute::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QQuickCurve_t {
    QByteArrayData data[10];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickCurve_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickCurve_t qt_meta_stringdata_QQuickCurve = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QQuickCurve"
QT_MOC_LITERAL(1, 12, 8), // "xChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "yChanged"
QT_MOC_LITERAL(4, 31, 16), // "relativeXChanged"
QT_MOC_LITERAL(5, 48, 16), // "relativeYChanged"
QT_MOC_LITERAL(6, 65, 1), // "x"
QT_MOC_LITERAL(7, 67, 1), // "y"
QT_MOC_LITERAL(8, 69, 9), // "relativeX"
QT_MOC_LITERAL(9, 79, 9) // "relativeY"

    },
    "QQuickCurve\0xChanged\0\0yChanged\0"
    "relativeXChanged\0relativeYChanged\0x\0"
    "y\0relativeX\0relativeY"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickCurve[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QReal, 0x00495103,
       7, QMetaType::QReal, 0x00495103,
       8, QMetaType::QReal, 0x00495103,
       9, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QQuickCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickCurve *_t = static_cast<QQuickCurve *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xChanged(); break;
        case 1: _t->yChanged(); break;
        case 2: _t->relativeXChanged(); break;
        case 3: _t->relativeYChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickCurve::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCurve::xChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickCurve::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCurve::yChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickCurve::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCurve::relativeXChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickCurve::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickCurve::relativeYChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickCurve *_t = static_cast<QQuickCurve *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->relativeX(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->relativeY(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickCurve *_t = static_cast<QQuickCurve *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setY(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setRelativeX(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setRelativeY(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickCurve::staticMetaObject = {
    { &QQuickPathElement::staticMetaObject, qt_meta_stringdata_QQuickCurve.data,
      qt_meta_data_QQuickCurve,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickCurve.stringdata0))
        return static_cast<void*>(this);
    return QQuickPathElement::qt_metacast(_clname);
}

int QQuickCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPathElement::qt_metacall(_c, _id, _a);
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
void QQuickCurve::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickCurve::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickCurve::relativeXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickCurve::relativeYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_QQuickPathLine_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPathLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPathLine_t qt_meta_stringdata_QQuickPathLine = {
    {
QT_MOC_LITERAL(0, 0, 14) // "QQuickPathLine"

    },
    "QQuickPathLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPathLine[] = {

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

void QQuickPathLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickPathLine::staticMetaObject = {
    { &QQuickCurve::staticMetaObject, qt_meta_stringdata_QQuickPathLine.data,
      qt_meta_data_QQuickPathLine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPathLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPathLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPathLine.stringdata0))
        return static_cast<void*>(this);
    return QQuickCurve::qt_metacast(_clname);
}

int QQuickPathLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickCurve::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickPathQuad_t {
    QByteArrayData data[10];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPathQuad_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPathQuad_t qt_meta_stringdata_QQuickPathQuad = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickPathQuad"
QT_MOC_LITERAL(1, 15, 15), // "controlXChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "controlYChanged"
QT_MOC_LITERAL(4, 48, 23), // "relativeControlXChanged"
QT_MOC_LITERAL(5, 72, 23), // "relativeControlYChanged"
QT_MOC_LITERAL(6, 96, 8), // "controlX"
QT_MOC_LITERAL(7, 105, 8), // "controlY"
QT_MOC_LITERAL(8, 114, 16), // "relativeControlX"
QT_MOC_LITERAL(9, 131, 16) // "relativeControlY"

    },
    "QQuickPathQuad\0controlXChanged\0\0"
    "controlYChanged\0relativeControlXChanged\0"
    "relativeControlYChanged\0controlX\0"
    "controlY\0relativeControlX\0relativeControlY"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPathQuad[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QReal, 0x00495103,
       7, QMetaType::QReal, 0x00495103,
       8, QMetaType::QReal, 0x00495103,
       9, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QQuickPathQuad::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPathQuad *_t = static_cast<QQuickPathQuad *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->controlXChanged(); break;
        case 1: _t->controlYChanged(); break;
        case 2: _t->relativeControlXChanged(); break;
        case 3: _t->relativeControlYChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPathQuad::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathQuad::controlXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPathQuad::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathQuad::controlYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPathQuad::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathQuad::relativeControlXChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickPathQuad::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathQuad::relativeControlYChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPathQuad *_t = static_cast<QQuickPathQuad *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->controlX(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->controlY(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->relativeControlX(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->relativeControlY(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPathQuad *_t = static_cast<QQuickPathQuad *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setControlX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setControlY(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setRelativeControlX(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setRelativeControlY(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickPathQuad::staticMetaObject = {
    { &QQuickCurve::staticMetaObject, qt_meta_stringdata_QQuickPathQuad.data,
      qt_meta_data_QQuickPathQuad,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPathQuad::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPathQuad::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPathQuad.stringdata0))
        return static_cast<void*>(this);
    return QQuickCurve::qt_metacast(_clname);
}

int QQuickPathQuad::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickCurve::qt_metacall(_c, _id, _a);
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
void QQuickPathQuad::controlXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPathQuad::controlYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPathQuad::relativeControlXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickPathQuad::relativeControlYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_QQuickPathCubic_t {
    QByteArrayData data[18];
    char stringdata0[297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPathCubic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPathCubic_t qt_meta_stringdata_QQuickPathCubic = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickPathCubic"
QT_MOC_LITERAL(1, 16, 16), // "control1XChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "control1YChanged"
QT_MOC_LITERAL(4, 51, 16), // "control2XChanged"
QT_MOC_LITERAL(5, 68, 16), // "control2YChanged"
QT_MOC_LITERAL(6, 85, 24), // "relativeControl1XChanged"
QT_MOC_LITERAL(7, 110, 24), // "relativeControl1YChanged"
QT_MOC_LITERAL(8, 135, 24), // "relativeControl2XChanged"
QT_MOC_LITERAL(9, 160, 24), // "relativeControl2YChanged"
QT_MOC_LITERAL(10, 185, 9), // "control1X"
QT_MOC_LITERAL(11, 195, 9), // "control1Y"
QT_MOC_LITERAL(12, 205, 9), // "control2X"
QT_MOC_LITERAL(13, 215, 9), // "control2Y"
QT_MOC_LITERAL(14, 225, 17), // "relativeControl1X"
QT_MOC_LITERAL(15, 243, 17), // "relativeControl1Y"
QT_MOC_LITERAL(16, 261, 17), // "relativeControl2X"
QT_MOC_LITERAL(17, 279, 17) // "relativeControl2Y"

    },
    "QQuickPathCubic\0control1XChanged\0\0"
    "control1YChanged\0control2XChanged\0"
    "control2YChanged\0relativeControl1XChanged\0"
    "relativeControl1YChanged\0"
    "relativeControl2XChanged\0"
    "relativeControl2YChanged\0control1X\0"
    "control1Y\0control2X\0control2Y\0"
    "relativeControl1X\0relativeControl1Y\0"
    "relativeControl2X\0relativeControl2Y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPathCubic[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,
       9,    0,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QReal, 0x00495103,
      11, QMetaType::QReal, 0x00495103,
      12, QMetaType::QReal, 0x00495103,
      13, QMetaType::QReal, 0x00495103,
      14, QMetaType::QReal, 0x00495103,
      15, QMetaType::QReal, 0x00495103,
      16, QMetaType::QReal, 0x00495103,
      17, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

void QQuickPathCubic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPathCubic *_t = static_cast<QQuickPathCubic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->control1XChanged(); break;
        case 1: _t->control1YChanged(); break;
        case 2: _t->control2XChanged(); break;
        case 3: _t->control2YChanged(); break;
        case 4: _t->relativeControl1XChanged(); break;
        case 5: _t->relativeControl1YChanged(); break;
        case 6: _t->relativeControl2XChanged(); break;
        case 7: _t->relativeControl2YChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPathCubic::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathCubic::control1XChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPathCubic::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathCubic::control1YChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPathCubic::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathCubic::control2XChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickPathCubic::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathCubic::control2YChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickPathCubic::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathCubic::relativeControl1XChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickPathCubic::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathCubic::relativeControl1YChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickPathCubic::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathCubic::relativeControl2XChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickPathCubic::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathCubic::relativeControl2YChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPathCubic *_t = static_cast<QQuickPathCubic *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->control1X(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->control1Y(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->control2X(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->control2Y(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->relativeControl1X(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->relativeControl1Y(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->relativeControl2X(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->relativeControl2Y(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPathCubic *_t = static_cast<QQuickPathCubic *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setControl1X(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setControl1Y(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setControl2X(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setControl2Y(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setRelativeControl1X(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setRelativeControl1Y(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setRelativeControl2X(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setRelativeControl2Y(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickPathCubic::staticMetaObject = {
    { &QQuickCurve::staticMetaObject, qt_meta_stringdata_QQuickPathCubic.data,
      qt_meta_data_QQuickPathCubic,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPathCubic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPathCubic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPathCubic.stringdata0))
        return static_cast<void*>(this);
    return QQuickCurve::qt_metacast(_clname);
}

int QQuickPathCubic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickCurve::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void QQuickPathCubic::control1XChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPathCubic::control1YChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPathCubic::control2XChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickPathCubic::control2YChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickPathCubic::relativeControl1XChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickPathCubic::relativeControl1YChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickPathCubic::relativeControl2XChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickPathCubic::relativeControl2YChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
struct qt_meta_stringdata_QQuickPathCatmullRomCurve_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPathCatmullRomCurve_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPathCatmullRomCurve_t qt_meta_stringdata_QQuickPathCatmullRomCurve = {
    {
QT_MOC_LITERAL(0, 0, 25) // "QQuickPathCatmullRomCurve"

    },
    "QQuickPathCatmullRomCurve"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPathCatmullRomCurve[] = {

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

void QQuickPathCatmullRomCurve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickPathCatmullRomCurve::staticMetaObject = {
    { &QQuickCurve::staticMetaObject, qt_meta_stringdata_QQuickPathCatmullRomCurve.data,
      qt_meta_data_QQuickPathCatmullRomCurve,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPathCatmullRomCurve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPathCatmullRomCurve::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPathCatmullRomCurve.stringdata0))
        return static_cast<void*>(this);
    return QQuickCurve::qt_metacast(_clname);
}

int QQuickPathCatmullRomCurve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickCurve::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QQuickPathArc_t {
    QByteArrayData data[13];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPathArc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPathArc_t qt_meta_stringdata_QQuickPathArc = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QQuickPathArc"
QT_MOC_LITERAL(1, 14, 14), // "radiusXChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "radiusYChanged"
QT_MOC_LITERAL(4, 45, 18), // "useLargeArcChanged"
QT_MOC_LITERAL(5, 64, 16), // "directionChanged"
QT_MOC_LITERAL(6, 81, 7), // "radiusX"
QT_MOC_LITERAL(7, 89, 7), // "radiusY"
QT_MOC_LITERAL(8, 97, 11), // "useLargeArc"
QT_MOC_LITERAL(9, 109, 9), // "direction"
QT_MOC_LITERAL(10, 119, 12), // "ArcDirection"
QT_MOC_LITERAL(11, 132, 9), // "Clockwise"
QT_MOC_LITERAL(12, 142, 16) // "Counterclockwise"

    },
    "QQuickPathArc\0radiusXChanged\0\0"
    "radiusYChanged\0useLargeArcChanged\0"
    "directionChanged\0radiusX\0radiusY\0"
    "useLargeArc\0direction\0ArcDirection\0"
    "Clockwise\0Counterclockwise"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPathArc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       1,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QReal, 0x00495103,
       7, QMetaType::QReal, 0x00495103,
       8, QMetaType::Bool, 0x00495103,
       9, 0x80000000 | 10, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

 // enums: name, flags, count, data
      10, 0x0,    2,   58,

 // enum data: key, value
      11, uint(QQuickPathArc::Clockwise),
      12, uint(QQuickPathArc::Counterclockwise),

       0        // eod
};

void QQuickPathArc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPathArc *_t = static_cast<QQuickPathArc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->radiusXChanged(); break;
        case 1: _t->radiusYChanged(); break;
        case 2: _t->useLargeArcChanged(); break;
        case 3: _t->directionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPathArc::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathArc::radiusXChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPathArc::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathArc::radiusYChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPathArc::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathArc::useLargeArcChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickPathArc::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathArc::directionChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPathArc *_t = static_cast<QQuickPathArc *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->radiusX(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->radiusY(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->useLargeArc(); break;
        case 3: *reinterpret_cast< ArcDirection*>(_v) = _t->direction(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPathArc *_t = static_cast<QQuickPathArc *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRadiusX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setRadiusY(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setUseLargeArc(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setDirection(*reinterpret_cast< ArcDirection*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickPathArc::staticMetaObject = {
    { &QQuickCurve::staticMetaObject, qt_meta_stringdata_QQuickPathArc.data,
      qt_meta_data_QQuickPathArc,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPathArc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPathArc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPathArc.stringdata0))
        return static_cast<void*>(this);
    return QQuickCurve::qt_metacast(_clname);
}

int QQuickPathArc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickCurve::qt_metacall(_c, _id, _a);
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
void QQuickPathArc::radiusXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPathArc::radiusYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPathArc::useLargeArcChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickPathArc::directionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_QQuickPathSvg_t {
    QByteArrayData data[4];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPathSvg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPathSvg_t qt_meta_stringdata_QQuickPathSvg = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QQuickPathSvg"
QT_MOC_LITERAL(1, 14, 11), // "pathChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4) // "path"

    },
    "QQuickPathSvg\0pathChanged\0\0path"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPathSvg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QQuickPathSvg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPathSvg *_t = static_cast<QQuickPathSvg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pathChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPathSvg::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathSvg::pathChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPathSvg *_t = static_cast<QQuickPathSvg *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->path(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPathSvg *_t = static_cast<QQuickPathSvg *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickPathSvg::staticMetaObject = {
    { &QQuickCurve::staticMetaObject, qt_meta_stringdata_QQuickPathSvg.data,
      qt_meta_data_QQuickPathSvg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPathSvg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPathSvg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPathSvg.stringdata0))
        return static_cast<void*>(this);
    return QQuickCurve::qt_metacast(_clname);
}

int QQuickPathSvg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickCurve::qt_metacall(_c, _id, _a);
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
void QQuickPathSvg::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QQuickPathPercent_t {
    QByteArrayData data[4];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPathPercent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPathPercent_t qt_meta_stringdata_QQuickPathPercent = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQuickPathPercent"
QT_MOC_LITERAL(1, 18, 12), // "valueChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5) // "value"

    },
    "QQuickPathPercent\0valueChanged\0\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPathPercent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QQuickPathPercent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPathPercent *_t = static_cast<QQuickPathPercent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPathPercent::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPathPercent::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPathPercent *_t = static_cast<QQuickPathPercent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->value(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPathPercent *_t = static_cast<QQuickPathPercent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickPathPercent::staticMetaObject = {
    { &QQuickPathElement::staticMetaObject, qt_meta_stringdata_QQuickPathPercent.data,
      qt_meta_data_QQuickPathPercent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPathPercent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPathPercent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPathPercent.stringdata0))
        return static_cast<void*>(this);
    return QQuickPathElement::qt_metacast(_clname);
}

int QQuickPathPercent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPathElement::qt_metacall(_c, _id, _a);
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
void QQuickPathPercent::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QQuickPath_t {
    QByteArrayData data[12];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPath_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPath_t qt_meta_stringdata_QQuickPath = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QQuickPath"
QT_MOC_LITERAL(1, 11, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 27, 12), // "pathElements"
QT_MOC_LITERAL(3, 40, 7), // "changed"
QT_MOC_LITERAL(4, 48, 0), // ""
QT_MOC_LITERAL(5, 49, 13), // "startXChanged"
QT_MOC_LITERAL(6, 63, 13), // "startYChanged"
QT_MOC_LITERAL(7, 77, 11), // "processPath"
QT_MOC_LITERAL(8, 89, 35), // "QQmlListProperty<QQuickPathEl..."
QT_MOC_LITERAL(9, 125, 6), // "startX"
QT_MOC_LITERAL(10, 132, 6), // "startY"
QT_MOC_LITERAL(11, 139, 6) // "closed"

    },
    "QQuickPath\0DefaultProperty\0pathElements\0"
    "changed\0\0startXChanged\0startYChanged\0"
    "processPath\0QQmlListProperty<QQuickPathElement>\0"
    "startX\0startY\0closed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPath[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       4,   16, // methods
       4,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   36,    4, 0x06 /* Public */,
       5,    0,   37,    4, 0x06 /* Public */,
       6,    0,   38,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   39,    4, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       2, 0x80000000 | 8, 0x00095009,
       9, QMetaType::QReal, 0x00495103,
      10, QMetaType::QReal, 0x00495103,
      11, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,

       0        // eod
};

void QQuickPath::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPath *_t = static_cast<QQuickPath *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: _t->startXChanged(); break;
        case 2: _t->startYChanged(); break;
        case 3: _t->processPath(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPath::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPath::changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPath::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPath::startXChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPath::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPath::startYChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQmlListProperty<QQuickPathElement> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPath *_t = static_cast<QQuickPath *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QQuickPathElement>*>(_v) = _t->pathElements(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->startX(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->startY(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isClosed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPath *_t = static_cast<QQuickPath *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setStartX(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setStartY(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickPath::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickPath.data,
      qt_meta_data_QQuickPath,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPath::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPath::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPath.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickPath::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QQuickPath::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPath::startXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPath::startYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
