/****************************************************************************
** Meta object code from reading C++ file 'qabstract3dgraph_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDataVisualization/private/qabstract3dgraph_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstract3dgraph_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDataVisualization__QAbstract3DGraphPrivate_t {
    QByteArrayData data[9];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDataVisualization__QAbstract3DGraphPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDataVisualization__QAbstract3DGraphPrivate_t qt_meta_stringdata_QtDataVisualization__QAbstract3DGraphPrivate = {
    {
QT_MOC_LITERAL(0, 0, 44), // "QtDataVisualization::QAbstrac..."
QT_MOC_LITERAL(1, 45, 11), // "renderLater"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 9), // "renderNow"
QT_MOC_LITERAL(4, 68, 18), // "handleAxisXChanged"
QT_MOC_LITERAL(5, 87, 16), // "QAbstract3DAxis*"
QT_MOC_LITERAL(6, 104, 4), // "axis"
QT_MOC_LITERAL(7, 109, 18), // "handleAxisYChanged"
QT_MOC_LITERAL(8, 128, 18) // "handleAxisZChanged"

    },
    "QtDataVisualization::QAbstract3DGraphPrivate\0"
    "renderLater\0\0renderNow\0handleAxisXChanged\0"
    "QAbstract3DAxis*\0axis\0handleAxisYChanged\0"
    "handleAxisZChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDataVisualization__QAbstract3DGraphPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       7,    1,   44,    2, 0x0a /* Public */,
       8,    1,   47,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void QtDataVisualization::QAbstract3DGraphPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstract3DGraphPrivate *_t = static_cast<QAbstract3DGraphPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->renderLater(); break;
        case 1: _t->renderNow(); break;
        case 2: _t->handleAxisXChanged((*reinterpret_cast< QAbstract3DAxis*(*)>(_a[1]))); break;
        case 3: _t->handleAxisYChanged((*reinterpret_cast< QAbstract3DAxis*(*)>(_a[1]))); break;
        case 4: _t->handleAxisZChanged((*reinterpret_cast< QAbstract3DAxis*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtDataVisualization::QAbstract3DGraphPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtDataVisualization__QAbstract3DGraphPrivate.data,
      qt_meta_data_QtDataVisualization__QAbstract3DGraphPrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDataVisualization::QAbstract3DGraphPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDataVisualization::QAbstract3DGraphPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDataVisualization__QAbstract3DGraphPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtDataVisualization::QAbstract3DGraphPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
