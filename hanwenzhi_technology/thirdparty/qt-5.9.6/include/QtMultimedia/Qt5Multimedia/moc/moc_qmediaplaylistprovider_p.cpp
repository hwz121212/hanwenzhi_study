/****************************************************************************
** Meta object code from reading C++ file 'qmediaplaylistprovider_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qmediaplaylistnavigator_p.h"
#include "../../5.9.6/QtMultimedia/private/qmediaplaylistprovider_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmediaplaylistprovider_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMediaPlaylistProvider_t {
    QByteArrayData data[14];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMediaPlaylistProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMediaPlaylistProvider_t qt_meta_stringdata_QMediaPlaylistProvider = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QMediaPlaylistProvider"
QT_MOC_LITERAL(1, 23, 22), // "mediaAboutToBeInserted"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "start"
QT_MOC_LITERAL(4, 53, 3), // "end"
QT_MOC_LITERAL(5, 57, 13), // "mediaInserted"
QT_MOC_LITERAL(6, 71, 21), // "mediaAboutToBeRemoved"
QT_MOC_LITERAL(7, 93, 12), // "mediaRemoved"
QT_MOC_LITERAL(8, 106, 12), // "mediaChanged"
QT_MOC_LITERAL(9, 119, 6), // "loaded"
QT_MOC_LITERAL(10, 126, 10), // "loadFailed"
QT_MOC_LITERAL(11, 137, 21), // "QMediaPlaylist::Error"
QT_MOC_LITERAL(12, 159, 12), // "errorMessage"
QT_MOC_LITERAL(13, 172, 7) // "shuffle"

    },
    "QMediaPlaylistProvider\0mediaAboutToBeInserted\0"
    "\0start\0end\0mediaInserted\0mediaAboutToBeRemoved\0"
    "mediaRemoved\0mediaChanged\0loaded\0"
    "loadFailed\0QMediaPlaylist::Error\0"
    "errorMessage\0shuffle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMediaPlaylistProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    2,   59,    2, 0x06 /* Public */,
       6,    2,   64,    2, 0x06 /* Public */,
       7,    2,   69,    2, 0x06 /* Public */,
       8,    2,   74,    2, 0x06 /* Public */,
       9,    0,   79,    2, 0x06 /* Public */,
      10,    2,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   85,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::QString,    2,   12,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QMediaPlaylistProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMediaPlaylistProvider *_t = static_cast<QMediaPlaylistProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mediaAboutToBeInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->mediaInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->mediaAboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->mediaRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->mediaChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->loaded(); break;
        case 6: _t->loadFailed((*reinterpret_cast< QMediaPlaylist::Error(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->shuffle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlaylist::Error >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QMediaPlaylistProvider::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlaylistProvider::mediaAboutToBeInserted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMediaPlaylistProvider::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlaylistProvider::mediaInserted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMediaPlaylistProvider::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlaylistProvider::mediaAboutToBeRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QMediaPlaylistProvider::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlaylistProvider::mediaRemoved)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QMediaPlaylistProvider::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlaylistProvider::mediaChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QMediaPlaylistProvider::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlaylistProvider::loaded)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QMediaPlaylistProvider::*_t)(QMediaPlaylist::Error , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlaylistProvider::loadFailed)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject QMediaPlaylistProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QMediaPlaylistProvider.data,
      qt_meta_data_QMediaPlaylistProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMediaPlaylistProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMediaPlaylistProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMediaPlaylistProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMediaPlaylistProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QMediaPlaylistProvider::mediaAboutToBeInserted(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMediaPlaylistProvider::mediaInserted(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMediaPlaylistProvider::mediaAboutToBeRemoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMediaPlaylistProvider::mediaRemoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QMediaPlaylistProvider::mediaChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMediaPlaylistProvider::loaded()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QMediaPlaylistProvider::loadFailed(QMediaPlaylist::Error _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
