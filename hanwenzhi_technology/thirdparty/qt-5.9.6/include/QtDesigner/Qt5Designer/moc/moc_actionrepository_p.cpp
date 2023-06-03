/****************************************************************************
** Meta object code from reading C++ file 'actionrepository_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDesigner/private/actionrepository_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actionrepository_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__ActionModel_t {
    QByteArrayData data[6];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__ActionModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__ActionModel_t qt_meta_stringdata_qdesigner_internal__ActionModel = {
    {
QT_MOC_LITERAL(0, 0, 31), // "qdesigner_internal::ActionModel"
QT_MOC_LITERAL(1, 32, 20), // "resourceImageDropped"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 4), // "path"
QT_MOC_LITERAL(4, 59, 8), // "QAction*"
QT_MOC_LITERAL(5, 68, 6) // "action"

    },
    "qdesigner_internal::ActionModel\0"
    "resourceImageDropped\0\0path\0QAction*\0"
    "action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__ActionModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

       0        // eod
};

void qdesigner_internal::ActionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActionModel *_t = static_cast<ActionModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resourceImageDropped((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ActionModel::*_t)(const QString & , QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionModel::resourceImageDropped)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::ActionModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ActionModel.data,
      qt_meta_data_qdesigner_internal__ActionModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::ActionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::ActionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ActionModel.stringdata0))
        return static_cast<void*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int qdesigner_internal::ActionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void qdesigner_internal::ActionModel::resourceImageDropped(const QString & _t1, QAction * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_qdesigner_internal__ActionTreeView_t {
    QByteArrayData data[15];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__ActionTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__ActionTreeView_t qt_meta_stringdata_qdesigner_internal__ActionTreeView = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qdesigner_internal::ActionTre..."
QT_MOC_LITERAL(1, 35, 26), // "actionContextMenuRequested"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 18), // "QContextMenuEvent*"
QT_MOC_LITERAL(4, 82, 5), // "event"
QT_MOC_LITERAL(5, 88, 8), // "QAction*"
QT_MOC_LITERAL(6, 97, 20), // "currentActionChanged"
QT_MOC_LITERAL(7, 118, 6), // "action"
QT_MOC_LITERAL(8, 125, 15), // "actionActivated"
QT_MOC_LITERAL(9, 141, 6), // "filter"
QT_MOC_LITERAL(10, 148, 4), // "text"
QT_MOC_LITERAL(11, 153, 14), // "currentChanged"
QT_MOC_LITERAL(12, 168, 7), // "current"
QT_MOC_LITERAL(13, 176, 8), // "previous"
QT_MOC_LITERAL(14, 185, 13) // "slotActivated"

    },
    "qdesigner_internal::ActionTreeView\0"
    "actionContextMenuRequested\0\0"
    "QContextMenuEvent*\0event\0QAction*\0"
    "currentActionChanged\0action\0actionActivated\0"
    "filter\0text\0currentChanged\0current\0"
    "previous\0slotActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__ActionTreeView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,
       8,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   55,    2, 0x0a /* Public */,
      11,    2,   58,    2, 0x09 /* Protected */,
      14,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    2,
    QMetaType::Void, 0x80000000 | 5,    7,
    QMetaType::Void, 0x80000000 | 5,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   12,   13,
    QMetaType::Void, QMetaType::QModelIndex,    2,

       0        // eod
};

