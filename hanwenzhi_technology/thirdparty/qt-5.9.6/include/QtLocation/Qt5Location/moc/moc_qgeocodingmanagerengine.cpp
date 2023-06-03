/****************************************************************************
** Meta object code from reading C++ file 'qgeocodingmanagerengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgeocodingmanagerengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgeocodingmanagerengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGeoCodingManagerEngine_t {
    QByteArrayData data[8];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGeoCodingManagerEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGeoCodingManagerEngine_t qt_meta_stringdata_QGeoCodingManagerEngine = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QGeoCodingManagerEngine"
QT_MOC_LITERAL(1, 24, 8), // "finished"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "QGeoCodeReply*"
QT_MOC_LITERAL(4, 49, 5), // "reply"
QT_MOC_LITERAL(5, 55, 5), // "error"
QT_MOC_LITERAL(6, 61, 20), // "QGeoCodeReply::Error"
QT_MOC_LITERAL(7, 82, 11) // "errorString"

    },
    "QGeoCodingManagerEngine\0finished\0\0"
    "QGeoCodeReply*\0reply\0error\0"
    "QGeoCodeReply::Error\0errorString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGeoCodingManagerEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    3,   32,    2, 0x06 /* Public */,
       5,    2,   39,    2, 0x26 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6, QMetaType::QString,    4,    5,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    4,    5,

       0        // eod
};

void QGeoCodingManagerEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGeoCodingManagerEngine *_t = static_cast<QGeoCodingManagerEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< QGeoCodeReply*(*)>(_a[1]))); break;
        case 1: _t->error((*reinterpret_cast< QGeoCodeReply*(*)>(_a[1])),(*reinterpret_cast< QGeoCodeReply::Error(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->error((*reinterpret_cast< QGeoCodeReply*(*)>(_a[1])),(*reinterpret_cast< QGeoCodeReply::Error(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCodeReply* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCodeReply* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGeoCodeReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QGeoCodingManagerEngine::*_t)(QGeoCodeReply * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoCodingManagerEngine::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGeoCodingManagerEngine::*_t)(QGeoCodeReply * , QGeoCodeReply::Error , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGeoCodingManagerEngine::error)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QGeoCodingManagerEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGeoCodingManagerEngine.data,
      qt_meta_data_QGeoCodingManagerEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGeoCodingManagerEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGeoCodingManagerEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGeoCodingManagerEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGeoCodingManagerEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QGeoCodingManagerEngine::finished(QGeoCodeReply * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGeoCodingManagerEngine::error(QGeoCodeReply * _t1, QGeoCodeReply::Error _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
