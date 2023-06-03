/****************************************************************************
** Meta object code from reading C++ file 'qtexttospeech.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qtexttospeech.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtexttospeech.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QTextToSpeech_t {
    QByteArrayData data[27];
    char stringdata0[238];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTextToSpeech_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTextToSpeech_t qt_meta_stringdata_QTextToSpeech = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QTextToSpeech"
QT_MOC_LITERAL(1, 14, 12), // "stateChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 20), // "QTextToSpeech::State"
QT_MOC_LITERAL(4, 49, 5), // "state"
QT_MOC_LITERAL(5, 55, 13), // "localeChanged"
QT_MOC_LITERAL(6, 69, 6), // "locale"
QT_MOC_LITERAL(7, 76, 11), // "rateChanged"
QT_MOC_LITERAL(8, 88, 4), // "rate"
QT_MOC_LITERAL(9, 93, 12), // "pitchChanged"
QT_MOC_LITERAL(10, 106, 5), // "pitch"
QT_MOC_LITERAL(11, 112, 13), // "volumeChanged"
QT_MOC_LITERAL(12, 126, 6), // "volume"
QT_MOC_LITERAL(13, 133, 12), // "voiceChanged"
QT_MOC_LITERAL(14, 146, 6), // "QVoice"
QT_MOC_LITERAL(15, 153, 5), // "voice"
QT_MOC_LITERAL(16, 159, 3), // "say"
QT_MOC_LITERAL(17, 163, 4), // "text"
QT_MOC_LITERAL(18, 168, 4), // "stop"
QT_MOC_LITERAL(19, 173, 5), // "pause"
QT_MOC_LITERAL(20, 179, 6), // "resume"
QT_MOC_LITERAL(21, 186, 9), // "setLocale"
QT_MOC_LITERAL(22, 196, 7), // "setRate"
QT_MOC_LITERAL(23, 204, 8), // "setPitch"
QT_MOC_LITERAL(24, 213, 9), // "setVolume"
QT_MOC_LITERAL(25, 223, 8), // "setVoice"
QT_MOC_LITERAL(26, 232, 5) // "State"

    },
    "QTextToSpeech\0stateChanged\0\0"
    "QTextToSpeech::State\0state\0localeChanged\0"
    "locale\0rateChanged\0rate\0pitchChanged\0"
    "pitch\0volumeChanged\0volume\0voiceChanged\0"
    "QVoice\0voice\0say\0text\0stop\0pause\0"
    "resume\0setLocale\0setRate\0setPitch\0"
    "setVolume\0setVoice\0State"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTextToSpeech[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       6,  128, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       5,    1,   92,    2, 0x06 /* Public */,
       7,    1,   95,    2, 0x06 /* Public */,
       9,    1,   98,    2, 0x06 /* Public */,
      11,    1,  101,    2, 0x06 /* Public */,
      13,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  107,    2, 0x0a /* Public */,
      18,    0,  110,    2, 0x0a /* Public */,
      19,    0,  111,    2, 0x0a /* Public */,
      20,    0,  112,    2, 0x0a /* Public */,
      21,    1,  113,    2, 0x0a /* Public */,
      22,    1,  116,    2, 0x0a /* Public */,
      23,    1,  119,    2, 0x0a /* Public */,
      24,    1,  122,    2, 0x0a /* Public */,
      25,    1,  125,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QLocale,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QLocale,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

 // properties: name, type, flags
       4, 0x80000000 | 26, 0x00495009,
      12, QMetaType::Int, 0x00495103,
       8, QMetaType::Double, 0x00495103,
      10, QMetaType::Double, 0x00495103,
       6, QMetaType::QLocale, 0x00495103,
      15, 0x80000000 | 14, 0x0049510b,

 // properties: notify_signal_id
       0,
       4,
       2,
       3,
       1,
       5,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

void QTextToSpeech::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTextToSpeech *_t = static_cast<QTextToSpeech *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QTextToSpeech::State(*)>(_a[1]))); break;
        case 1: _t->localeChanged((*reinterpret_cast< const QLocale(*)>(_a[1]))); break;
        case 2: _t->rateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->pitchChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->voiceChanged((*reinterpret_cast< const QVoice(*)>(_a[1]))); break;
        case 6: _t->say((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->stop(); break;
        case 8: _t->pause(); break;
        case 9: _t->resume(); break;
        case 10: _t->setLocale((*reinterpret_cast< const QLocale(*)>(_a[1]))); break;
        case 11: _t->setRate((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->setPitch((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->setVolume((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->setVoice((*reinterpret_cast< const QVoice(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTextToSpeech::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QTextToSpeech::*_t)(QTextToSpeech::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTextToSpeech::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QTextToSpeech::*_t)(const QLocale & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTextToSpeech::localeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QTextToSpeech::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTextToSpeech::rateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QTextToSpeech::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTextToSpeech::pitchChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QTextToSpeech::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTextToSpeech::volumeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QTextToSpeech::*_t)(const QVoice & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QTextToSpeech::voiceChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QTextToSpeech *_t = static_cast<QTextToSpeech *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->volume(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->rate(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->pitch(); break;
        case 4: *reinterpret_cast< QLocale*>(_v) = _t->locale(); break;
        case 5: *reinterpret_cast< QVoice*>(_v) = _t->voice(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QTextToSpeech *_t = static_cast<QTextToSpeech *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setVolume(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setRate(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setPitch(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setLocale(*reinterpret_cast< QLocale*>(_v)); break;
        case 5: _t->setVoice(*reinterpret_cast< QVoice*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QTextToSpeech::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QTextToSpeech.data,
      qt_meta_data_QTextToSpeech,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QTextToSpeech::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTextToSpeech::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QTextToSpeech.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QTextToSpeech::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
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

// SIGNAL 0
void QTextToSpeech::stateChanged(QTextToSpeech::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTextToSpeech::localeChanged(const QLocale & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTextToSpeech::rateChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QTextToSpeech::pitchChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QTextToSpeech::volumeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QTextToSpeech::voiceChanged(const QVoice & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
