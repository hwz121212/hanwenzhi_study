/****************************************************************************
** Meta object code from reading C++ file 'qgeotileproviderosm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qgeotileproviderosm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeotileproviderosm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TileProvider_t {
    QByteArrayData data[10];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TileProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TileProvider_t qt_meta_stringdata_TileProvider = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TileProvider"
QT_MOC_LITERAL(1, 13, 18), // "resolutionFinished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "TileProvider*"
QT_MOC_LITERAL(4, 47, 8), // "provider"
QT_MOC_LITERAL(5, 56, 15), // "resolutionError"
QT_MOC_LITERAL(6, 72, 22), // "onNetworkReplyFinished"
QT_MOC_LITERAL(7, 95, 19), // "onNetworkReplyError"
QT_MOC_LITERAL(8, 115, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(9, 143, 5) // "error"

    },
    "TileProvider\0resolutionFinished\0\0"
    "TileProvider*\0provider\0resolutionError\0"
    "onNetworkReplyFinished\0onNetworkReplyError\0"
    "QNetworkReply::NetworkError\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TileProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   40,    2, 0x0a /* Public */,
       7,    1,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void TileProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TileProvider *_t = static_cast<TileProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resolutionFinished((*reinterpret_cast< TileProvider*(*)>(_a[1]))); break;
        case 1: _t->resolutionError((*reinterpret_cast< TileProvider*(*)>(_a[1]))); break;
        case 2: _t->onNetworkReplyFinished(); break;
        case 3: _t->onNetworkReplyError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TileProvider* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TileProvider* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TileProvider::*_t)(TileProvider * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileProvider::resolutionFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TileProvider::*_t)(TileProvider * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TileProvider::resolutionError)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject TileProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TileProvider.data,
      qt_meta_data_TileProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TileProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TileProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TileProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TileProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void TileProvider::resolutionFinished(TileProvider * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TileProvider::resolutionError(TileProvider * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QGeoTileProviderOsm_t {
    QByteArrayData data[13];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoTileProviderOsm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoTileProviderOsm_t qt_meta_stringdata_QGeoTileProviderOsm = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QGeoTileProviderOsm"
QT_MOC_LITERAL(1, 20, 18), // "resolutionFinished"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 26), // "const QGeoTileProviderOsm*"
QT_MOC_LITERAL(4, 67, 8), // "provider"
QT_MOC_LITERAL(5, 76, 15), // "resolutionError"
QT_MOC_LITERAL(6, 92, 18), // "resolutionRequired"
QT_MOC_LITERAL(7, 111, 15), // "resolveProvider"
QT_MOC_LITERAL(8, 127, 18), // "disableRedirection"
QT_MOC_LITERAL(9, 146, 20), // "onResolutionFinished"
QT_MOC_LITERAL(10, 167, 13), // "TileProvider*"
QT_MOC_LITERAL(11, 181, 17), // "onResolutionError"
QT_MOC_LITERAL(12, 199, 24) // "updateCameraCapabilities"

    },
    "QGeoTileProviderOsm\0resolutionFinished\0"
    "\0const QGeoTileProviderOsm*\0provider\0"
    "resolutionError\0resolutionRequired\0"
    "resolveProvider\0disableRedirection\0"
    "onResolutionFinished\0TileProvider*\0"
    "onResolutionError\0updateCameraCapabilities"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoTileProviderOsm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       6,    0,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   61,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x09 /* Protected */,
      11,    1,   66,    2, 0x09 /* Protected */,
      12,    0,   69,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    4,
    QMetaType::Void, 0x80000000 | 10,    4,
    QMetaType::Void,

       0        // eod
};

void QGeoTileProviderOsm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoTileProviderOsm *_t = static_cast<QGeoTileProviderOsm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resolutionFinished((*reinterpret_cast< const QGeoTileProviderOsm*(*)>(_a[1]))); break;
        case 1: _t->resolutionError((*reinterpret_cast< const QGeoTileProviderOsm*(*)>(_a[1]))); break;
        case 2: _t->resolutionRequired(); break;
        case 3: _t->resolveProvider(); break;
        case 4: _t->disableRedirection(); break;
        case 5: _t->onResolutionFinished((*reinterpret_cast< TileProvider*(*)>(_a[1]))); break;
        case 6: _t->onResolutionError((*reinterpret_cast< TileProvider*(*)>(_a[1]))); break;
        case 7: _t->updateCameraCapabilities(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TileProvider* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TileProvider* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGeoTileProviderOsm::*_t)(const QGeoTileProviderOsm * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoTileProviderOsm::resolutionFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGeoTileProviderOsm::*_t)(const QGeoTileProviderOsm * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoTileProviderOsm::resolutionError)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGeoTileProviderOsm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoTileProviderOsm::resolutionRequired)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QGeoTileProviderOsm::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGeoTileProviderOsm.data,
      qt_meta_data_QGeoTileProviderOsm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoTileProviderOsm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoTileProviderOsm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoTileProviderOsm.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGeoTileProviderOsm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QGeoTileProviderOsm::resolutionFinished(const QGeoTileProviderOsm * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGeoTileProviderOsm::resolutionError(const QGeoTileProviderOsm * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGeoTileProviderOsm::resolutionRequired()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
