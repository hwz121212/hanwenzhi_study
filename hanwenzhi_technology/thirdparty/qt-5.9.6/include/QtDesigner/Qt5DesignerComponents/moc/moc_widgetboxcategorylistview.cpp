/****************************************************************************
** Meta object code from reading C++ file 'widgetboxcategorylistview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widgetbox/widgetboxcategorylistview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetboxcategorylistview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qdesigner_internal__WidgetBoxCategoryListView_t {
    QByteArrayData data[15];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qdesigner_internal__WidgetBoxCategoryListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qdesigner_internal__WidgetBoxCategoryListView_t qt_meta_stringdata_qdesigner_internal__WidgetBoxCategoryListView = {
    {
QT_MOC_LITERAL(0, 0, 45), // "qdesigner_internal::WidgetBox..."
QT_MOC_LITERAL(1, 46, 17), // "scratchPadChanged"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 7), // "pressed"
QT_MOC_LITERAL(4, 73, 4), // "name"
QT_MOC_LITERAL(5, 78, 3), // "xml"
QT_MOC_LITERAL(6, 82, 9), // "globalPos"
QT_MOC_LITERAL(7, 92, 11), // "itemRemoved"
QT_MOC_LITERAL(8, 104, 15), // "lastItemRemoved"
QT_MOC_LITERAL(9, 120, 6), // "filter"
QT_MOC_LITERAL(10, 127, 2), // "re"
QT_MOC_LITERAL(11, 130, 17), // "removeCurrentItem"
QT_MOC_LITERAL(12, 148, 15), // "editCurrentItem"
QT_MOC_LITERAL(13, 164, 11), // "slotPressed"
QT_MOC_LITERAL(14, 176, 5) // "index"

    },
    "qdesigner_internal::WidgetBoxCategoryListView\0"
    "scratchPadChanged\0\0pressed\0name\0xml\0"
    "globalPos\0itemRemoved\0lastItemRemoved\0"
    "filter\0re\0removeCurrentItem\0editCurrentItem\0"
    "slotPressed\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qdesigner_internal__WidgetBoxCategoryListView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    3,   55,    2, 0x06 /* Public */,
       7,    0,   62,    2, 0x06 /* Public */,
       8,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   64,    2, 0x0a /* Public */,
      11,    0,   67,    2, 0x0a /* Public */,
      12,    0,   68,    2, 0x0a /* Public */,
      13,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QPoint,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QRegExp,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   14,

       0        // eod
};

void qdesigner_internal::WidgetBoxCategoryListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WidgetBoxCategoryListView *_t = static_cast<WidgetBoxCategoryListView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scratchPadChanged(); break;
        case 1: _t->pressed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3]))); break;
        case 2: _t->itemRemoved(); break;
        case 3: _t->lastItemRemoved(); break;
        case 4: _t->filter((*reinterpret_cast< const QRegExp(*)>(_a[1]))); break;
        case 5: _t->removeCurrentItem(); break;
        case 6: _t->editCurrentItem(); break;
        case 7: _t->slotPressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (WidgetBoxCategoryListView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetBoxCategoryListView::scratchPadChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WidgetBoxCategoryListView::*_t)(const QString & , const QString & , const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetBoxCategoryListView::pressed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WidgetBoxCategoryListView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetBoxCategoryListView::itemRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WidgetBoxCategoryListView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetBoxCategoryListView::lastItemRemoved)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject qdesigner_internal::WidgetBoxCategoryListView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_qdesigner_internal__WidgetBoxCategoryListView.data,
      qt_meta_data_qdesigner_internal__WidgetBoxCategoryListView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qdesigner_internal::WidgetBoxCategoryListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qdesigner_internal::WidgetBoxCategoryListView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qdesigner_internal__WidgetBoxCategoryListView.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int qdesigner_internal::WidgetBoxCategoryListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void qdesigner_internal::WidgetBoxCategoryListView::scratchPadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void qdesigner_internal::WidgetBoxCategoryListView::pressed(const QString & _t1, const QString & _t2, const QPoint & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qdesigner_internal::WidgetBoxCategoryListView::itemRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void qdesigner_internal::WidgetBoxCategoryListView::lastItemRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
