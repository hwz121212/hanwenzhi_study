/****************************************************************************
** Meta object code from reading C++ file 'qmediarecordercontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmediarecordercontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmediarecordercontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMediaRecorderControl_t {
    QByteArrayData data[21];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMediaRecorderControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMediaRecorderControl_t qt_meta_stringdata_QMediaRecorderControl = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QMediaRecorderControl"
QT_MOC_LITERAL(1, 22, 12), // "stateChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 21), // "QMediaRecorder::State"
QT_MOC_LITERAL(4, 58, 5), // "state"
QT_MOC_LITERAL(5, 64, 13), // "statusChanged"
QT_MOC_LITERAL(6, 78, 22), // "QMediaRecorder::Status"
QT_MOC_LITERAL(7, 101, 6), // "status"
QT_MOC_LITERAL(8, 108, 15), // "durationChanged"
QT_MOC_LITERAL(9, 124, 8), // "position"
QT_MOC_LITERAL(10, 133, 12), // "mutedChanged"
QT_MOC_LITERAL(11, 146, 5), // "muted"
QT_MOC_LITERAL(12, 152, 13), // "volumeChanged"
QT_MOC_LITERAL(13, 166, 6), // "volume"
QT_MOC_LITERAL(14, 173, 21), // "actualLocationChanged"
QT_MOC_LITERAL(15, 195, 8), // "location"
QT_MOC_LITERAL(16, 204, 5), // "error"
QT_MOC_LITERAL(17, 210, 11), // "errorString"
QT_MOC_LITERAL(18, 222, 8), // "setState"
QT_MOC_LITERAL(19, 231, 8), // "setMuted"
QT_MOC_LITERAL(20, 240, 9) // "setVolume"

    },
    "QMediaRecorderControl\0stateChanged\0\0"
    "QMediaRecorder::State\0state\0statusChanged\0"
    "QMediaRecorder::Status\0status\0"
    "durationChanged\0position\0mutedChanged\0"
    "muted\0volumeChanged\0volume\0"
    "actualLocationChanged\0location\0error\0"
    "errorString\0setState\0setMuted\0setVolume"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMediaRecorderControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       8,    1,   70,    2, 0x06 /* Public */,
      10,    1,   73,    2, 0x06 /* Public */,
      12,    1,   76,    2, 0x06 /* Public */,
      14,    1,   79,    2, 0x06 /* Public */,
      16,    2,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,   87,    2, 0x0a /* Public */,
      19,    1,   90,    2, 0x0a /* Public */,
      20,    1,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QReal,   13,
    QMetaType::Void, QMetaType::QUrl,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   16,   17,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::QReal,   13,

       0        // eod
};

void QMediaRecorderControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMediaRecorderControl *_t = static_cast<QMediaRecorderControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QMediaRecorder::State(*)>(_a[1]))); break;
        case 1: _t->statusChanged((*reinterpret_cast< QMediaRecorder::Status(*)>(_a[1]))); break;
        case 2: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->volumeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->actualLocationChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->setState((*reinterpret_cast< QMediaRecorder::State(*)>(_a[1]))); break;
        case 8: _t->setMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setVolume((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaRecorder::State >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaRecorder::Status >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaRecorder::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QMediaRecorderControl::*_t)(QMediaRecorder::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorderControl::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMediaRecorderControl::*_t)(QMediaRecorder::Status );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorderControl::statusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMediaRecorderControl::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorderControl::durationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QMediaRecorderControl::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorderControl::mutedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QMediaRecorderControl::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorderControl::volumeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QMediaRecorderControl::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorderControl::actualLocationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QMediaRecorderControl::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaRecorderControl::error)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject QMediaRecorderControl::staticMetaObject = {
    { &QMediaControl::staticMetaObject, qt_meta_stringdata_QMediaRecorderControl.data,
      qt_meta_data_QMediaRecorderControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMediaRecorderControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMediaRecorderControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMediaRecorderControl.stringdata0))
        return static_cast<void*>(this);
    return QMediaControl::qt_metacast(_clname);
}

int QMediaRecorderControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaControl::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QMediaRecorderControl::stateChanged(QMediaRecorder::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMediaRecorderControl::statusChanged(QMediaRecorder::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMediaRecorderControl::durationChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMediaRecorderControl::mutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QMediaRecorderControl::volumeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMediaRecorderControl::actualLocationChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QMediaRecorderControl::error(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
