/****************************************************************************
** Meta object code from reading C++ file 'qdeclarative_playvariation_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarative_playvariation_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarative_playvariation_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativePlayVariation_t {
    QByteArrayData data[7];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativePlayVariation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativePlayVariation_t qt_meta_stringdata_QDeclarativePlayVariation = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QDeclarativePlayVariation"
QT_MOC_LITERAL(1, 26, 6), // "sample"
QT_MOC_LITERAL(2, 33, 7), // "looping"
QT_MOC_LITERAL(3, 41, 7), // "maxGain"
QT_MOC_LITERAL(4, 49, 7), // "minGain"
QT_MOC_LITERAL(5, 57, 8), // "maxPitch"
QT_MOC_LITERAL(6, 66, 8) // "minPitch"

    },
    "QDeclarativePlayVariation\0sample\0"
    "looping\0maxGain\0minGain\0maxPitch\0"
    "minPitch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativePlayVariation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,
       2, QMetaType::Bool, 0x00095103,
       3, QMetaType::QReal, 0x00095103,
       4, QMetaType::QReal, 0x00095103,
       5, QMetaType::QReal, 0x00095103,
       6, QMetaType::QReal, 0x00095103,

       0        // eod
};

void QDeclarativePlayVariation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QDeclarativePlayVariation *_t = static_cast<QDeclarativePlayVariation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->sample(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isLooping(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->maxGain(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->minGain(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->maxPitch(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->minPitch(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativePlayVariation *_t = static_cast<QDeclarativePlayVariation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSample(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setLooping(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setMaxGain(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setMinGain(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setMaxPitch(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setMinPitch(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QDeclarativePlayVariation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativePlayVariation.data,
      qt_meta_data_QDeclarativePlayVariation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativePlayVariation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativePlayVariation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativePlayVariation.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativePlayVariation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
