/****************************************************************************
** Meta object code from reading C++ file 'qpieseries_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCharts/private/qpieseries_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpieseries_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QPieSeriesPrivate_t {
    QByteArrayData data[15];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QPieSeriesPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QPieSeriesPrivate_t qt_meta_stringdata_QtCharts__QPieSeriesPrivate = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QtCharts::QPieSeriesPrivate"
QT_MOC_LITERAL(1, 28, 21), // "calculatedDataChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 14), // "pieSizeChanged"
QT_MOC_LITERAL(4, 66, 20), // "pieStartAngleChanged"
QT_MOC_LITERAL(5, 87, 18), // "pieEndAngleChanged"
QT_MOC_LITERAL(6, 106, 25), // "horizontalPositionChanged"
QT_MOC_LITERAL(7, 132, 23), // "verticalPositionChanged"
QT_MOC_LITERAL(8, 156, 17), // "sliceValueChanged"
QT_MOC_LITERAL(9, 174, 12), // "sliceClicked"
QT_MOC_LITERAL(10, 187, 12), // "sliceHovered"
QT_MOC_LITERAL(11, 200, 5), // "state"
QT_MOC_LITERAL(12, 206, 12), // "slicePressed"
QT_MOC_LITERAL(13, 219, 13), // "sliceReleased"
QT_MOC_LITERAL(14, 233, 18) // "sliceDoubleClicked"

    },
    "QtCharts::QPieSeriesPrivate\0"
    "calculatedDataChanged\0\0pieSizeChanged\0"
    "pieStartAngleChanged\0pieEndAngleChanged\0"
    "horizontalPositionChanged\0"
    "verticalPositionChanged\0sliceValueChanged\0"
    "sliceClicked\0sliceHovered\0state\0"
    "slicePressed\0sliceReleased\0"
    "sliceDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QPieSeriesPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   80,    2, 0x0a /* Public */,
       9,    0,   81,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      12,    0,   85,    2, 0x0a /* Public */,
      13,    0,   86,    2, 0x0a /* Public */,
      14,    0,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtCharts::QPieSeriesPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPieSeriesPrivate *_t = static_cast<QPieSeriesPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->calculatedDataChanged(); break;
        case 1: _t->pieSizeChanged(); break;
        case 2: _t->pieStartAngleChanged(); break;
        case 3: _t->pieEndAngleChanged(); break;
        case 4: _t->horizontalPositionChanged(); break;
        case 5: _t->verticalPositionChanged(); break;
        case 6: _t->sliceValueChanged(); break;
        case 7: _t->sliceClicked(); break;
        case 8: _t->sliceHovered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->slicePressed(); break;
        case 10: _t->sliceReleased(); break;
        case 11: _t->sliceDoubleClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QPieSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPieSeriesPrivate::calculatedDataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QPieSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPieSeriesPrivate::pieSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QPieSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPieSeriesPrivate::pieStartAngleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QPieSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPieSeriesPrivate::pieEndAngleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QPieSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPieSeriesPrivate::horizontalPositionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QPieSeriesPrivate::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QPieSeriesPrivate::verticalPositionChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QtCharts::QPieSeriesPrivate::staticMetaObject = {
    { &QAbstractSeriesPrivate::staticMetaObject, qt_meta_stringdata_QtCharts__QPieSeriesPrivate.data,
      qt_meta_data_QtCharts__QPieSeriesPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QPieSeriesPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QPieSeriesPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QPieSeriesPrivate.stringdata0))
        return static_cast<void*>(this);
    return QAbstractSeriesPrivate::qt_metacast(_clname);
}

int QtCharts::QPieSeriesPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSeriesPrivate::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QtCharts::QPieSeriesPrivate::calculatedDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QtCharts::QPieSeriesPrivate::pieSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtCharts::QPieSeriesPrivate::pieStartAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QtCharts::QPieSeriesPrivate::pieEndAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QtCharts::QPieSeriesPrivate::horizontalPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtCharts::QPieSeriesPrivate::verticalPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
