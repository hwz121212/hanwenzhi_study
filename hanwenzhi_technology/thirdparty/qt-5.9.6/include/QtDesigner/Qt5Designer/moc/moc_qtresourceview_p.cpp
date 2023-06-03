/****************************************************************************
** Meta object code from reading C++ file 'qtresourceview_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtDesigner/private/qtresourceview_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtresourceview_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtResourceView_t {
    QByteArrayData data[19];
    char stringdata0[330];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtResourceView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtResourceView_t qt_meta_stringdata_QtResourceView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QtResourceView"
QT_MOC_LITERAL(1, 15, 16), // "resourceSelected"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 8), // "resource"
QT_MOC_LITERAL(4, 42, 17), // "resourceActivated"
QT_MOC_LITERAL(5, 60, 24), // "slotResourceSetActivated"
QT_MOC_LITERAL(6, 85, 14), // "QtResourceSet*"
QT_MOC_LITERAL(7, 100, 22), // "slotCurrentPathChanged"
QT_MOC_LITERAL(8, 123, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(9, 140, 26), // "slotCurrentResourceChanged"
QT_MOC_LITERAL(10, 167, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(11, 184, 21), // "slotResourceActivated"
QT_MOC_LITERAL(12, 206, 17), // "slotEditResources"
QT_MOC_LITERAL(13, 224, 19), // "slotReloadResources"
QT_MOC_LITERAL(14, 244, 20), // "slotCopyResourcePath"
QT_MOC_LITERAL(15, 265, 34), // "slotListWidgetContextMenuRequ..."
QT_MOC_LITERAL(16, 300, 3), // "pos"
QT_MOC_LITERAL(17, 304, 17), // "slotFilterChanged"
QT_MOC_LITERAL(18, 322, 7) // "pattern"

    },
    "QtResourceView\0resourceSelected\0\0"
    "resource\0resourceActivated\0"
    "slotResourceSetActivated\0QtResourceSet*\0"
    "slotCurrentPathChanged\0QTreeWidgetItem*\0"
    "slotCurrentResourceChanged\0QListWidgetItem*\0"
    "slotResourceActivated\0slotEditResources\0"
    "slotReloadResources\0slotCopyResourcePath\0"
    "slotListWidgetContextMenuRequested\0"
    "pos\0slotFilterChanged\0pattern"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtResourceView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   75,    2, 0x08 /* Private */,
       7,    1,   78,    2, 0x08 /* Private */,
       9,    1,   81,    2, 0x08 /* Private */,
      11,    1,   84,    2, 0x08 /* Private */,
      12,    0,   87,    2, 0x08 /* Private */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,
      15,    1,   90,    2, 0x08 /* Private */,
      17,    1,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   16,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void QtResourceView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtResourceView *_t = static_cast<QtResourceView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resourceSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->resourceActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->d_func()->slotResourceSetActivated((*reinterpret_cast< QtResourceSet*(*)>(_a[1]))); break;
        case 3: _t->d_func()->slotCurrentPathChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->d_func()->slotCurrentResourceChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->d_func()->slotResourceActivated((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->d_func()->slotEditResources(); break;
        case 7: _t->d_func()->slotReloadResources(); break;
        case 8: _t->d_func()->slotCopyResourcePath(); break;
        case 9: _t->d_func()->slotListWidgetContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 10: _t->d_func()->slotFilterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtResourceView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtResourceView::resourceSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QtResourceView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtResourceView::resourceActivated)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QtResourceView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QtResourceView.data,
      qt_meta_data_QtResourceView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtResourceView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtResourceView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtResourceView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QtResourceView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QtResourceView::resourceSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtResourceView::resourceActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QtResourceViewDialog_t {
    QByteArrayData data[3];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtResourceViewDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtResourceViewDialog_t qt_meta_stringdata_QtResourceViewDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QtResourceViewDialog"
QT_MOC_LITERAL(1, 21, 20), // "slotResourceSelected"
QT_MOC_LITERAL(2, 42, 0) // ""

    },
    "QtResourceViewDialog\0slotResourceSelected\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtResourceViewDialog[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void QtResourceViewDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtResourceViewDialog *_t = static_cast<QtResourceViewDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d_func()->slotResourceSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QtResourceViewDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QtResourceViewDialog.data,
      qt_meta_data_QtResourceViewDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtResourceViewDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtResourceViewDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtResourceViewDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QtResourceViewDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
