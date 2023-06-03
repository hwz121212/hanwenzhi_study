/****************************************************************************
** Meta object code from reading C++ file 'highlight.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../highlight.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'highlight.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlJSDebugger__Highlight_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlJSDebugger__Highlight_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlJSDebugger__Highlight_t qt_meta_stringdata_QmlJSDebugger__Highlight = {
    {
QT_MOC_LITERAL(0, 0, 24) // "QmlJSDebugger::Highlight"

    },
    "QmlJSDebugger::Highlight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlJSDebugger__Highlight[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QmlJSDebugger::Highlight::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QmlJSDebugger::Highlight::staticMetaObject = {
    { &QQuickPaintedItem::staticMetaObject, qt_meta_stringdata_QmlJSDebugger__Highlight.data,
      qt_meta_data_QmlJSDebugger__Highlight,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlJSDebugger::Highlight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlJSDebugger::Highlight::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlJSDebugger__Highlight.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int QmlJSDebugger::Highlight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QmlJSDebugger__SelectionHighlight_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlJSDebugger__SelectionHighlight_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlJSDebugger__SelectionHighlight_t qt_meta_stringdata_QmlJSDebugger__SelectionHighlight = {
    {
QT_MOC_LITERAL(0, 0, 33) // "QmlJSDebugger::SelectionHighl..."

    },
    "QmlJSDebugger::SelectionHighlight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlJSDebugger__SelectionHighlight[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QmlJSDebugger::SelectionHighlight::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QmlJSDebugger::SelectionHighlight::staticMetaObject = {
    { &Highlight::staticMetaObject, qt_meta_stringdata_QmlJSDebugger__SelectionHighlight.data,
      qt_meta_data_QmlJSDebugger__SelectionHighlight,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlJSDebugger::SelectionHighlight::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlJSDebugger::SelectionHighlight::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlJSDebugger__SelectionHighlight.stringdata0))
        return static_cast<void*>(this);
    return Highlight::qt_metacast(_clname);
}

int QmlJSDebugger::SelectionHighlight::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Highlight::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
