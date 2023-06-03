/****************************************************************************
** Meta object code from reading C++ file 'qquickpaddedrectangle_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickControls2/private/qquickpaddedrectangle_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickpaddedrectangle_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPaddedRectangle_t {
    QByteArrayData data[12];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPaddedRectangle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPaddedRectangle_t qt_meta_stringdata_QQuickPaddedRectangle = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QQuickPaddedRectangle"
QT_MOC_LITERAL(1, 22, 14), // "paddingChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 17), // "topPaddingChanged"
QT_MOC_LITERAL(4, 56, 18), // "leftPaddingChanged"
QT_MOC_LITERAL(5, 75, 19), // "rightPaddingChanged"
QT_MOC_LITERAL(6, 95, 20), // "bottomPaddingChanged"
QT_MOC_LITERAL(7, 116, 7), // "padding"
QT_MOC_LITERAL(8, 124, 10), // "topPadding"
QT_MOC_LITERAL(9, 135, 11), // "leftPadding"
QT_MOC_LITERAL(10, 147, 12), // "rightPadding"
QT_MOC_LITERAL(11, 160, 13) // "bottomPadding"

    },
    "QQuickPaddedRectangle\0paddingChanged\0"
    "\0topPaddingChanged\0leftPaddingChanged\0"
    "rightPaddingChanged\0bottomPaddingChanged\0"
    "padding\0topPadding\0leftPadding\0"
    "rightPadding\0bottomPadding"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPaddedRectangle[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QReal, 0x00495907,
       8, QMetaType::QReal, 0x00495907,
       9, QMetaType::QReal, 0x00495907,
      10, QMetaType::QReal, 0x00495907,
      11, QMetaType::QReal, 0x00495907,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void QQuickPaddedRectangle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPaddedRectangle *_t = static_cast<QQuickPaddedRectangle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paddingChanged(); break;
        case 1: _t->topPaddingChanged(); break;
        case 2: _t->leftPaddingChanged(); break;
        case 3: _t->rightPaddingChanged(); break;
        case 4: _t->bottomPaddingChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickPaddedRectangle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPaddedRectangle::paddingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickPaddedRectangle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPaddedRectangle::topPaddingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickPaddedRectangle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPaddedRectangle::leftPaddingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickPaddedRectangle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPaddedRectangle::rightPaddingChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickPaddedRectangle::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickPaddedRectangle::bottomPaddingChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickPaddedRectangle *_t = static_cast<QQuickPaddedRectangle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->padding(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->topPadding(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->leftPadding(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->rightPadding(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->bottomPadding(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickPaddedRectangle *_t = static_cast<QQuickPaddedRectangle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPadding(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setTopPadding(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setLeftPadding(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setRightPadding(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setBottomPadding(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickPaddedRectangle *_t = static_cast<QQuickPaddedRectangle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetPadding(); break;
        case 1: _t->resetTopPadding(); break;
        case 2: _t->resetLeftPadding(); break;
        case 3: _t->resetRightPadding(); break;
        case 4: _t->resetBottomPadding(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickPaddedRectangle::staticMetaObject = {
    { &QQuickRectangle::staticMetaObject, qt_meta_stringdata_QQuickPaddedRectangle.data,
      qt_meta_data_QQuickPaddedRectangle,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickPaddedRectangle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPaddedRectangle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPaddedRectangle.stringdata0))
        return static_cast<void*>(this);
    return QQuickRectangle::qt_metacast(_clname);
}

int QQuickPaddedRectangle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickRectangle::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void QQuickPaddedRectangle::paddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickPaddedRectangle::topPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickPaddedRectangle::leftPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickPaddedRectangle::rightPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickPaddedRectangle::bottomPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
