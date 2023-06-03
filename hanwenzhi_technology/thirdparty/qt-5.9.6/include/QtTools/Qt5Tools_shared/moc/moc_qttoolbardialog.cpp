/****************************************************************************
** Meta object code from reading C++ file 'qttoolbardialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qttoolbardialog/qttoolbardialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qttoolbardialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtToolBarManager_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtToolBarManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtToolBarManager_t qt_meta_stringdata_QtToolBarManager = {
    {
QT_MOC_LITERAL(0, 0, 16) // "QtToolBarManager"

    },
    "QtToolBarManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtToolBarManager[] = {

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

void QtToolBarManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QtToolBarManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtToolBarManager.data,
      qt_meta_data_QtToolBarManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtToolBarManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtToolBarManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtToolBarManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtToolBarManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QtFullToolBarManager_t {
    QByteArrayData data[11];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtFullToolBarManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtFullToolBarManager_t qt_meta_stringdata_QtFullToolBarManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QtFullToolBarManager"
QT_MOC_LITERAL(1, 21, 14), // "toolBarCreated"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 9), // "QToolBar*"
QT_MOC_LITERAL(4, 47, 7), // "toolBar"
QT_MOC_LITERAL(5, 55, 14), // "toolBarRemoved"
QT_MOC_LITERAL(6, 70, 14), // "toolBarChanged"
QT_MOC_LITERAL(7, 85, 15), // "QList<QAction*>"
QT_MOC_LITERAL(8, 101, 7), // "actions"
QT_MOC_LITERAL(9, 109, 12), // "resetToolBar"
QT_MOC_LITERAL(10, 122, 16) // "resetAllToolBars"

    },
    "QtFullToolBarManager\0toolBarCreated\0"
    "\0QToolBar*\0toolBar\0toolBarRemoved\0"
    "toolBarChanged\0QList<QAction*>\0actions\0"
    "resetToolBar\0resetAllToolBars"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtFullToolBarManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       6,    2,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   50,    2, 0x0a /* Public */,
      10,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    4,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void QtFullToolBarManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtFullToolBarManager *_t = static_cast<QtFullToolBarManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toolBarCreated((*reinterpret_cast< QToolBar*(*)>(_a[1]))); break;
        case 1: _t->toolBarRemoved((*reinterpret_cast< QToolBar*(*)>(_a[1]))); break;
        case 2: _t->toolBarChanged((*reinterpret_cast< QToolBar*(*)>(_a[1])),(*reinterpret_cast< const QList<QAction*>(*)>(_a[2]))); break;
        case 3: _t->resetToolBar((*reinterpret_cast< QToolBar*(*)>(_a[1]))); break;
        case 4: _t->resetAllToolBars(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QToolBar* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QToolBar* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QAction*> >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QToolBar* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QToolBar* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtFullToolBarManager::*_t)(QToolBar * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtFullToolBarManager::toolBarCreated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QtFullToolBarManager::*_t)(QToolBar * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtFullToolBarManager::toolBarRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QtFullToolBarManager::*_t)(QToolBar * , const QList<QAction*> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtFullToolBarManager::toolBarChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QtFullToolBarManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtFullToolBarManager.data,
      qt_meta_data_QtFullToolBarManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtFullToolBarManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtFullToolBarManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtFullToolBarManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtFullToolBarManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QtFullToolBarManager::toolBarCreated(QToolBar * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtFullToolBarManager::toolBarRemoved(QToolBar * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtFullToolBarManager::toolBarChanged(QToolBar * _t1, const QList<QAction*> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QtToolBarDialog_t {
    QByteArrayData data[19];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtToolBarDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtToolBarDialog_t qt_meta_stringdata_QtToolBarDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QtToolBarDialog"
QT_MOC_LITERAL(1, 16, 10), // "newClicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 13), // "removeClicked"
QT_MOC_LITERAL(4, 42, 14), // "defaultClicked"
QT_MOC_LITERAL(5, 57, 9), // "okClicked"
QT_MOC_LITERAL(6, 67, 12), // "applyClicked"
QT_MOC_LITERAL(7, 80, 13), // "cancelClicked"
QT_MOC_LITERAL(8, 94, 9), // "upClicked"
QT_MOC_LITERAL(9, 104, 11), // "downClicked"
QT_MOC_LITERAL(10, 116, 11), // "leftClicked"
QT_MOC_LITERAL(11, 128, 12), // "rightClicked"
QT_MOC_LITERAL(12, 141, 13), // "renameClicked"
QT_MOC_LITERAL(13, 155, 14), // "toolBarRenamed"
QT_MOC_LITERAL(14, 170, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(15, 187, 20), // "currentActionChanged"
QT_MOC_LITERAL(16, 208, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(17, 225, 21), // "currentToolBarChanged"
QT_MOC_LITERAL(18, 247, 27) // "currentToolBarActionChanged"

    },
    "QtToolBarDialog\0newClicked\0\0removeClicked\0"
    "defaultClicked\0okClicked\0applyClicked\0"
    "cancelClicked\0upClicked\0downClicked\0"
    "leftClicked\0rightClicked\0renameClicked\0"
    "toolBarRenamed\0QListWidgetItem*\0"
    "currentActionChanged\0QTreeWidgetItem*\0"
    "currentToolBarChanged\0currentToolBarActionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtToolBarDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    1,  100,    2, 0x08 /* Private */,
      15,    1,  103,    2, 0x08 /* Private */,
      17,    1,  106,    2, 0x08 /* Private */,
      18,    1,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,

       0        // eod
};

void QtToolBarDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtToolBarDialog *_t = static_cast<QtToolBarDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d_func()->newClicked(); break;
        case 1: _t->d_func()->removeClicked(); break;
        case 2: _t->d_func()->defaultClicked(); break;
        case 3: _t->d_func()->okClicked(); break;
        case 4: _t->d_func()->applyClicked(); break;
        case 5: _t->d_func()->cancelClicked(); break;
        case 6: _t->d_func()->upClicked(); break;
        case 7: _t->d_func()->downClicked(); break;
        case 8: _t->d_func()->leftClicked(); break;
        case 9: _t->d_func()->rightClicked(); break;
        case 10: _t->d_func()->renameClicked(); break;
        case 11: _t->d_func()->toolBarRenamed((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 12: _t->d_func()->currentActionChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->d_func()->currentToolBarChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 14: _t->d_func()->currentToolBarActionChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtToolBarDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QtToolBarDialog.data,
      qt_meta_data_QtToolBarDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtToolBarDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtToolBarDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtToolBarDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QtToolBarDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
