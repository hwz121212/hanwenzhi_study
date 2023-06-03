/****************************************************************************
** Meta object code from reading C++ file 'centralwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../centralwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'centralwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TabBar_t {
    QByteArrayData data[14];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TabBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TabBar_t qt_meta_stringdata_TabBar = {
    {
QT_MOC_LITERAL(0, 0, 6), // "TabBar"
QT_MOC_LITERAL(1, 7, 17), // "currentTabChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "HelpViewer*"
QT_MOC_LITERAL(4, 38, 6), // "viewer"
QT_MOC_LITERAL(5, 45, 11), // "addBookmark"
QT_MOC_LITERAL(6, 57, 5), // "title"
QT_MOC_LITERAL(7, 63, 3), // "url"
QT_MOC_LITERAL(8, 67, 12), // "titleChanged"
QT_MOC_LITERAL(9, 80, 18), // "slotCurrentChanged"
QT_MOC_LITERAL(10, 99, 5), // "index"
QT_MOC_LITERAL(11, 105, 21), // "slotTabCloseRequested"
QT_MOC_LITERAL(12, 127, 30), // "slotCustomContextMenuRequested"
QT_MOC_LITERAL(13, 158, 3) // "pos"

    },
    "TabBar\0currentTabChanged\0\0HelpViewer*\0"
    "viewer\0addBookmark\0title\0url\0titleChanged\0"
    "slotCurrentChanged\0index\0slotTabCloseRequested\0"
    "slotCustomContextMenuRequested\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TabBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    2,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   52,    2, 0x0a /* Public */,
       9,    1,   53,    2, 0x08 /* Private */,
      11,    1,   56,    2, 0x08 /* Private */,
      12,    1,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QPoint,   13,

       0        // eod
};

void TabBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TabBar *_t = static_cast<TabBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentTabChanged((*reinterpret_cast< HelpViewer*(*)>(_a[1]))); break;
        case 1: _t->addBookmark((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->titleChanged(); break;
        case 3: _t->slotCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->slotTabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->slotCustomContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TabBar::*_t)(HelpViewer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabBar::currentTabChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TabBar::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TabBar::addBookmark)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TabBar::staticMetaObject = {
    { &QTabBar::staticMetaObject, qt_meta_stringdata_TabBar.data,
      qt_meta_data_TabBar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TabBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TabBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TabBar.stringdata0))
        return static_cast<void*>(this);
    return QTabBar::qt_metacast(_clname);
}

int TabBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabBar::qt_metacall(_c, _id, _a);
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
void TabBar::currentTabChanged(HelpViewer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TabBar::addBookmark(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_CentralWidget_t {
    QByteArrayData data[43];
    char stringdata0[491];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CentralWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CentralWidget_t qt_meta_stringdata_CentralWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CentralWidget"
QT_MOC_LITERAL(1, 14, 20), // "currentViewerChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "copyAvailable"
QT_MOC_LITERAL(4, 50, 3), // "yes"
QT_MOC_LITERAL(5, 54, 13), // "sourceChanged"
QT_MOC_LITERAL(6, 68, 3), // "url"
QT_MOC_LITERAL(7, 72, 11), // "highlighted"
QT_MOC_LITERAL(8, 84, 4), // "link"
QT_MOC_LITERAL(9, 89, 16), // "forwardAvailable"
QT_MOC_LITERAL(10, 106, 9), // "available"
QT_MOC_LITERAL(11, 116, 17), // "backwardAvailable"
QT_MOC_LITERAL(12, 134, 11), // "addBookmark"
QT_MOC_LITERAL(13, 146, 5), // "title"
QT_MOC_LITERAL(14, 152, 4), // "copy"
QT_MOC_LITERAL(15, 157, 4), // "home"
QT_MOC_LITERAL(16, 162, 6), // "zoomIn"
QT_MOC_LITERAL(17, 169, 7), // "zoomOut"
QT_MOC_LITERAL(18, 177, 9), // "resetZoom"
QT_MOC_LITERAL(19, 187, 7), // "forward"
QT_MOC_LITERAL(20, 195, 8), // "nextPage"
QT_MOC_LITERAL(21, 204, 8), // "backward"
QT_MOC_LITERAL(22, 213, 12), // "previousPage"
QT_MOC_LITERAL(23, 226, 5), // "print"
QT_MOC_LITERAL(24, 232, 9), // "pageSetup"
QT_MOC_LITERAL(25, 242, 12), // "printPreview"
QT_MOC_LITERAL(26, 255, 9), // "setSource"
QT_MOC_LITERAL(27, 265, 19), // "setSourceFromSearch"
QT_MOC_LITERAL(28, 285, 8), // "findNext"
QT_MOC_LITERAL(29, 294, 12), // "findPrevious"
QT_MOC_LITERAL(30, 307, 4), // "find"
QT_MOC_LITERAL(31, 312, 4), // "text"
QT_MOC_LITERAL(32, 317, 11), // "incremental"
QT_MOC_LITERAL(33, 329, 11), // "activateTab"
QT_MOC_LITERAL(34, 341, 14), // "showTextSearch"
QT_MOC_LITERAL(35, 356, 17), // "updateBrowserFont"
QT_MOC_LITERAL(36, 374, 19), // "updateUserInterface"
QT_MOC_LITERAL(37, 394, 20), // "highlightSearchTerms"
QT_MOC_LITERAL(38, 415, 21), // "printPreviewToPrinter"
QT_MOC_LITERAL(39, 437, 9), // "QPrinter*"
QT_MOC_LITERAL(40, 447, 7), // "printer"
QT_MOC_LITERAL(41, 455, 19), // "handleSourceChanged"
QT_MOC_LITERAL(42, 475, 15) // "slotHighlighted"

    },
    "CentralWidget\0currentViewerChanged\0\0"
    "copyAvailable\0yes\0sourceChanged\0url\0"
    "highlighted\0link\0forwardAvailable\0"
    "available\0backwardAvailable\0addBookmark\0"
    "title\0copy\0home\0zoomIn\0zoomOut\0resetZoom\0"
    "forward\0nextPage\0backward\0previousPage\0"
    "print\0pageSetup\0printPreview\0setSource\0"
    "setSourceFromSearch\0findNext\0findPrevious\0"
    "find\0text\0incremental\0activateTab\0"
    "showTextSearch\0updateBrowserFont\0"
    "updateUserInterface\0highlightSearchTerms\0"
    "printPreviewToPrinter\0QPrinter*\0printer\0"
    "handleSourceChanged\0slotHighlighted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CentralWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  174,    2, 0x06 /* Public */,
       3,    1,  175,    2, 0x06 /* Public */,
       5,    1,  178,    2, 0x06 /* Public */,
       7,    1,  181,    2, 0x06 /* Public */,
       9,    1,  184,    2, 0x06 /* Public */,
      11,    1,  187,    2, 0x06 /* Public */,
      12,    2,  190,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  195,    2, 0x0a /* Public */,
      15,    0,  196,    2, 0x0a /* Public */,
      16,    0,  197,    2, 0x0a /* Public */,
      17,    0,  198,    2, 0x0a /* Public */,
      18,    0,  199,    2, 0x0a /* Public */,
      19,    0,  200,    2, 0x0a /* Public */,
      20,    0,  201,    2, 0x0a /* Public */,
      21,    0,  202,    2, 0x0a /* Public */,
      22,    0,  203,    2, 0x0a /* Public */,
      23,    0,  204,    2, 0x0a /* Public */,
      24,    0,  205,    2, 0x0a /* Public */,
      25,    0,  206,    2, 0x0a /* Public */,
      26,    1,  207,    2, 0x0a /* Public */,
      27,    1,  210,    2, 0x0a /* Public */,
      28,    0,  213,    2, 0x0a /* Public */,
      29,    0,  214,    2, 0x0a /* Public */,
      30,    3,  215,    2, 0x0a /* Public */,
      33,    0,  222,    2, 0x0a /* Public */,
      34,    0,  223,    2, 0x0a /* Public */,
      35,    0,  224,    2, 0x0a /* Public */,
      36,    0,  225,    2, 0x0a /* Public */,
      37,    0,  226,    2, 0x08 /* Private */,
      38,    1,  227,    2, 0x08 /* Private */,
      41,    1,  230,    2, 0x08 /* Private */,
      42,    1,  233,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QUrl,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   13,    6,

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
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    6,
    QMetaType::Void, QMetaType::QUrl,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,   31,   19,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, QMetaType::QUrl,    6,
    QMetaType::Void, QMetaType::QString,    8,

       0        // eod
};

void CentralWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CentralWidget *_t = static_cast<CentralWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentViewerChanged(); break;
        case 1: _t->copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->highlighted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->forwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->backwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->addBookmark((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->copy(); break;
        case 8: _t->home(); break;
        case 9: _t->zoomIn(); break;
        case 10: _t->zoomOut(); break;
        case 11: _t->resetZoom(); break;
        case 12: _t->forward(); break;
        case 13: _t->nextPage(); break;
        case 14: _t->backward(); break;
        case 15: _t->previousPage(); break;
        case 16: _t->print(); break;
        case 17: _t->pageSetup(); break;
        case 18: _t->printPreview(); break;
        case 19: _t->setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 20: _t->setSourceFromSearch((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 21: _t->findNext(); break;
        case 22: _t->findPrevious(); break;
        case 23: _t->find((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 24: _t->activateTab(); break;
        case 25: _t->showTextSearch(); break;
        case 26: _t->updateBrowserFont(); break;
        case 27: _t->updateUserInterface(); break;
        case 28: _t->highlightSearchTerms(); break;
        case 29: _t->printPreviewToPrinter((*reinterpret_cast< QPrinter*(*)>(_a[1]))); break;
        case 30: _t->handleSourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 31: _t->slotHighlighted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CentralWidget::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::currentViewerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CentralWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::copyAvailable)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CentralWidget::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::sourceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CentralWidget::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::highlighted)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CentralWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::forwardAvailable)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CentralWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::backwardAvailable)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (CentralWidget::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CentralWidget::addBookmark)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject CentralWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CentralWidget.data,
      qt_meta_data_CentralWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CentralWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CentralWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CentralWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CentralWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void CentralWidget::currentViewerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CentralWidget::copyAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CentralWidget::sourceChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CentralWidget::highlighted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CentralWidget::forwardAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CentralWidget::backwardAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CentralWidget::addBookmark(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
