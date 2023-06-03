/****************************************************************************
** Meta object code from reading C++ file 'qgeotilefetcherosm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qgeotilefetcherosm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeotilefetcherosm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoTileFetcherOsm_t {
    QByteArrayData data[8];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoTileFetcherOsm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoTileFetcherOsm_t qt_meta_stringdata_QGeoTileFetcherOsm = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QGeoTileFetcherOsm"
QT_MOC_LITERAL(1, 19, 19), // "providerDataUpdated"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 26), // "const QGeoTileProviderOsm*"
QT_MOC_LITERAL(4, 67, 8), // "provider"
QT_MOC_LITERAL(5, 76, 28), // "onProviderResolutionFinished"
QT_MOC_LITERAL(6, 105, 25), // "onProviderResolutionError"
QT_MOC_LITERAL(7, 131, 12) // "restartTimer"

    },
    "QGeoTileFetcherOsm\0providerDataUpdated\0"
    "\0const QGeoTileProviderOsm*\0provider\0"
    "onProviderResolutionFinished\0"
    "onProviderResolutionError\0restartTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoTileFetcherOsm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x09 /* Protected */,
       6,    1,   40,    2, 0x09 /* Protected */,
       7,    0,   43,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void QGeoTileFetcherOsm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoTileFetcherOsm *_t = static_cast<QGeoTileFetcherOsm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->providerDataUpdated((*reinterpret_cast< const QGeoTileProviderOsm*(*)>(_a[1]))); break;
        case 1: _t->onProviderResolutionFinished((*reinterpret_cast< const QGeoTileProviderOsm*(*)>(_a[1]))); break;
        case 2: _t->onProviderResolutionError((*reinterpret_cast< const QGeoTileProviderOsm*(*)>(_a[1]))); break;
        case 3: _t->restartTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGeoTileFetcherOsm::*_t)(const QGeoTileProviderOsm * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoTileFetcherOsm::providerDataUpdated)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QGeoTileFetcherOsm::staticMetaObject = {
    { &QGeoTileFetcher::staticMetaObject, qt_meta_stringdata_QGeoTileFetcherOsm.data,
      qt_meta_data_QGeoTileFetcherOsm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoTileFetcherOsm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoTileFetcherOsm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoTileFetcherOsm.stringdata0))
        return static_cast<void*>(this);
    return QGeoTileFetcher::qt_metacast(_clname);
}

int QGeoTileFetcherOsm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGeoTileFetcher::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QGeoTileFetcherOsm::providerDataUpdated(const QGeoTileProviderOsm * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
