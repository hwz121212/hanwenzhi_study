/****************************************************************************
** Meta object code from reading C++ file 'qquickflickable_p_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickflickable_p_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickflickable_p_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickFlickableVisibleArea_t {
    QByteArrayData data[10];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickFlickableVisibleArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickFlickableVisibleArea_t qt_meta_stringdata_QQuickFlickableVisibleArea = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QQuickFlickableVisibleArea"
QT_MOC_LITERAL(1, 27, 16), // "xPositionChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 9), // "xPosition"
QT_MOC_LITERAL(4, 55, 16), // "yPositionChanged"
QT_MOC_LITERAL(5, 72, 9), // "yPosition"
QT_MOC_LITERAL(6, 82, 17), // "widthRatioChanged"
QT_MOC_LITERAL(7, 100, 10), // "widthRatio"
QT_MOC_LITERAL(8, 111, 18), // "heightRatioChanged"
QT_MOC_LITERAL(9, 130, 11) // "heightRatio"

    },
    "QQuickFlickableVisibleArea\0xPositionChanged\0"
    "\0xPosition\0yPositionChanged\0yPosition\0"
    "widthRatioChanged\0widthRatio\0"
    "heightRatioChanged\0heightRatio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickFlickableVisibleArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       8,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal,    9,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00495001,
       5, QMetaType::QReal, 0x00495001,
       7, QMetaType::QReal, 0x00495001,
       9, QMetaType::QReal, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QQuickFlickableVisibleArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickFlickableVisibleArea *_t = static_cast<QQuickFlickableVisibleArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xPositionChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->yPositionChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->widthRatioChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->heightRatioChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickFlickableVisibleArea::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickableVisibleArea::xPositionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickFlickableVisibleArea::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickableVisibleArea::yPositionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickFlickableVisibleArea::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickableVisibleArea::widthRatioChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickFlickableVisibleArea::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFlickableVisibleArea::heightRatioChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickFlickableVisibleArea *_t = static_cast<QQuickFlickableVisibleArea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->xPosition(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->yPosition(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->widthRatio(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->heightRatio(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickFlickableVisibleArea::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickFlickableVisibleArea.data,
      qt_meta_data_QQuickFlickableVisibleArea,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickFlickableVisibleArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickFlickableVisibleArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickFlickableVisibleArea.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickFlickableVisibleArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QQuickFlickableVisibleArea::xPositionChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QQuickFlickableVisibleArea::yPositionChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QQuickFlickableVisibleArea::widthRatioChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QQuickFlickableVisibleArea::heightRatioChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
