/****************************************************************************
** Meta object code from reading C++ file 'qmediaplaylistcontrol_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtMultimedia/private/qmediaplaylistcontrol_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmediaplaylistcontrol_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMediaPlaylistControl_t {
    QByteArrayData data[10];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMediaPlaylistControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMediaPlaylistControl_t qt_meta_stringdata_QMediaPlaylistControl = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QMediaPlaylistControl"
QT_MOC_LITERAL(1, 22, 23), // "playlistProviderChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 19), // "currentIndexChanged"
QT_MOC_LITERAL(4, 67, 8), // "position"
QT_MOC_LITERAL(5, 76, 19), // "currentMediaChanged"
QT_MOC_LITERAL(6, 96, 13), // "QMediaContent"
QT_MOC_LITERAL(7, 110, 19), // "playbackModeChanged"
QT_MOC_LITERAL(8, 130, 28), // "QMediaPlaylist::PlaybackMode"
QT_MOC_LITERAL(9, 159, 4) // "mode"

    },
    "QMediaPlaylistControl\0playlistProviderChanged\0"
    "\0currentIndexChanged\0position\0"
    "currentMediaChanged\0QMediaContent\0"
    "playbackModeChanged\0QMediaPlaylist::PlaybackMode\0"
    "mode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMediaPlaylistControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       5,    1,   38,    2, 0x06 /* Public */,
       7,    1,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void QMediaPlaylistControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMediaPlaylistControl *_t = static_cast<QMediaPlaylistControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playlistProviderChanged(); break;
        case 1: _t->currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->currentMediaChanged((*reinterpret_cast< const QMediaContent(*)>(_a[1]))); break;
        case 3: _t->playbackModeChanged((*reinterpret_cast< QMediaPlaylist::PlaybackMode(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaContent >(); break;
            }
            break;
        case 3:
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
            typedef void (QMediaPlaylistControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlaylistControl::playlistProviderChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMediaPlaylistControl::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlaylistControl::currentIndexChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMediaPlaylistControl::*_t)(const QMediaContent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlaylistControl::currentMediaChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QMediaPlaylistControl::*_t)(QMediaPlaylist::PlaybackMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaPlaylistControl::playbackModeChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QMediaPlaylistControl::staticMetaObject = {
    { &QMediaControl::staticMetaObject, qt_meta_stringdata_QMediaPlaylistControl.data,
      qt_meta_data_QMediaPlaylistControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMediaPlaylistControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMediaPlaylistControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMediaPlaylistControl.stringdata0))
        return static_cast<void*>(this);
    return QMediaControl::qt_metacast(_clname);
}

int QMediaPlaylistControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QMediaPlaylistControl::playlistProviderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QMediaPlaylistControl::currentIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMediaPlaylistControl::currentMediaChanged(const QMediaContent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMediaPlaylistControl::playbackModeChanged(QMediaPlaylist::PlaybackMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
