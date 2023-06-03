/****************************************************************************
** Meta object code from reading C++ file 'qhelpindexwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qhelpindexwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhelpindexwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QHelpIndexModel_t {
    QByteArrayData data[7];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHelpIndexModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHelpIndexModel_t qt_meta_stringdata_QHelpIndexModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QHelpIndexModel"
QT_MOC_LITERAL(1, 16, 20), // "indexCreationStarted"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "indexCreated"
QT_MOC_LITERAL(4, 51, 13), // "insertIndices"
QT_MOC_LITERAL(5, 65, 15), // "invalidateIndex"
QT_MOC_LITERAL(6, 81, 10) // "onShutDown"

    },
    "QHelpIndexModel\0indexCreationStarted\0"
    "\0indexCreated\0insertIndices\0invalidateIndex\0"
    "onShutDown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHelpIndexModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       5,    0,   45,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

       0        // eod
};

void QHelpIndexModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHelpIndexModel *_t = static_cast<QHelpIndexModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexCreationStarted(); break;
        case 1: _t->indexCreated(); break;
        case 2: _t->insertIndices(); break;
        case 3: _t->invalidateIndex((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->invalidateIndex(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QHelpIndexModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHelpIndexModel::indexCreationStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHelpIndexModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHelpIndexModel::indexCreated)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QHelpIndexModel::staticMetaObject = {
    { &QStringListModel::staticMetaObject, qt_meta_stringdata_QHelpIndexModel.data,
      qt_meta_data_QHelpIndexModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QHelpIndexModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHelpIndexModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QHelpIndexModel.stringdata0))
        return static_cast<void*>(this);
    return QStringListModel::qt_metacast(_clname);
}

int QHelpIndexModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStringListModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QHelpIndexModel::indexCreationStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QHelpIndexModel::indexCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QHelpIndexWidget_t {
    QByteArrayData data[14];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHelpIndexWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHelpIndexWidget_t qt_meta_stringdata_QHelpIndexWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QHelpIndexWidget"
QT_MOC_LITERAL(1, 17, 13), // "linkActivated"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "link"
QT_MOC_LITERAL(4, 37, 7), // "keyword"
QT_MOC_LITERAL(5, 45, 14), // "linksActivated"
QT_MOC_LITERAL(6, 60, 18), // "QMap<QString,QUrl>"
QT_MOC_LITERAL(7, 79, 5), // "links"
QT_MOC_LITERAL(8, 85, 13), // "filterIndices"
QT_MOC_LITERAL(9, 99, 6), // "filter"
QT_MOC_LITERAL(10, 106, 8), // "wildcard"
QT_MOC_LITERAL(11, 115, 19), // "activateCurrentItem"
QT_MOC_LITERAL(12, 135, 8), // "showLink"
QT_MOC_LITERAL(13, 144, 5) // "index"

    },
    "QHelpIndexWidget\0linkActivated\0\0link\0"
    "keyword\0linksActivated\0QMap<QString,QUrl>\0"
    "links\0filterIndices\0filter\0wildcard\0"
    "activateCurrentItem\0showLink\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHelpIndexWidget[] = {

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
       1,    2,   44,    2, 0x06 /* Public */,
       5,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   54,    2, 0x0a /* Public */,
       8,    1,   59,    2, 0x2a /* Public | MethodCloned */,
      11,    0,   62,    2, 0x0a /* Public */,
      12,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   13,

       0        // eod
};

void QHelpIndexWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHelpIndexWidget *_t = static_cast<QHelpIndexWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->linkActivated((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->linksActivated((*reinterpret_cast< const QMap<QString,QUrl>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->filterIndices((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->filterIndices((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->activateCurrentItem(); break;
        case 5: _t->showLink((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QHelpIndexWidget::*_t)(const QUrl & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHelpIndexWidget::linkActivated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHelpIndexWidget::*_t)(const QMap<QString,QUrl> & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHelpIndexWidget::linksActivated)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QHelpIndexWidget::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_QHelpIndexWidget.data,
      qt_meta_data_QHelpIndexWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QHelpIndexWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHelpIndexWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QHelpIndexWidget.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int QHelpIndexWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QHelpIndexWidget::linkActivated(const QUrl & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QHelpIndexWidget::linksActivated(const QMap<QString,QUrl> & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
