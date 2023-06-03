/****************************************************************************
** Meta object code from reading C++ file 'qmediaplaylistnavigator_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qmediaplaylistnavigator_p.h"
#include "../../5.9.6/QtMultimedia/private/qmediaplaylistnavigator_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmediaplaylistnavigator_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMediaPlaylistNavigator_t {
    QByteArrayData data[22];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMediaPlaylistNavigator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMediaPlaylistNavigator_t qt_meta_stringdata_QMediaPlaylistNavigator = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QMediaPlaylistNavigator"
QT_MOC_LITERAL(1, 24, 9), // "activated"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "QMediaContent"
QT_MOC_LITERAL(4, 49, 7), // "content"
QT_MOC_LITERAL(5, 57, 19), // "currentIndexChanged"
QT_MOC_LITERAL(6, 77, 19), // "playbackModeChanged"
QT_MOC_LITERAL(7, 97, 28), // "QMediaPlaylist::PlaybackMode"
QT_MOC_LITERAL(8, 126, 4), // "mode"
QT_MOC_LITERAL(9, 131, 23), // "surroundingItemsChanged"
QT_MOC_LITERAL(10, 155, 4), // "next"
QT_MOC_LITERAL(11, 160, 8), // "previous"
QT_MOC_LITERAL(12, 169, 4), // "jump"
QT_MOC_LITERAL(13, 174, 15), // "setPlaybackMode"
QT_MOC_LITERAL(14, 190, 16), // "_q_mediaInserted"
QT_MOC_LITERAL(15, 207, 5), // "start"
QT_MOC_LITERAL(16, 213, 3), // "end"
QT_MOC_LITERAL(17, 217, 15), // "_q_mediaRemoved"
QT_MOC_LITERAL(18, 233, 15), // "_q_mediaChanged"
QT_MOC_LITERAL(19, 249, 12), // "playbackMode"
QT_MOC_LITERAL(20, 262, 12), // "currentIndex"
QT_MOC_LITERAL(21, 275, 11) // "currentItem"

    },
    "QMediaPlaylistNavigator\0activated\0\0"
    "QMediaContent\0content\0currentIndexChanged\0"
    "playbackModeChanged\0QMediaPlaylist::PlaybackMode\0"
    "mode\0surroundingItemsChanged\0next\0"
    "previous\0jump\0setPlaybackMode\0"
    "_q_mediaInserted\0start\0end\0_q_mediaRemoved\0"
    "_q_mediaChanged\0playbackMode\0currentIndex\0"
    "currentItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMediaPlaylistNavigator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       3,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       6,    1,   75,    2, 0x06 /* Public */,
       9,    0,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   79,    2, 0x0a /* Public */,
      11,    0,   80,    2, 0x0a /* Public */,
      12,    1,   81,    2, 0x0a /* Public */,
      13,    1,   84,    2, 0x0a /* Public */,
      14,    2,   87,    2, 0x08 /* Private */,
      17,    2,   92,    2, 0x08 /* Private */,
      18,    2,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,

 // properties: name, type, flags
      19, 0x80000000 | 7, 0x0049510b,
      20, QMetaType::Int, 0x00495003,
      21, 0x80000000 | 3, 0x00095009,

 // properties: notify_signal_id
       2,
       1,
       0,

       0        // eod
};

void QMediaPlaylistNavigator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMediaPlaylistNavigator *_t = static_cast<QMediaPlaylistNavigator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< const QMediaContent(*)>(_a[1]))); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->playbackModeChanged((*reinterpret_cast< QMediaPlaylist::PlaybackMode(*)>(_a[1]))); break;
        case 3: _t->surroundingItemsChanged(); break;
        case 4: _t->next(); break;
        case 5: _t->previous(); break;
        case 6: _t->jump((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setPlaybackMode((*reinterpret_cast< QMediaPlaylist::PlaybackMode(*)>(_a[1]))); break;
        case 8: _t->d_func()->_q_mediaInserted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->d_func()->_q_mediaRemoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->d_func()->_q_mediaChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaContent >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlaylist::PlaybackMode >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlaylist::PlaybackMode >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QMediaPlaylistNavigator::*_t)(const QMediaContent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlaylistNavigator::activated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMediaPlaylistNavigator::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlaylistNavigator::currentIndexChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMediaPlaylistNavigator::*_t)(QMediaPlaylist::PlaybackMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlaylistNavigator::playbackModeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QMediaPlaylistNavigator::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlaylistNavigator::surroundingItemsChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaContent >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlaylist::PlaybackMode >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMediaPlaylistNavigator *_t = static_cast<QMediaPlaylistNavigator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QMediaPlaylist::PlaybackMode*>(_v) = _t->playbackMode(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 2: *reinterpret_cast< QMediaContent*>(_v) = _t->currentItem(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMediaPlaylistNavigator *_t = static_cast<QMediaPlaylistNavigator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlaybackMode(*reinterpret_cast< QMediaPlaylist::PlaybackMode*>(_v)); break;
        case 1: _t->jump(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QMediaPlaylistNavigator[] = {
        &QMediaPlaylist::staticMetaObject,
    nullptr
};

const QMetaObject QMediaPlaylistNavigator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QMediaPlaylistNavigator.data,
      qt_meta_data_QMediaPlaylistNavigator,  qt_static_metacall, qt_meta_extradata_QMediaPlaylistNavigator, nullptr}
};


const QMetaObject *QMediaPlaylistNavigator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMediaPlaylistNavigator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMediaPlaylistNavigator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMediaPlaylistNavigator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QMediaPlaylistNavigator::activated(const QMediaContent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMediaPlaylistNavigator::currentIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMediaPlaylistNavigator::playbackModeChanged(QMediaPlaylist::PlaybackMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMediaPlaylistNavigator::surroundingItemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
