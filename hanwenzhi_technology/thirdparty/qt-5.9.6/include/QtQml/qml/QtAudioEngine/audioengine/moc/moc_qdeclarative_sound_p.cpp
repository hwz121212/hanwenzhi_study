/****************************************************************************
** Meta object code from reading C++ file 'qdeclarative_sound_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qdeclarative_sound_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdeclarative_sound_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QDeclarativeSoundCone_t {
    QByteArrayData data[4];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeSoundCone_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeSoundCone_t qt_meta_stringdata_QDeclarativeSoundCone = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QDeclarativeSoundCone"
QT_MOC_LITERAL(1, 22, 10), // "innerAngle"
QT_MOC_LITERAL(2, 33, 10), // "outerAngle"
QT_MOC_LITERAL(3, 44, 9) // "outerGain"

    },
    "QDeclarativeSoundCone\0innerAngle\0"
    "outerAngle\0outerGain"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeSoundCone[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095103,
       2, QMetaType::QReal, 0x00095103,
       3, QMetaType::QReal, 0x00095103,

       0        // eod
};

void QDeclarativeSoundCone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QDeclarativeSoundCone *_t = static_cast<QDeclarativeSoundCone *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->innerAngle(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->outerAngle(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->outerGain(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeSoundCone *_t = static_cast<QDeclarativeSoundCone *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInnerAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setOuterAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setOuterGain(*reinterpret_cast< qreal*>(_v)); break;
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

const QMetaObject QDeclarativeSoundCone::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeSoundCone.data,
      qt_meta_data_QDeclarativeSoundCone,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeSoundCone::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeSoundCone::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeSoundCone.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeSoundCone::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QDeclarativeSound_t {
    QByteArrayData data[24];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeclarativeSound_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeclarativeSound_t qt_meta_stringdata_QDeclarativeSound = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QDeclarativeSound"
QT_MOC_LITERAL(1, 18, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 34, 17), // "playVariationlist"
QT_MOC_LITERAL(3, 52, 4), // "play"
QT_MOC_LITERAL(4, 57, 0), // ""
QT_MOC_LITERAL(5, 58, 4), // "gain"
QT_MOC_LITERAL(6, 63, 5), // "pitch"
QT_MOC_LITERAL(7, 69, 8), // "position"
QT_MOC_LITERAL(8, 78, 8), // "velocity"
QT_MOC_LITERAL(9, 87, 9), // "direction"
QT_MOC_LITERAL(10, 97, 11), // "newInstance"
QT_MOC_LITERAL(11, 109, 26), // "QDeclarativeSoundInstance*"
QT_MOC_LITERAL(12, 136, 16), // "addPlayVariation"
QT_MOC_LITERAL(13, 153, 26), // "QDeclarativePlayVariation*"
QT_MOC_LITERAL(14, 180, 4), // "name"
QT_MOC_LITERAL(15, 185, 8), // "playType"
QT_MOC_LITERAL(16, 194, 8), // "PlayType"
QT_MOC_LITERAL(17, 203, 8), // "category"
QT_MOC_LITERAL(18, 212, 4), // "cone"
QT_MOC_LITERAL(19, 217, 22), // "QDeclarativeSoundCone*"
QT_MOC_LITERAL(20, 240, 16), // "attenuationModel"
QT_MOC_LITERAL(21, 257, 43), // "QQmlListProperty<QDeclarative..."
QT_MOC_LITERAL(22, 301, 6), // "Random"
QT_MOC_LITERAL(23, 308, 10) // "Sequential"

    },
    "QDeclarativeSound\0DefaultProperty\0"
    "playVariationlist\0play\0\0gain\0pitch\0"
    "position\0velocity\0direction\0newInstance\0"
    "QDeclarativeSoundInstance*\0addPlayVariation\0"
    "QDeclarativePlayVariation*\0name\0"
    "playType\0PlayType\0category\0cone\0"
    "QDeclarativeSoundCone*\0attenuationModel\0"
    "QQmlListProperty<QDeclarativePlayVariation>\0"
    "Random\0Sequential"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeclarativeSound[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      14,   16, // methods
       6,  176, // properties
       1,  194, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    0,  100,    4, 0x0a /* Public */,
       3,    1,  101,    4, 0x0a /* Public */,
       3,    2,  104,    4, 0x0a /* Public */,
       3,    1,  109,    4, 0x0a /* Public */,
       3,    2,  112,    4, 0x0a /* Public */,
       3,    3,  117,    4, 0x0a /* Public */,
       3,    2,  124,    4, 0x0a /* Public */,
       3,    3,  129,    4, 0x0a /* Public */,
       3,    4,  136,    4, 0x0a /* Public */,
       3,    3,  145,    4, 0x0a /* Public */,
       3,    4,  152,    4, 0x0a /* Public */,
       3,    5,  161,    4, 0x0a /* Public */,
      10,    0,  172,    4, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    1,  173,    4, 0x82 /* Public | MethodRevisioned */,

 // slots: revision
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // methods: revision
       1,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    5,    6,
    QMetaType::Void, QMetaType::QVector3D,    7,
    QMetaType::Void, QMetaType::QVector3D, QMetaType::QVector3D,    7,    8,
    QMetaType::Void, QMetaType::QVector3D, QMetaType::QVector3D, QMetaType::QVector3D,    7,    8,    9,
    QMetaType::Void, QMetaType::QVector3D, QMetaType::QReal,    7,    5,
    QMetaType::Void, QMetaType::QVector3D, QMetaType::QVector3D, QMetaType::QReal,    7,    8,    5,
    QMetaType::Void, QMetaType::QVector3D, QMetaType::QVector3D, QMetaType::QVector3D, QMetaType::QReal,    7,    8,    9,    5,
    QMetaType::Void, QMetaType::QVector3D, QMetaType::QReal, QMetaType::QReal,    7,    5,    6,
    QMetaType::Void, QMetaType::QVector3D, QMetaType::QVector3D, QMetaType::QReal, QMetaType::QReal,    7,    8,    5,    6,
    QMetaType::Void, QMetaType::QVector3D, QMetaType::QVector3D, QMetaType::QVector3D, QMetaType::QReal, QMetaType::QReal,    7,    8,    9,    5,    6,
    0x80000000 | 11,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 13,    4,

 // properties: name, type, flags
      14, QMetaType::QString, 0x00095103,
      15, 0x80000000 | 16, 0x0009510b,
      17, QMetaType::QString, 0x00095103,
      18, 0x80000000 | 19, 0x00095409,
      20, QMetaType::QString, 0x00095103,
       2, 0x80000000 | 21, 0x00095409,

 // enums: name, flags, count, data
      16, 0x0,    2,  198,

 // enum data: key, value
      22, uint(QDeclarativeSound::Random),
      23, uint(QDeclarativeSound::Sequential),

       0        // eod
};

