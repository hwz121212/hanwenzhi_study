/****************************************************************************
** Meta object code from reading C++ file 'bookmarkmanagerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bookmarkmanagerwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarkmanagerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BookmarkManagerWidget_t {
    QByteArrayData data[19];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookmarkManagerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookmarkManagerWidget_t qt_meta_stringdata_BookmarkManagerWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "BookmarkManagerWidget"
QT_MOC_LITERAL(1, 22, 9), // "setSource"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 3), // "url"
QT_MOC_LITERAL(4, 37, 17), // "setSourceInNewTab"
QT_MOC_LITERAL(5, 55, 25), // "managerWidgetAboutToClose"
QT_MOC_LITERAL(6, 81, 8), // "findNext"
QT_MOC_LITERAL(7, 90, 12), // "findPrevious"
QT_MOC_LITERAL(8, 103, 15), // "importBookmarks"
QT_MOC_LITERAL(9, 119, 15), // "exportBookmarks"
QT_MOC_LITERAL(10, 135, 19), // "refeshBookmarkCache"
QT_MOC_LITERAL(11, 155, 11), // "textChanged"
QT_MOC_LITERAL(12, 167, 4), // "text"
QT_MOC_LITERAL(13, 172, 10), // "removeItem"
QT_MOC_LITERAL(14, 183, 5), // "index"
QT_MOC_LITERAL(15, 189, 26), // "customContextMenuRequested"
QT_MOC_LITERAL(16, 216, 5), // "point"
QT_MOC_LITERAL(17, 222, 18), // "setSourceFromIndex"
QT_MOC_LITERAL(18, 241, 6) // "newTab"

    },
    "BookmarkManagerWidget\0setSource\0\0url\0"
    "setSourceInNewTab\0managerWidgetAboutToClose\0"
    "findNext\0findPrevious\0importBookmarks\0"
    "exportBookmarks\0refeshBookmarkCache\0"
    "textChanged\0text\0removeItem\0index\0"
    "customContextMenuRequested\0point\0"
    "setSourceFromIndex\0newTab"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookmarkManagerWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    0,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   91,    2, 0x08 /* Private */,
       7,    0,   92,    2, 0x08 /* Private */,
       8,    0,   93,    2, 0x08 /* Private */,
       9,    0,   94,    2, 0x08 /* Private */,
      10,    0,   95,    2, 0x08 /* Private */,
      11,    1,   96,    2, 0x08 /* Private */,
      13,    1,   99,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x28 /* Private | MethodCloned */,
      15,    1,  103,    2, 0x08 /* Private */,
      17,    2,  106,    2, 0x08 /* Private */,
      17,    1,  111,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QModelIndex,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   16,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Bool,   14,   18,
    QMetaType::Void, QMetaType::QModelIndex,   14,

       0        // eod
};

void BookmarkManagerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookmarkManagerWidget *_t = static_cast<BookmarkManagerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->setSourceInNewTab((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->managerWidgetAboutToClose(); break;
        case 3: _t->findNext(); break;
        case 4: _t->findPrevious(); break;
        case 5: _t->importBookmarks(); break;
        case 6: _t->exportBookmarks(); break;
        case 7: _t->refeshBookmarkCache(); break;
        case 8: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->removeItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->removeItem(); break;
        case 11: _t->customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 12: _t->setSourceFromIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->setSourceFromIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BookmarkManagerWidget::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BookmarkManagerWidget::setSource)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BookmarkManagerWidget::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BookmarkManagerWidget::setSourceInNewTab)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BookmarkManagerWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BookmarkManagerWidget::managerWidgetAboutToClose)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject BookmarkManagerWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BookmarkManagerWidget.data,
      qt_meta_data_BookmarkManagerWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BookmarkManagerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookmarkManagerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkManagerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BookmarkManagerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void BookmarkManagerWidget::setSource(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BookmarkManagerWidget::setSourceInNewTab(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BookmarkManagerWidget::managerWidgetAboutToClose()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
