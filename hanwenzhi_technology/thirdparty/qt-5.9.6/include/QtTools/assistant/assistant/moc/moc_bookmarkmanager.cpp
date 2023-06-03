/****************************************************************************
** Meta object code from reading C++ file 'bookmarkmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../bookmarkmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bookmarkmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BookmarkManager_t {
    QByteArrayData data[26];
    char stringdata0[378];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookmarkManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookmarkManager_t qt_meta_stringdata_BookmarkManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "BookmarkManager"
QT_MOC_LITERAL(1, 16, 13), // "escapePressed"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9), // "setSource"
QT_MOC_LITERAL(4, 41, 3), // "url"
QT_MOC_LITERAL(5, 45, 17), // "setSourceInNewTab"
QT_MOC_LITERAL(6, 63, 11), // "addBookmark"
QT_MOC_LITERAL(7, 75, 5), // "title"
QT_MOC_LITERAL(8, 81, 13), // "setupFinished"
QT_MOC_LITERAL(9, 95, 14), // "storeBookmarks"
QT_MOC_LITERAL(10, 110, 20), // "addBookmarkActivated"
QT_MOC_LITERAL(11, 131, 23), // "removeBookmarkActivated"
QT_MOC_LITERAL(12, 155, 15), // "manageBookmarks"
QT_MOC_LITERAL(13, 171, 19), // "refreshBookmarkMenu"
QT_MOC_LITERAL(14, 191, 22), // "refreshBookmarkToolBar"
QT_MOC_LITERAL(15, 214, 14), // "renameBookmark"
QT_MOC_LITERAL(16, 229, 5), // "index"
QT_MOC_LITERAL(17, 235, 19), // "setSourceFromAction"
QT_MOC_LITERAL(18, 255, 18), // "setSourceFromIndex"
QT_MOC_LITERAL(19, 274, 6), // "newTab"
QT_MOC_LITERAL(20, 281, 20), // "focusInEventOccurred"
QT_MOC_LITERAL(21, 302, 25), // "managerWidgetAboutToClose"
QT_MOC_LITERAL(22, 328, 11), // "textChanged"
QT_MOC_LITERAL(23, 340, 4), // "text"
QT_MOC_LITERAL(24, 345, 26), // "customContextMenuRequested"
QT_MOC_LITERAL(25, 372, 5) // "point"

    },
    "BookmarkManager\0escapePressed\0\0setSource\0"
    "url\0setSourceInNewTab\0addBookmark\0"
    "title\0setupFinished\0storeBookmarks\0"
    "addBookmarkActivated\0removeBookmarkActivated\0"
    "manageBookmarks\0refreshBookmarkMenu\0"
    "refreshBookmarkToolBar\0renameBookmark\0"
    "index\0setSourceFromAction\0setSourceFromIndex\0"
    "newTab\0focusInEventOccurred\0"
    "managerWidgetAboutToClose\0textChanged\0"
    "text\0customContextMenuRequested\0point"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookmarkManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    1,  105,    2, 0x06 /* Public */,
       5,    1,  108,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,  111,    2, 0x0a /* Public */,
       8,    0,  116,    2, 0x08 /* Private */,
       9,    0,  117,    2, 0x08 /* Private */,
      10,    0,  118,    2, 0x08 /* Private */,
      11,    0,  119,    2, 0x08 /* Private */,
      12,    0,  120,    2, 0x08 /* Private */,
      13,    0,  121,    2, 0x08 /* Private */,
      14,    0,  122,    2, 0x08 /* Private */,
      15,    1,  123,    2, 0x08 /* Private */,
      17,    0,  126,    2, 0x08 /* Private */,
      18,    2,  127,    2, 0x08 /* Private */,
      20,    0,  132,    2, 0x08 /* Private */,
      21,    0,  133,    2, 0x08 /* Private */,
      22,    1,  134,    2, 0x08 /* Private */,
      24,    1,  137,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    4,
    QMetaType::Void, QMetaType::QUrl,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Bool,   16,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QPoint,   25,

       0        // eod
};

void BookmarkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookmarkManager *_t = static_cast<BookmarkManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->escapePressed(); break;
        case 1: _t->setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->setSourceInNewTab((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->addBookmark((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->setupFinished(); break;
        case 5: _t->storeBookmarks(); break;
        case 6: _t->addBookmarkActivated(); break;
        case 7: _t->removeBookmarkActivated(); break;
        case 8: _t->manageBookmarks(); break;
        case 9: _t->refreshBookmarkMenu(); break;
        case 10: _t->refreshBookmarkToolBar(); break;
        case 11: _t->renameBookmark((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->setSourceFromAction(); break;
        case 13: _t->setSourceFromIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->focusInEventOccurred(); break;
        case 15: _t->managerWidgetAboutToClose(); break;
        case 16: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BookmarkManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BookmarkManager::escapePressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BookmarkManager::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BookmarkManager::setSource)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BookmarkManager::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BookmarkManager::setSourceInNewTab)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject BookmarkManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BookmarkManager.data,
      qt_meta_data_BookmarkManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BookmarkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookmarkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BookmarkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void BookmarkManager::escapePressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BookmarkManager::setSource(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BookmarkManager::setSourceInNewTab(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_BookmarkManager__BookmarkWidget_t {
    QByteArrayData data[3];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookmarkManager__BookmarkWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookmarkManager__BookmarkWidget_t qt_meta_stringdata_BookmarkManager__BookmarkWidget = {
    {
QT_MOC_LITERAL(0, 0, 31), // "BookmarkManager::BookmarkWidget"
QT_MOC_LITERAL(1, 32, 20), // "focusInEventOccurred"
QT_MOC_LITERAL(2, 53, 0) // ""

    },
    "BookmarkManager::BookmarkWidget\0"
    "focusInEventOccurred\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookmarkManager__BookmarkWidget[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void BookmarkManager::BookmarkWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookmarkWidget *_t = static_cast<BookmarkWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->focusInEventOccurred(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BookmarkWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BookmarkWidget::focusInEventOccurred)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BookmarkManager::BookmarkWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BookmarkManager__BookmarkWidget.data,
      qt_meta_data_BookmarkManager__BookmarkWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BookmarkManager::BookmarkWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookmarkManager::BookmarkWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkManager__BookmarkWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BookmarkManager::BookmarkWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void BookmarkManager::BookmarkWidget::focusInEventOccurred()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_BookmarkManager__BookmarkTreeView_t {
    QByteArrayData data[8];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BookmarkManager__BookmarkTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BookmarkManager__BookmarkTreeView_t qt_meta_stringdata_BookmarkManager__BookmarkTreeView = {
    {
QT_MOC_LITERAL(0, 0, 33), // "BookmarkManager::BookmarkTree..."
QT_MOC_LITERAL(1, 34, 11), // "editingDone"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 10), // "commitData"
QT_MOC_LITERAL(4, 58, 8), // "QWidget*"
QT_MOC_LITERAL(5, 67, 6), // "editor"
QT_MOC_LITERAL(6, 74, 15), // "setExpandedData"
QT_MOC_LITERAL(7, 90, 5) // "index"

    },
    "BookmarkManager::BookmarkTreeView\0"
    "editingDone\0\0commitData\0QWidget*\0"
    "editor\0setExpandedData\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BookmarkManager__BookmarkTreeView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x09 /* Protected */,
       6,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QModelIndex,    7,

       0        // eod
};

void BookmarkManager::BookmarkTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BookmarkTreeView *_t = static_cast<BookmarkTreeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editingDone(); break;
        case 1: _t->commitData((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 2: _t->setExpandedData((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BookmarkTreeView::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BookmarkTreeView::editingDone)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BookmarkManager::BookmarkTreeView::staticMetaObject = {
    { &QTreeView::staticMetaObject, qt_meta_stringdata_BookmarkManager__BookmarkTreeView.data,
      qt_meta_data_BookmarkManager__BookmarkTreeView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BookmarkManager::BookmarkTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BookmarkManager::BookmarkTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BookmarkManager__BookmarkTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int BookmarkManager::BookmarkTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void BookmarkManager::BookmarkTreeView::editingDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
