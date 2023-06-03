/****************************************************************************
** Meta object code from reading C++ file 'piesliceitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCharts/private/piesliceitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'piesliceitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__PieSliceItem_t {
    QByteArrayData data[10];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__PieSliceItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__PieSliceItem_t qt_meta_stringdata_QtCharts__PieSliceItem = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QtCharts::PieSliceItem"
QT_MOC_LITERAL(1, 23, 7), // "clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(4, 49, 7), // "buttons"
QT_MOC_LITERAL(5, 57, 7), // "hovered"
QT_MOC_LITERAL(6, 65, 5), // "state"
QT_MOC_LITERAL(7, 71, 7), // "pressed"
QT_MOC_LITERAL(8, 79, 8), // "released"
QT_MOC_LITERAL(9, 88, 13) // "doubleClicked"

    },
    "QtCharts::PieSliceItem\0clicked\0\0"
    "Qt::MouseButtons\0buttons\0hovered\0state\0"
    "pressed\0released\0doubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__PieSliceItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       7,    1,   45,    2, 0x06 /* Public */,
       8,    1,   48,    2, 0x06 /* Public */,
       9,    1,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QtCharts::PieSliceItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PieSliceItem *_t = static_cast<PieSliceItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1]))); break;
        case 1: _t->hovered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->pressed((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1]))); break;
        case 3: _t->released((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1]))); break;
        case 4: _t->doubleClicked((*reinterpret_cast< Qt::MouseButtons(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PieSliceItem::*_t)(Qt::MouseButtons );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PieSliceItem::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PieSliceItem::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PieSliceItem::hovered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PieSliceItem::*_t)(Qt::MouseButtons );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PieSliceItem::pressed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PieSliceItem::*_t)(Qt::MouseButtons );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PieSliceItem::released)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PieSliceItem::*_t)(Qt::MouseButtons );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PieSliceItem::doubleClicked)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QtCharts::PieSliceItem::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_QtCharts__PieSliceItem.data,
      qt_meta_data_QtCharts__PieSliceItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::PieSliceItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::PieSliceItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__PieSliceItem.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsObject::qt_metacast(_clname);
}

int QtCharts::PieSliceItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QtCharts::PieSliceItem::clicked(Qt::MouseButtons _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtCharts::PieSliceItem::hovered(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtCharts::PieSliceItem::pressed(Qt::MouseButtons _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtCharts::PieSliceItem::released(Qt::MouseButtons _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtCharts::PieSliceItem::doubleClicked(Qt::MouseButtons _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
