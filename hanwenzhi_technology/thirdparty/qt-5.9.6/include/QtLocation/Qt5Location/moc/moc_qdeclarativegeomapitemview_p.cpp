/****************************************************************************
** Meta object code from reading C++ file 'qdeclarativegeomapitemview_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtLocation/private/qdeclarativegeomapitemview_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarativegeomapitemview_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeGeoMapItemView_t {
    QByteArrayData data[24];
    char stringdata0[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeGeoMapItemView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeGeoMapItemView_t qt_meta_stringdata_QDeclarativeGeoMapItemView = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QDeclarativeGeoMapItemView"
QT_MOC_LITERAL(1, 27, 12), // "modelChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 15), // "delegateChanged"
QT_MOC_LITERAL(4, 57, 22), // "autoFitViewportChanged"
QT_MOC_LITERAL(5, 80, 14), // "itemModelReset"
QT_MOC_LITERAL(6, 95, 21), // "itemModelRowsInserted"
QT_MOC_LITERAL(7, 117, 5), // "index"
QT_MOC_LITERAL(8, 123, 5), // "start"
QT_MOC_LITERAL(9, 129, 3), // "end"
QT_MOC_LITERAL(10, 133, 20), // "itemModelRowsRemoved"
QT_MOC_LITERAL(11, 154, 18), // "itemModelRowsMoved"
QT_MOC_LITERAL(12, 173, 6), // "parent"
QT_MOC_LITERAL(13, 180, 11), // "destination"
QT_MOC_LITERAL(14, 192, 3), // "row"
QT_MOC_LITERAL(15, 196, 20), // "itemModelDataChanged"
QT_MOC_LITERAL(16, 217, 7), // "topLeft"
QT_MOC_LITERAL(17, 225, 11), // "bottomRight"
QT_MOC_LITERAL(18, 237, 12), // "QVector<int>"
QT_MOC_LITERAL(19, 250, 5), // "roles"
QT_MOC_LITERAL(20, 256, 5), // "model"
QT_MOC_LITERAL(21, 262, 8), // "delegate"
QT_MOC_LITERAL(22, 271, 14), // "QQmlComponent*"
QT_MOC_LITERAL(23, 286, 15) // "autoFitViewport"

    },
    "QDeclarativeGeoMapItemView\0modelChanged\0"
    "\0delegateChanged\0autoFitViewportChanged\0"
    "itemModelReset\0itemModelRowsInserted\0"
    "index\0start\0end\0itemModelRowsRemoved\0"
    "itemModelRowsMoved\0parent\0destination\0"
    "row\0itemModelDataChanged\0topLeft\0"
    "bottomRight\0QVector<int>\0roles\0model\0"
    "delegate\0QQmlComponent*\0autoFitViewport"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeGeoMapItemView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x08 /* Private */,
       6,    3,   58,    2, 0x08 /* Private */,
      10,    3,   65,    2, 0x08 /* Private */,
      11,    5,   72,    2, 0x08 /* Private */,
      15,    3,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    7,    8,    9,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    7,    8,    9,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex, QMetaType::Int,   12,    8,    9,   13,   14,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex, 0x80000000 | 18,   16,   17,   19,

 // properties: name, type, flags
      20, QMetaType::QVariant, 0x00495103,
      21, 0x80000000 | 22, 0x0049510b,
      23, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void QDeclarativeGeoMapItemView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeGeoMapItemView *_t = static_cast<QDeclarativeGeoMapItemView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->delegateChanged(); break;
        case 2: _t->autoFitViewportChanged(); break;
        case 3: _t->itemModelReset(); break;
        case 4: _t->itemModelRowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->itemModelRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->itemModelRowsMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 7: _t->itemModelDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QDeclarativeGeoMapItemView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoMapItemView::modelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoMapItemView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoMapItemView::delegateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDeclarativeGeoMapItemView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QDeclarativeGeoMapItemView::autoFitViewportChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeGeoMapItemView *_t = static_cast<QDeclarativeGeoMapItemView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->model(); break;
        case 1: *reinterpret_cast< QQmlComponent**>(_v) = _t->delegate(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->autoFitViewport(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeGeoMapItemView *_t = static_cast<QDeclarativeGeoMapItemView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModel(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->setDelegate(*reinterpret_cast< QQmlComponent**>(_v)); break;
        case 2: _t->setAutoFitViewport(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeGeoMapItemView::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeGeoMapItemView.data,
      qt_meta_data_QDeclarativeGeoMapItemView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeGeoMapItemView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeGeoMapItemView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeGeoMapItemView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeGeoMapItemView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
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
void QDeclarativeGeoMapItemView::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QDeclarativeGeoMapItemView::delegateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QDeclarativeGeoMapItemView::autoFitViewportChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
