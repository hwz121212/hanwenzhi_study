/****************************************************************************
** Meta object code from reading C++ file 'qgstappsrc_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtMultimedia/private/qgstappsrc_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgstappsrc_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QGstAppSrc_t {
    QByteArrayData data[6];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGstAppSrc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGstAppSrc_t qt_meta_stringdata_QGstAppSrc = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QGstAppSrc"
QT_MOC_LITERAL(1, 11, 16), // "pushDataToAppSrc"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "doSeek"
QT_MOC_LITERAL(4, 36, 11), // "onDataReady"
QT_MOC_LITERAL(5, 48, 15) // "streamDestroyed"

    },
    "QGstAppSrc\0pushDataToAppSrc\0\0doSeek\0"
    "onDataReady\0streamDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGstAppSrc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       4,    0,   38,    2, 0x08 /* Private */,
       5,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::LongLong,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QGstAppSrc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGstAppSrc *_t = static_cast<QGstAppSrc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pushDataToAppSrc(); break;
        case 1: { bool _r = _t->doSeek((*reinterpret_cast< qint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->onDataReady(); break;
        case 3: _t->streamDestroyed(); break;
        default: ;
        }
    }
}

const QMetaObject QGstAppSrc::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGstAppSrc.data,
      qt_meta_data_QGstAppSrc,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QGstAppSrc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGstAppSrc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QGstAppSrc.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QGstAppSrc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