void QDeclarativeSound::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeclarativeSound *_t = static_cast<QDeclarativeSound *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->play(); break;
        case 1: _t->play((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->play((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 3: _t->play((*reinterpret_cast< const QVector3D(*)>(_a[1]))); break;
        case 4: _t->play((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2]))); break;
        case 5: _t->play((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])),(*reinterpret_cast< const QVector3D(*)>(_a[3]))); break;
        case 6: _t->play((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 7: _t->play((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 8: _t->play((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])),(*reinterpret_cast< const QVector3D(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 9: _t->play((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 10: _t->play((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4]))); break;
        case 11: _t->play((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])),(*reinterpret_cast< const QVector3D(*)>(_a[3])),(*reinterpret_cast< qreal(*)>(_a[4])),(*reinterpret_cast< qreal(*)>(_a[5]))); break;
        case 12: { QDeclarativeSoundInstance* _r = _t->newInstance();
            if (_a[0]) *reinterpret_cast< QDeclarativeSoundInstance**>(_a[0]) = std::move(_r); }  break;
        case 13: _t->addPlayVariation((*reinterpret_cast< QDeclarativePlayVariation*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDeclarativePlayVariation* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDeclarativeSoundCone* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDeclarativeSound *_t = static_cast<QDeclarativeSound *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< PlayType*>(_v) = _t->playType(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->category(); break;
        case 3: *reinterpret_cast< QDeclarativeSoundCone**>(_v) = _t->cone(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->attenuationModel(); break;
        case 5: *reinterpret_cast< QQmlListProperty<QDeclarativePlayVariation>*>(_v) = _t->playVariationlist(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDeclarativeSound *_t = static_cast<QDeclarativeSound *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPlayType(*reinterpret_cast< PlayType*>(_v)); break;
        case 2: _t->setCategory(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setAttenuationModel(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDeclarativeSound::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeclarativeSound.data,
      qt_meta_data_QDeclarativeSound,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QDeclarativeSound::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeclarativeSound::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QDeclarativeSound.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QDeclarativeSound::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
