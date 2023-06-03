/****************************************************************************
** Meta object code from reading C++ file 'qxylegendmarker_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtCharts/private/qxylegendmarker_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qxylegendmarker_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtCharts__QXYLegendMarkerPrivate_t {
    QByteArrayData data[3];
    char stringdata0[42];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtCharts__QXYLegendMarkerPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtCharts__QXYLegendMarkerPrivate_t qt_meta_stringdata_QtCharts__QXYLegendMarkerPrivate = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QtCharts::QXYLegendMarkerPrivate"
QT_MOC_LITERAL(1, 33, 7), // "updated"
QT_MOC_LITERAL(2, 41, 0) // ""

    },
    "QtCharts::QXYLegendMarkerPrivate\0"
    "updated\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtCharts__QXYLegendMarkerPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QtCharts::QXYLegendMarkerPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXYLegendMarkerPrivate *_t = static_cast<QXYLegendMarkerPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updated(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QtCharts::QXYLegendMarkerPrivate::staticMetaObject = {
    { &QLegendMarkerPrivate::staticMetaObject, qt_meta_stringdata_QtCharts__QXYLegendMarkerPrivate.data,
      qt_meta_data_QtCharts__QXYLegendMarkerPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtCharts::QXYLegendMarkerPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCharts::QXYLegendMarkerPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtCharts__QXYLegendMarkerPrivate.stringdata0))
        return static_cast<void*>(this);
    return QLegendMarkerPrivate::qt_metacast(_clname);
}

int QtCharts::QXYLegendMarkerPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLegendMarkerPrivate::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