void qdesigner_internal::ActionTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActionTreeView *_t = static_cast<ActionTreeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionContextMenuRequested((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 1: _t->currentActionChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->actionActivated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->slotActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ActionTreeView::*_t)(QContextMenuEvent * , QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionTreeView::actionContextMenuRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ActionTreeView::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionTreeView::currentActionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ActionTreeView::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionTreeView::actionActivated)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::ActionTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ActionTreeView.data,
      qt_meta_data_qdesigner_internal__ActionTreeView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::ActionTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::ActionTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ActionTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int qdesigner_internal::ActionTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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
void qdesigner_internal::ActionTreeView::actionContextMenuRequested(QContextMenuEvent * _t1, QAction * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qdesigner_internal::ActionTreeView::currentActionChanged(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qdesigner_internal::ActionTreeView::actionActivated(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_qdesigner_internal__ActionListView_t {
    QByteArrayData data[15];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__ActionListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__ActionListView_t qt_meta_stringdata_qdesigner_internal__ActionListView = {
    {
QT_MOC_LITERAL(0, 0, 34), // "qdesigner_internal::ActionLis..."
QT_MOC_LITERAL(1, 35, 26), // "actionContextMenuRequested"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 18), // "QContextMenuEvent*"
QT_MOC_LITERAL(4, 82, 5), // "event"
QT_MOC_LITERAL(5, 88, 8), // "QAction*"
QT_MOC_LITERAL(6, 97, 20), // "currentActionChanged"
QT_MOC_LITERAL(7, 118, 6), // "action"
QT_MOC_LITERAL(8, 125, 15), // "actionActivated"
QT_MOC_LITERAL(9, 141, 6), // "filter"
QT_MOC_LITERAL(10, 148, 4), // "text"
QT_MOC_LITERAL(11, 153, 14), // "currentChanged"
QT_MOC_LITERAL(12, 168, 7), // "current"
QT_MOC_LITERAL(13, 176, 8), // "previous"
QT_MOC_LITERAL(14, 185, 13) // "slotActivated"

    },
    "qdesigner_internal::ActionListView\0"
    "actionContextMenuRequested\0\0"
    "QContextMenuEvent*\0event\0QAction*\0"
    "currentActionChanged\0action\0actionActivated\0"
    "filter\0text\0currentChanged\0current\0"
    "previous\0slotActivated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__ActionListView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,
       8,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   55,    2, 0x0a /* Public */,
      11,    2,   58,    2, 0x09 /* Protected */,
      14,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    2,
    QMetaType::Void, 0x80000000 | 5,    7,
    QMetaType::Void, 0x80000000 | 5,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   12,   13,
    QMetaType::Void, QMetaType::QModelIndex,    2,

       0        // eod
};

void qdesigner_internal::ActionListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActionListView *_t = static_cast<ActionListView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionContextMenuRequested((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 1: _t->currentActionChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->actionActivated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->slotActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ActionListView::*_t)(QContextMenuEvent * , QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionListView::actionContextMenuRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ActionListView::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionListView::currentActionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ActionListView::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionListView::actionActivated)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::ActionListView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ActionListView.data,
      qt_meta_data_qdesigner_internal__ActionListView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::ActionListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::ActionListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ActionListView.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int qdesigner_internal::ActionListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
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
void qdesigner_internal::ActionListView::actionContextMenuRequested(QContextMenuEvent * _t1, QAction * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qdesigner_internal::ActionListView::currentActionChanged(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qdesigner_internal::ActionListView::actionActivated(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_qdesigner_internal__ActionView_t {
    QByteArrayData data[20];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__ActionView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__ActionView_t qt_meta_stringdata_qdesigner_internal__ActionView = {
    {
QT_MOC_LITERAL(0, 0, 30), // "qdesigner_internal::ActionView"
QT_MOC_LITERAL(1, 31, 20), // "contextMenuRequested"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 18), // "QContextMenuEvent*"
QT_MOC_LITERAL(4, 72, 5), // "event"
QT_MOC_LITERAL(5, 78, 8), // "QAction*"
QT_MOC_LITERAL(6, 87, 14), // "currentChanged"
QT_MOC_LITERAL(7, 102, 6), // "action"
QT_MOC_LITERAL(8, 109, 9), // "activated"
QT_MOC_LITERAL(9, 119, 16), // "selectionChanged"
QT_MOC_LITERAL(10, 136, 14), // "QItemSelection"
QT_MOC_LITERAL(11, 151, 8), // "selected"
QT_MOC_LITERAL(12, 160, 10), // "deselected"
QT_MOC_LITERAL(13, 171, 20), // "resourceImageDropped"
QT_MOC_LITERAL(14, 192, 4), // "data"
QT_MOC_LITERAL(15, 197, 6), // "filter"
QT_MOC_LITERAL(16, 204, 4), // "text"
QT_MOC_LITERAL(17, 209, 9), // "selectAll"
QT_MOC_LITERAL(18, 219, 14), // "clearSelection"
QT_MOC_LITERAL(19, 234, 18) // "slotCurrentChanged"

    },
    "qdesigner_internal::ActionView\0"
    "contextMenuRequested\0\0QContextMenuEvent*\0"
    "event\0QAction*\0currentChanged\0action\0"
    "activated\0selectionChanged\0QItemSelection\0"
    "selected\0deselected\0resourceImageDropped\0"
    "data\0filter\0text\0selectAll\0clearSelection\0"
    "slotCurrentChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__ActionView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       6,    1,   64,    2, 0x06 /* Public */,
       8,    1,   67,    2, 0x06 /* Public */,
       9,    2,   70,    2, 0x06 /* Public */,
      13,    2,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,   80,    2, 0x0a /* Public */,
      17,    0,   83,    2, 0x0a /* Public */,
      18,    0,   84,    2, 0x0a /* Public */,
      19,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    2,
    QMetaType::Void, 0x80000000 | 5,    7,
    QMetaType::Void, 0x80000000 | 5,    7,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,   14,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    7,

       0        // eod
};

void qdesigner_internal::ActionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ActionView *_t = static_cast<ActionView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->contextMenuRequested((*reinterpret_cast< QContextMenuEvent*(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 1: _t->currentChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 2: _t->activated((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 4: _t->resourceImageDropped((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2]))); break;
        case 5: _t->filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->selectAll(); break;
        case 7: _t->clearSelection(); break;
        case 8: _t->slotCurrentChanged((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ActionView::*_t)(QContextMenuEvent * , QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionView::contextMenuRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ActionView::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionView::currentChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ActionView::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionView::activated)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ActionView::*_t)(const QItemSelection & , const QItemSelection & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionView::selectionChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ActionView::*_t)(const QString & , QAction * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionView::resourceImageDropped)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::ActionView::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ActionView.data,
      qt_meta_data_qdesigner_internal__ActionView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::ActionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::ActionView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ActionView.stringdata0))
        return static_cast<void*>(this);
    return QStackedWidget::qt_metacast(_clname);
}

int qdesigner_internal::ActionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::ActionView::contextMenuRequested(QContextMenuEvent * _t1, QAction * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void qdesigner_internal::ActionView::currentChanged(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qdesigner_internal::ActionView::activated(QAction * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void qdesigner_internal::ActionView::selectionChanged(const QItemSelection & _t1, const QItemSelection & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void qdesigner_internal::ActionView::resourceImageDropped(const QString & _t1, QAction * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_qdesigner_internal__ActionRepositoryMimeData_t {
    QByteArrayData data[1];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__ActionRepositoryMimeData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__ActionRepositoryMimeData_t qt_meta_stringdata_qdesigner_internal__ActionRepositoryMimeData = {
    {
QT_MOC_LITERAL(0, 0, 44) // "qdesigner_internal::ActionRep..."

    },
    "qdesigner_internal::ActionRepositoryMimeData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__ActionRepositoryMimeData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void qdesigner_internal::ActionRepositoryMimeData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject qdesigner_internal::ActionRepositoryMimeData::staticMetaObject = {
    { &QMimeData::staticMetaObject, qt_meta_stringdata_qdesigner_internal__ActionRepositoryMimeData.data,
      qt_meta_data_qdesigner_internal__ActionRepositoryMimeData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::ActionRepositoryMimeData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::ActionRepositoryMimeData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__ActionRepositoryMimeData.stringdata0))
        return static_cast<void*>(this);
    return QMimeData::qt_metacast(_clname);
}

int qdesigner_internal::ActionRepositoryMimeData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMimeData::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
