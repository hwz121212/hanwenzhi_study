/****************************************************************************
** Meta object code from reading C++ file 'qnmeapositioninfosource_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtPositioning/private/qnmeapositioninfosource_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnmeapositioninfosource_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNmeaPositionInfoSourcePrivate_t {
    QByteArrayData data[6];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNmeaPositionInfoSourcePrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNmeaPositionInfoSourcePrivate_t qt_meta_stringdata_QNmeaPositionInfoSourcePrivate = {
    {
QT_MOC_LITERAL(0, 0, 30), // "QNmeaPositionInfoSourcePrivate"
QT_MOC_LITERAL(1, 31, 9), // "readyRead"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 17), // "emitPendingUpdate"
QT_MOC_LITERAL(4, 60, 16), // "sourceDataClosed"
QT_MOC_LITERAL(5, 77, 20) // "updateRequestTimeout"

    },
    "QNmeaPositionInfoSourcePrivate\0readyRead\0"
    "\0emitPendingUpdate\0sourceDataClosed\0"
    "updateRequestTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNmeaPositionInfoSourcePrivate[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QNmeaPositionInfoSourcePrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNmeaPositionInfoSourcePrivate *_t = static_cast<QNmeaPositionInfoSourcePrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->emitPendingUpdate(); break;
        case 2: _t->sourceDataClosed(); break;
        case 3: _t->updateRequestTimeout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QNmeaPositionInfoSourcePrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNmeaPositionInfoSourcePrivate.data,
      qt_meta_data_QNmeaPositionInfoSourcePrivate,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QNmeaPositionInfoSourcePrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNmeaPositionInfoSourcePrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNmeaPositionInfoSourcePrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QNmeaPositionInfoSourcePrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_QNmeaSimulatedReader_t {
    QByteArrayData data[3];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNmeaSimulatedReader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNmeaSimulatedReader_t qt_meta_stringdata_QNmeaSimulatedReader = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QNmeaSimulatedReader"
QT_MOC_LITERAL(1, 21, 21), // "simulatePendingUpdate"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "QNmeaSimulatedReader\0simulatePendingUpdate\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNmeaSimulatedReader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QNmeaSimulatedReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNmeaSimulatedReader *_t = static_cast<QNmeaSimulatedReader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->simulatePendingUpdate(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QNmeaSimulatedReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNmeaSimulatedReader.data,
      qt_meta_data_QNmeaSimulatedReader,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QNmeaSimulatedReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNmeaSimulatedReader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QNmeaSimulatedReader.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QNmeaReader"))
        return static_cast< QNmeaReader*>(this);
    return QObject::qt_metacast(_clname);
}

int QNmeaSimulatedReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
