/****************************************************************************
** Meta object code from reading C++ file 'qquickdroparea_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtQuick/private/qquickdroparea_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickdroparea_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickDropEvent_t {
    QByteArrayData data[27];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickDropEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickDropEvent_t qt_meta_stringdata_QQuickDropEvent = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QQuickDropEvent"
QT_MOC_LITERAL(1, 16, 15), // "getDataAsString"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 15), // "QQmlV4Function*"
QT_MOC_LITERAL(4, 49, 20), // "getDataAsArrayBuffer"
QT_MOC_LITERAL(5, 70, 20), // "acceptProposedAction"
QT_MOC_LITERAL(6, 91, 6), // "accept"
QT_MOC_LITERAL(7, 98, 1), // "x"
QT_MOC_LITERAL(8, 100, 1), // "y"
QT_MOC_LITERAL(9, 102, 6), // "source"
QT_MOC_LITERAL(10, 109, 4), // "keys"
QT_MOC_LITERAL(11, 114, 16), // "supportedActions"
QT_MOC_LITERAL(12, 131, 15), // "Qt::DropActions"
QT_MOC_LITERAL(13, 147, 14), // "proposedAction"
QT_MOC_LITERAL(14, 162, 6), // "action"
QT_MOC_LITERAL(15, 169, 14), // "Qt::DropAction"
QT_MOC_LITERAL(16, 184, 8), // "accepted"
QT_MOC_LITERAL(17, 193, 8), // "hasColor"
QT_MOC_LITERAL(18, 202, 7), // "hasHtml"
QT_MOC_LITERAL(19, 210, 7), // "hasText"
QT_MOC_LITERAL(20, 218, 7), // "hasUrls"
QT_MOC_LITERAL(21, 226, 9), // "colorData"
QT_MOC_LITERAL(22, 236, 4), // "html"
QT_MOC_LITERAL(23, 241, 4), // "text"
QT_MOC_LITERAL(24, 246, 4), // "urls"
QT_MOC_LITERAL(25, 251, 11), // "QList<QUrl>"
QT_MOC_LITERAL(26, 263, 7) // "formats"

    },
    "QQuickDropEvent\0getDataAsString\0\0"
    "QQmlV4Function*\0getDataAsArrayBuffer\0"
    "acceptProposedAction\0accept\0x\0y\0source\0"
    "keys\0supportedActions\0Qt::DropActions\0"
    "proposedAction\0action\0Qt::DropAction\0"
    "accepted\0hasColor\0hasHtml\0hasText\0"
    "hasUrls\0colorData\0html\0text\0urls\0"
    "QList<QUrl>\0formats"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickDropEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      17,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x02 /* Public */,
       4,    1,   37,    2, 0x02 /* Public */,
       5,    1,   40,    2, 0x02 /* Public */,
       6,    1,   43,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // properties: name, type, flags
       7, QMetaType::QReal, 0x00095001,
       8, QMetaType::QReal, 0x00095001,
       9, QMetaType::QObjectStar, 0x00095001,
      10, QMetaType::QStringList, 0x00095001,
      11, 0x80000000 | 12, 0x00095009,
      13, 0x80000000 | 12, 0x00095009,
      14, 0x80000000 | 15, 0x0009510f,
      16, QMetaType::Bool, 0x00095103,
      17, QMetaType::Bool, 0x00095001,
      18, QMetaType::Bool, 0x00095001,
      19, QMetaType::Bool, 0x00095001,
      20, QMetaType::Bool, 0x00095001,
      21, QMetaType::QVariant, 0x00095001,
      22, QMetaType::QString, 0x00095001,
      23, QMetaType::QString, 0x00095001,
      24, 0x80000000 | 25, 0x00095009,
      26, QMetaType::QStringList, 0x00095001,

       0        // eod
};

void QQuickDropEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickDropEvent *_t = static_cast<QQuickDropEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getDataAsString((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 1: _t->getDataAsArrayBuffer((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 2: _t->acceptProposedAction((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        case 3: _t->accept((*reinterpret_cast< QQmlV4Function*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickDropEvent *_t = static_cast<QQuickDropEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->source(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->keys(); break;
        case 4: *reinterpret_cast< Qt::DropActions*>(_v) = _t->supportedActions(); break;
        case 5: *reinterpret_cast< Qt::DropActions*>(_v) = _t->proposedAction(); break;
        case 6: *reinterpret_cast< Qt::DropAction*>(_v) = _t->action(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->accepted(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->hasColor(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->hasHtml(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->hasText(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->hasUrls(); break;
        case 12: *reinterpret_cast< QVariant*>(_v) = _t->colorData(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->html(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 15: *reinterpret_cast< QList<QUrl>*>(_v) = _t->urls(); break;
        case 16: *reinterpret_cast< QStringList*>(_v) = _t->formats(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickDropEvent *_t = static_cast<QQuickDropEvent *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setAction(*reinterpret_cast< Qt::DropAction*>(_v)); break;
        case 7: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QQuickDropEvent *_t = static_cast<QQuickDropEvent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 6: _t->resetAction(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickDropEvent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickDropEvent.data,
      qt_meta_data_QQuickDropEvent,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickDropEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickDropEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickDropEvent.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickDropEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 17;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QQuickDropAreaDrag_t {
    QByteArrayData data[7];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickDropAreaDrag_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickDropAreaDrag_t qt_meta_stringdata_QQuickDropAreaDrag = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQuickDropAreaDrag"
QT_MOC_LITERAL(1, 19, 15), // "positionChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "sourceChanged"
QT_MOC_LITERAL(4, 50, 1), // "x"
QT_MOC_LITERAL(5, 52, 1), // "y"
QT_MOC_LITERAL(6, 54, 6) // "source"

    },
    "QQuickDropAreaDrag\0positionChanged\0\0"
    "sourceChanged\0x\0y\0source"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickDropAreaDrag[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QReal, 0x00495001,
       5, QMetaType::QReal, 0x00495001,
       6, QMetaType::QObjectStar, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       1,

       0        // eod
};

void QQuickDropAreaDrag::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickDropAreaDrag *_t = static_cast<QQuickDropAreaDrag *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionChanged(); break;
        case 1: _t->sourceChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickDropAreaDrag::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDropAreaDrag::positionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickDropAreaDrag::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDropAreaDrag::sourceChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickDropAreaDrag *_t = static_cast<QQuickDropAreaDrag *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< QObject**>(_v) = _t->source(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickDropAreaDrag::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickDropAreaDrag.data,
      qt_meta_data_QQuickDropAreaDrag,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickDropAreaDrag::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickDropAreaDrag::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickDropAreaDrag.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickDropAreaDrag::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void QQuickDropAreaDrag::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickDropAreaDrag::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QQuickDropArea_t {
    QByteArrayData data[15];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickDropArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickDropArea_t qt_meta_stringdata_QQuickDropArea = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickDropArea"
QT_MOC_LITERAL(1, 15, 19), // "containsDragChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "keysChanged"
QT_MOC_LITERAL(4, 48, 13), // "sourceChanged"
QT_MOC_LITERAL(5, 62, 7), // "entered"
QT_MOC_LITERAL(6, 70, 16), // "QQuickDropEvent*"
QT_MOC_LITERAL(7, 87, 4), // "drag"
QT_MOC_LITERAL(8, 92, 6), // "exited"
QT_MOC_LITERAL(9, 99, 15), // "positionChanged"
QT_MOC_LITERAL(10, 115, 7), // "dropped"
QT_MOC_LITERAL(11, 123, 4), // "drop"
QT_MOC_LITERAL(12, 128, 12), // "containsDrag"
QT_MOC_LITERAL(13, 141, 4), // "keys"
QT_MOC_LITERAL(14, 146, 19) // "QQuickDropAreaDrag*"

    },
    "QQuickDropArea\0containsDragChanged\0\0"
    "keysChanged\0sourceChanged\0entered\0"
    "QQuickDropEvent*\0drag\0exited\0"
    "positionChanged\0dropped\0drop\0containsDrag\0"
    "keys\0QQuickDropAreaDrag*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickDropArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,
       9,    1,   56,    2, 0x06 /* Public */,
      10,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,   11,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00495001,
      13, QMetaType::QStringList, 0x00495103,
       7, 0x80000000 | 14, 0x00095409,

 // properties: notify_signal_id
       0,
       1,
       0,

       0        // eod
};

void QQuickDropArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickDropArea *_t = static_cast<QQuickDropArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->containsDragChanged(); break;
        case 1: _t->keysChanged(); break;
        case 2: _t->sourceChanged(); break;
        case 3: _t->entered((*reinterpret_cast< QQuickDropEvent*(*)>(_a[1]))); break;
        case 4: _t->exited(); break;
        case 5: _t->positionChanged((*reinterpret_cast< QQuickDropEvent*(*)>(_a[1]))); break;
        case 6: _t->dropped((*reinterpret_cast< QQuickDropEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickDropEvent* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickDropEvent* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickDropEvent* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickDropArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDropArea::containsDragChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickDropArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDropArea::keysChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickDropArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDropArea::sourceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickDropArea::*_t)(QQuickDropEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDropArea::entered)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickDropArea::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDropArea::exited)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickDropArea::*_t)(QQuickDropEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDropArea::positionChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickDropArea::*_t)(QQuickDropEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickDropArea::dropped)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickDropAreaDrag* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickDropArea *_t = static_cast<QQuickDropArea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->containsDrag(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->keys(); break;
        case 2: *reinterpret_cast< QQuickDropAreaDrag**>(_v) = _t->drag(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickDropArea *_t = static_cast<QQuickDropArea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setKeys(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickDropArea::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QQuickDropArea.data,
      qt_meta_data_QQuickDropArea,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickDropArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickDropArea::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickDropArea.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int QQuickDropArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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

// SIGNAL 0
void QQuickDropArea::containsDragChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickDropArea::keysChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickDropArea::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickDropArea::entered(QQuickDropEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QQuickDropArea::exited()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickDropArea::positionChanged(QQuickDropEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QQuickDropArea::dropped(QQuickDropEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
