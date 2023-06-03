/****************************************************************************
** Meta object code from reading C++ file 'qxymodelmapper_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qabstractitemmodel.h"
#include "../../5.9.6/QtCharts/private/qxymodelmapper_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qxymodelmapper_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QXYModelMapperPrivate_t {
    QByteArrayData data[21];
    char stringdata0[309];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QXYModelMapperPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QXYModelMapperPrivate_t qt_meta_stringdata_QtCharts__QXYModelMapperPrivate = {
    {
QT_MOC_LITERAL(0, 0, 31), // "QtCharts::QXYModelMapperPrivate"
QT_MOC_LITERAL(1, 32, 12), // "modelUpdated"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 7), // "topLeft"
QT_MOC_LITERAL(4, 54, 11), // "bottomRight"
QT_MOC_LITERAL(5, 66, 14), // "modelRowsAdded"
QT_MOC_LITERAL(6, 81, 6), // "parent"
QT_MOC_LITERAL(7, 88, 5), // "start"
QT_MOC_LITERAL(8, 94, 3), // "end"
QT_MOC_LITERAL(9, 98, 16), // "modelRowsRemoved"
QT_MOC_LITERAL(10, 115, 17), // "modelColumnsAdded"
QT_MOC_LITERAL(11, 133, 19), // "modelColumnsRemoved"
QT_MOC_LITERAL(12, 153, 20), // "handleModelDestroyed"
QT_MOC_LITERAL(13, 174, 16), // "handlePointAdded"
QT_MOC_LITERAL(14, 191, 8), // "pointPos"
QT_MOC_LITERAL(15, 200, 18), // "handlePointRemoved"
QT_MOC_LITERAL(16, 219, 19), // "handlePointsRemoved"
QT_MOC_LITERAL(17, 239, 5), // "count"
QT_MOC_LITERAL(18, 245, 19), // "handlePointReplaced"
QT_MOC_LITERAL(19, 265, 21), // "handleSeriesDestroyed"
QT_MOC_LITERAL(20, 287, 21) // "initializeXYFromModel"

    },
    "QtCharts::QXYModelMapperPrivate\0"
    "modelUpdated\0\0topLeft\0bottomRight\0"
    "modelRowsAdded\0parent\0start\0end\0"
    "modelRowsRemoved\0modelColumnsAdded\0"
    "modelColumnsRemoved\0handleModelDestroyed\0"
    "handlePointAdded\0pointPos\0handlePointRemoved\0"
    "handlePointsRemoved\0count\0handlePointReplaced\0"
    "handleSeriesDestroyed\0initializeXYFromModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QXYModelMapperPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x0a /* Public */,
       5,    3,   79,    2, 0x0a /* Public */,
       9,    3,   86,    2, 0x0a /* Public */,
      10,    3,   93,    2, 0x0a /* Public */,
      11,    3,  100,    2, 0x0a /* Public */,
      12,    0,  107,    2, 0x0a /* Public */,
      13,    1,  108,    2, 0x0a /* Public */,
      15,    1,  111,    2, 0x0a /* Public */,
      16,    2,  114,    2, 0x0a /* Public */,
      18,    1,  119,    2, 0x0a /* Public */,
      19,    0,  122,    2, 0x0a /* Public */,
      20,    0,  123,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    3,    4,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   17,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QtCharts::QXYModelMapperPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXYModelMapperPrivate *_t = static_cast<QXYModelMapperPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelUpdated((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 1: _t->modelRowsAdded((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->modelRowsRemoved((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->modelColumnsAdded((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->modelColumnsRemoved((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->handleModelDestroyed(); break;
        case 6: _t->handlePointAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->handlePointRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->handlePointsRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->handlePointReplaced((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->handleSeriesDestroyed(); break;
        case 11: _t->initializeXYFromModel(); break;
        default: ;
        }
    }
}

const QMetaObject QtCharts::QXYModelMapperPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtCharts__QXYModelMapperPrivate.data,
      qt_meta_data_QtCharts__QXYModelMapperPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QXYModelMapperPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QXYModelMapperPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QXYModelMapperPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtCharts::QXYModelMapperPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
