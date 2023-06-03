/****************************************************************************
** Meta object code from reading C++ file 'qaudiooutputselectorcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qaudiooutputselectorcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaudiooutputselectorcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAudioOutputSelectorControl_t {
    QByteArrayData data[6];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAudioOutputSelectorControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAudioOutputSelectorControl_t qt_meta_stringdata_QAudioOutputSelectorControl = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QAudioOutputSelectorControl"
QT_MOC_LITERAL(1, 28, 19), // "activeOutputChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 4), // "name"
QT_MOC_LITERAL(4, 54, 23), // "availableOutputsChanged"
QT_MOC_LITERAL(5, 78, 15) // "setActiveOutput"

    },
    "QAudioOutputSelectorControl\0"
    "activeOutputChanged\0\0name\0"
    "availableOutputsChanged\0setActiveOutput"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAudioOutputSelectorControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    0,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void QAudioOutputSelectorControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAudioOutputSelectorControl *_t = static_cast<QAudioOutputSelectorControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeOutputChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->availableOutputsChanged(); break;
        case 2: _t->setActiveOutput((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QAudioOutputSelectorControl::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioOutputSelectorControl::activeOutputChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAudioOutputSelectorControl::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QAudioOutputSelectorControl::availableOutputsChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QAudioOutputSelectorControl::staticMetaObject = {
    { &QMediaControl::staticMetaObject, qt_meta_stringdata_QAudioOutputSelectorControl.data,
      qt_meta_data_QAudioOutputSelectorControl,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QAudioOutputSelectorControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAudioOutputSelectorControl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QAudioOutputSelectorControl.stringdata0))
        return static_cast<void*>(this);
    return QMediaControl::qt_metacast(_clname);
}

int QAudioOutputSelectorControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QAudioOutputSelectorControl::activeOutputChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAudioOutputSelectorControl::availableOutputsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
