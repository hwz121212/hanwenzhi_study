/****************************************************************************
** Meta object code from reading C++ file 'qhelpsearchengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qhelpsearchengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhelpsearchengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QHelpSearchEngine_t {
    QByteArrayData data[16];
    char stringdata0[256];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHelpSearchEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHelpSearchEngine_t qt_meta_stringdata_QHelpSearchEngine = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QHelpSearchEngine"
QT_MOC_LITERAL(1, 18, 15), // "indexingStarted"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "indexingFinished"
QT_MOC_LITERAL(4, 52, 16), // "searchingStarted"
QT_MOC_LITERAL(5, 69, 17), // "searchingFinished"
QT_MOC_LITERAL(6, 87, 17), // "searchResultCount"
QT_MOC_LITERAL(7, 105, 20), // "reindexDocumentation"
QT_MOC_LITERAL(8, 126, 14), // "cancelIndexing"
QT_MOC_LITERAL(9, 141, 6), // "search"
QT_MOC_LITERAL(10, 148, 23), // "QList<QHelpSearchQuery>"
QT_MOC_LITERAL(11, 172, 9), // "queryList"
QT_MOC_LITERAL(12, 182, 11), // "searchInput"
QT_MOC_LITERAL(13, 194, 15), // "cancelSearching"
QT_MOC_LITERAL(14, 210, 26), // "scheduleIndexDocumentation"
QT_MOC_LITERAL(15, 237, 18) // "indexDocumentation"

    },
    "QHelpSearchEngine\0indexingStarted\0\0"
    "indexingFinished\0searchingStarted\0"
    "searchingFinished\0searchResultCount\0"
    "reindexDocumentation\0cancelIndexing\0"
    "search\0QList<QHelpSearchQuery>\0queryList\0"
    "searchInput\0cancelSearching\0"
    "scheduleIndexDocumentation\0"
    "indexDocumentation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHelpSearchEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   75,    2, 0x0a /* Public */,
       8,    0,   76,    2, 0x0a /* Public */,
       9,    1,   77,    2, 0x0a /* Public */,
       9,    1,   80,    2, 0x0a /* Public */,
      13,    0,   83,    2, 0x0a /* Public */,
      14,    0,   84,    2, 0x0a /* Public */,
      15,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QHelpSearchEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHelpSearchEngine *_t = static_cast<QHelpSearchEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexingStarted(); break;
        case 1: _t->indexingFinished(); break;
        case 2: _t->searchingStarted(); break;
        case 3: _t->searchingFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->reindexDocumentation(); break;
        case 5: _t->cancelIndexing(); break;
        case 6: _t->search((*reinterpret_cast< const QList<QHelpSearchQuery>(*)>(_a[1]))); break;
        case 7: _t->search((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->cancelSearching(); break;
        case 9: _t->scheduleIndexDocumentation(); break;
        case 10: _t->indexDocumentation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QHelpSearchEngine::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHelpSearchEngine::indexingStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHelpSearchEngine::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHelpSearchEngine::indexingFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QHelpSearchEngine::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHelpSearchEngine::searchingStarted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QHelpSearchEngine::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHelpSearchEngine::searchingFinished)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QHelpSearchEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHelpSearchEngine.data,
      qt_meta_data_QHelpSearchEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QHelpSearchEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHelpSearchEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QHelpSearchEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QHelpSearchEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QHelpSearchEngine::indexingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QHelpSearchEngine::indexingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QHelpSearchEngine::searchingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QHelpSearchEngine::searchingFinished(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
