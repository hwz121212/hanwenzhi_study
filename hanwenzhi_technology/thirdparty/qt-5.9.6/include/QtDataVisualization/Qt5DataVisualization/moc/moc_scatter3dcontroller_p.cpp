/****************************************************************************
** Meta object code from reading C++ file 'scatter3dcontroller_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDataVisualization/private/scatter3dcontroller_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scatter3dcontroller_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__Scatter3DController_t {
    QByteArrayData data[12];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__Scatter3DController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__Scatter3DController_t qt_meta_stringdata_QtDataVisualization__Scatter3DController = {
    {
QT_MOC_LITERAL(0, 0, 40), // "QtDataVisualization::Scatter3..."
QT_MOC_LITERAL(1, 41, 21), // "selectedSeriesChanged"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 17), // "QScatter3DSeries*"
QT_MOC_LITERAL(4, 82, 6), // "series"
QT_MOC_LITERAL(5, 89, 16), // "handleArrayReset"
QT_MOC_LITERAL(6, 106, 16), // "handleItemsAdded"
QT_MOC_LITERAL(7, 123, 10), // "startIndex"
QT_MOC_LITERAL(8, 134, 5), // "count"
QT_MOC_LITERAL(9, 140, 18), // "handleItemsChanged"
QT_MOC_LITERAL(10, 159, 18), // "handleItemsRemoved"
QT_MOC_LITERAL(11, 178, 19) // "handleItemsInserted"

    },
    "QtDataVisualization::Scatter3DController\0"
    "selectedSeriesChanged\0\0QScatter3DSeries*\0"
    "series\0handleArrayReset\0handleItemsAdded\0"
    "startIndex\0count\0handleItemsChanged\0"
    "handleItemsRemoved\0handleItemsInserted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__Scatter3DController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x0a /* Public */,
       6,    2,   48,    2, 0x0a /* Public */,
       9,    2,   53,    2, 0x0a /* Public */,
      10,    2,   58,    2, 0x0a /* Public */,
      11,    2,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,

       0        // eod
};

void QtDataVisualization::Scatter3DController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scatter3DController *_t = static_cast<Scatter3DController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedSeriesChanged((*reinterpret_cast< QScatter3DSeries*(*)>(_a[1]))); break;
        case 1: _t->handleArrayReset(); break;
        case 2: _t->handleItemsAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->handleItemsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->handleItemsRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->handleItemsInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (Scatter3DController::*_t)(QScatter3DSeries * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scatter3DController::selectedSeriesChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QtDataVisualization::Scatter3DController::staticMetaObject = {
    { &Abstract3DController::staticMetaObject, qt_meta_stringdata_QtDataVisualization__Scatter3DController.data,
      qt_meta_data_QtDataVisualization__Scatter3DController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::Scatter3DController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::Scatter3DController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__Scatter3DController.stringdata0))
        return static_cast<void*>(this);
    return Abstract3DController::qt_metacast(_clname);
}

int QtDataVisualization::Scatter3DController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Abstract3DController::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QtDataVisualization::Scatter3DController::selectedSeriesChanged(QScatter3DSeries * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
