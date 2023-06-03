/****************************************************************************
** Meta object code from reading C++ file 'qdesigner_stackedbox_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDesigner/private/qdesigner_stackedbox_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesigner_stackedbox_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QStackedWidgetPreviewEventFilter_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QStackedWidgetPreviewEventFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QStackedWidgetPreviewEventFilter_t qt_meta_stringdata_QStackedWidgetPreviewEventFilter = {
    {
QT_MOC_LITERAL(0, 0, 32), // "QStackedWidgetPreviewEventFilter"
QT_MOC_LITERAL(1, 33, 13), // "updateButtons"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 8), // "prevPage"
QT_MOC_LITERAL(4, 57, 8) // "nextPage"

    },
    "QStackedWidgetPreviewEventFilter\0"
    "updateButtons\0\0prevPage\0nextPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QStackedWidgetPreviewEventFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QStackedWidgetPreviewEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QStackedWidgetPreviewEventFilter *_t = static_cast<QStackedWidgetPreviewEventFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateButtons(); break;
        case 1: _t->prevPage(); break;
        case 2: _t->nextPage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QStackedWidgetPreviewEventFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QStackedWidgetPreviewEventFilter.data,
      qt_meta_data_QStackedWidgetPreviewEventFilter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QStackedWidgetPreviewEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QStackedWidgetPreviewEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QStackedWidgetPreviewEventFilter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QStackedWidgetPreviewEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_QStackedWidgetEventFilter_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QStackedWidgetEventFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QStackedWidgetEventFilter_t qt_meta_stringdata_QStackedWidgetEventFilter = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QStackedWidgetEventFilter"
QT_MOC_LITERAL(1, 26, 17), // "removeCurrentPage"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 7), // "addPage"
QT_MOC_LITERAL(4, 53, 12), // "addPageAfter"
QT_MOC_LITERAL(5, 66, 11) // "changeOrder"

    },
    "QStackedWidgetEventFilter\0removeCurrentPage\0"
    "\0addPage\0addPageAfter\0changeOrder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QStackedWidgetEventFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QStackedWidgetEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QStackedWidgetEventFilter *_t = static_cast<QStackedWidgetEventFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeCurrentPage(); break;
        case 1: _t->addPage(); break;
        case 2: _t->addPageAfter(); break;
        case 3: _t->changeOrder(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QStackedWidgetEventFilter::staticMetaObject = {
    { &QStackedWidgetPreviewEventFilter::staticMetaObject, qt_meta_stringdata_QStackedWidgetEventFilter.data,
      qt_meta_data_QStackedWidgetEventFilter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QStackedWidgetEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QStackedWidgetEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QStackedWidgetEventFilter.stringdata0))
        return static_cast<void*>(this);
    return QStackedWidgetPreviewEventFilter::qt_metacast(_clname);
}

int QStackedWidgetEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidgetPreviewEventFilter::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
