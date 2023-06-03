/****************************************************************************
** Meta object code from reading C++ file 'qmediagaplessplaybackcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qmediagaplessplaybackcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmediagaplessplaybackcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMediaGaplessPlaybackControl_t {
    QByteArrayData data[8];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMediaGaplessPlaybackControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMediaGaplessPlaybackControl_t qt_meta_stringdata_QMediaGaplessPlaybackControl = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QMediaGaplessPlaybackControl"
QT_MOC_LITERAL(1, 29, 20), // "crossfadeTimeChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 13), // "crossfadeTime"
QT_MOC_LITERAL(4, 65, 16), // "nextMediaChanged"
QT_MOC_LITERAL(5, 82, 13), // "QMediaContent"
QT_MOC_LITERAL(6, 96, 5), // "media"
QT_MOC_LITERAL(7, 102, 19) // "advancedToNextMedia"

    },
    "QMediaGaplessPlaybackControl\0"
    "crossfadeTimeChanged\0\0crossfadeTime\0"
    "nextMediaChanged\0QMediaContent\0media\0"
    "advancedToNextMedia"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMediaGaplessPlaybackControl[] = {

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
       4,    1,   32,    2, 0x06 /* Public */,
       7,    0,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void QMediaGaplessPlaybackControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMediaGaplessPlaybackControl *_t = static_cast<QMediaGaplessPlaybackControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->crossfadeTimeChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->nextMediaChanged((*reinterpret_cast< const QMediaContent(*)>(_a[1]))); break;
        case 2: _t->advancedToNextMedia(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaContent >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QMediaGaplessPlaybackControl::*_t)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaGaplessPlaybackControl::crossfadeTimeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMediaGaplessPlaybackControl::*_t)(const QMediaContent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaGaplessPlaybackControl::nextMediaChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMediaGaplessPlaybackControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMediaGaplessPlaybackControl::advancedToNextMedia)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QMediaGaplessPlaybackControl::staticMetaObject = {
    { &QMediaControl::staticMetaObject, qt_meta_stringdata_QMediaGaplessPlaybackControl.data,
      qt_meta_data_QMediaGaplessPlaybackControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QMediaGaplessPlaybackControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMediaGaplessPlaybackControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMediaGaplessPlaybackControl.stringdata0))
        return static_cast<void*>(this);
    return QMediaControl::qt_metacast(_clname);
}

int QMediaGaplessPlaybackControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaControl::qt_metacall(_c, _id, _a);
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
void QMediaGaplessPlaybackControl::crossfadeTimeChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMediaGaplessPlaybackControl::nextMediaChanged(const QMediaContent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMediaGaplessPlaybackControl::advancedToNextMedia()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
