/****************************************************************************
** Meta object code from reading C++ file 'qwebengineprofile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qwebengineprofile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwebengineprofile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWebEngineProfile_t {
    QByteArrayData data[16];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWebEngineProfile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWebEngineProfile_t qt_meta_stringdata_QWebEngineProfile = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QWebEngineProfile"
QT_MOC_LITERAL(1, 18, 17), // "downloadRequested"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 23), // "QWebEngineDownloadItem*"
QT_MOC_LITERAL(4, 61, 8), // "download"
QT_MOC_LITERAL(5, 70, 25), // "destroyedUrlSchemeHandler"
QT_MOC_LITERAL(6, 96, 27), // "QWebEngineUrlSchemeHandler*"
QT_MOC_LITERAL(7, 124, 3), // "obj"
QT_MOC_LITERAL(8, 128, 13), // "HttpCacheType"
QT_MOC_LITERAL(9, 142, 15), // "MemoryHttpCache"
QT_MOC_LITERAL(10, 158, 13), // "DiskHttpCache"
QT_MOC_LITERAL(11, 172, 7), // "NoCache"
QT_MOC_LITERAL(12, 180, 23), // "PersistentCookiesPolicy"
QT_MOC_LITERAL(13, 204, 19), // "NoPersistentCookies"
QT_MOC_LITERAL(14, 224, 22), // "AllowPersistentCookies"
QT_MOC_LITERAL(15, 247, 22) // "ForcePersistentCookies"

    },
    "QWebEngineProfile\0downloadRequested\0"
    "\0QWebEngineDownloadItem*\0download\0"
    "destroyedUrlSchemeHandler\0"
    "QWebEngineUrlSchemeHandler*\0obj\0"
    "HttpCacheType\0MemoryHttpCache\0"
    "DiskHttpCache\0NoCache\0PersistentCookiesPolicy\0"
    "NoPersistentCookies\0AllowPersistentCookies\0"
    "ForcePersistentCookies"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWebEngineProfile[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       2,   30, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

 // enums: name, flags, count, data
       8, 0x0,    3,   38,
      12, 0x0,    3,   44,

 // enum data: key, value
       9, uint(QWebEngineProfile::MemoryHttpCache),
      10, uint(QWebEngineProfile::DiskHttpCache),
      11, uint(QWebEngineProfile::NoCache),
      13, uint(QWebEngineProfile::NoPersistentCookies),
      14, uint(QWebEngineProfile::AllowPersistentCookies),
      15, uint(QWebEngineProfile::ForcePersistentCookies),

       0        // eod
};

void QWebEngineProfile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWebEngineProfile *_t = static_cast<QWebEngineProfile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadRequested((*reinterpret_cast< QWebEngineDownloadItem*(*)>(_a[1]))); break;
        case 1: _t->destroyedUrlSchemeHandler((*reinterpret_cast< QWebEngineUrlSchemeHandler*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QWebEngineProfile::*_t)(QWebEngineDownloadItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QWebEngineProfile::downloadRequested)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QWebEngineProfile::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWebEngineProfile.data,
      qt_meta_data_QWebEngineProfile,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QWebEngineProfile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWebEngineProfile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWebEngineProfile.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QWebEngineProfile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QWebEngineProfile::downloadRequested(QWebEngineDownloadItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
