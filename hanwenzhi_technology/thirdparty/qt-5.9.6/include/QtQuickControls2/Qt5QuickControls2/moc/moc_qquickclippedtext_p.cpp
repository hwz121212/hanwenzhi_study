/****************************************************************************
** Meta object code from reading C++ file 'qquickclippedtext_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuickControls2/private/qquickclippedtext_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickclippedtext_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickClippedText_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickClippedText_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickClippedText_t qt_meta_stringdata_QQuickClippedText = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QQuickClippedText"
QT_MOC_LITERAL(1, 18, 5), // "clipX"
QT_MOC_LITERAL(2, 24, 5), // "clipY"
QT_MOC_LITERAL(3, 30, 9), // "clipWidth"
QT_MOC_LITERAL(4, 40, 10) // "clipHeight"

    },
    "QQuickClippedText\0clipX\0clipY\0clipWidth\0"
    "clipHeight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickClippedText[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095903,
       2, QMetaType::QReal, 0x00095903,
       3, QMetaType::QReal, 0x00095903,
       4, QMetaType::QReal, 0x00095903,

       0        // eod
};

void QQuickClippedText::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuickClippedText *_t = static_cast<QQuickClippedText *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->clipX(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->clipY(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->clipWidth(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->clipHeight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickClippedText *_t = static_cast<QQuickClippedText *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setClipX(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setClipY(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setClipWidth(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setClipHeight(*reinterpret_cast< qreal*>(_v)); break;
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

const QMetaObject QQuickClippedText::staticMetaObject = {
    { &QQuickText::staticMetaObject, qt_meta_stringdata_QQuickClippedText.data,
      qt_meta_data_QQuickClippedText,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickClippedText::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickClippedText::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickClippedText.stringdata0))
        return static_cast<void*>(this);
    return QQuickText::qt_metacast(_clname);
}

int QQuickClippedText::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickText::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
