/****************************************************************************
** Meta object code from reading C++ file 'qhelpsearchindexreader_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtHelp/private/qhelpsearchindexreader_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhelpsearchindexreader_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_fulltextsearch__QHelpSearchIndexReader_t {
    QByteArrayData data[5];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fulltextsearch__QHelpSearchIndexReader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fulltextsearch__QHelpSearchIndexReader_t qt_meta_stringdata_fulltextsearch__QHelpSearchIndexReader = {
    {
QT_MOC_LITERAL(0, 0, 38), // "fulltextsearch::QHelpSearchIn..."
QT_MOC_LITERAL(1, 39, 16), // "searchingStarted"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 17), // "searchingFinished"
QT_MOC_LITERAL(4, 75, 17) // "searchResultCount"

    },
    "fulltextsearch::QHelpSearchIndexReader\0"
    "searchingStarted\0\0searchingFinished\0"
    "searchResultCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fulltextsearch__QHelpSearchIndexReader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    1,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void fulltextsearch::QHelpSearchIndexReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHelpSearchIndexReader *_t = static_cast<QHelpSearchIndexReader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchingStarted(); break;
        case 1: _t->searchingFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QHelpSearchIndexReader::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHelpSearchIndexReader::searchingStarted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHelpSearchIndexReader::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QHelpSearchIndexReader::searchingFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject fulltextsearch::QHelpSearchIndexReader::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_fulltextsearch__QHelpSearchIndexReader.data,
      qt_meta_data_fulltextsearch__QHelpSearchIndexReader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *fulltextsearch::QHelpSearchIndexReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fulltextsearch::QHelpSearchIndexReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_fulltextsearch__QHelpSearchIndexReader.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int fulltextsearch::QHelpSearchIndexReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void fulltextsearch::QHelpSearchIndexReader::searchingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void fulltextsearch::QHelpSearchIndexReader::searchingFinished(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
