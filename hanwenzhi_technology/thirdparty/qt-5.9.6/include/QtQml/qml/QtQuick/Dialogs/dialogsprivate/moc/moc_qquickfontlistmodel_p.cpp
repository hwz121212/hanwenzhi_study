/****************************************************************************
** Meta object code from reading C++ file 'qquickfontlistmodel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickfontlistmodel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickfontlistmodel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickFontListModel_t {
    QByteArrayData data[23];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickFontListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickFontListModel_t qt_meta_stringdata_QQuickFontListModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickFontListModel"
QT_MOC_LITERAL(1, 20, 20), // "scalableFontsChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 23), // "nonScalableFontsChanged"
QT_MOC_LITERAL(4, 66, 22), // "monospacedFontsChanged"
QT_MOC_LITERAL(5, 89, 24), // "proportionalFontsChanged"
QT_MOC_LITERAL(6, 114, 20), // "writingSystemChanged"
QT_MOC_LITERAL(7, 135, 15), // "rowCountChanged"
QT_MOC_LITERAL(8, 151, 16), // "setScalableFonts"
QT_MOC_LITERAL(9, 168, 3), // "arg"
QT_MOC_LITERAL(10, 172, 19), // "setNonScalableFonts"
QT_MOC_LITERAL(11, 192, 18), // "setMonospacedFonts"
QT_MOC_LITERAL(12, 211, 20), // "setProportionalFonts"
QT_MOC_LITERAL(13, 232, 3), // "get"
QT_MOC_LITERAL(14, 236, 8), // "QJSValue"
QT_MOC_LITERAL(15, 245, 5), // "index"
QT_MOC_LITERAL(16, 251, 10), // "pointSizes"
QT_MOC_LITERAL(17, 262, 13), // "writingSystem"
QT_MOC_LITERAL(18, 276, 13), // "scalableFonts"
QT_MOC_LITERAL(19, 290, 16), // "nonScalableFonts"
QT_MOC_LITERAL(20, 307, 15), // "monospacedFonts"
QT_MOC_LITERAL(21, 323, 17), // "proportionalFonts"
QT_MOC_LITERAL(22, 341, 5) // "count"

    },
    "QQuickFontListModel\0scalableFontsChanged\0"
    "\0nonScalableFontsChanged\0"
    "monospacedFontsChanged\0proportionalFontsChanged\0"
    "writingSystemChanged\0rowCountChanged\0"
    "setScalableFonts\0arg\0setNonScalableFonts\0"
    "setMonospacedFonts\0setProportionalFonts\0"
    "get\0QJSValue\0index\0pointSizes\0"
    "writingSystem\0scalableFonts\0"
    "nonScalableFonts\0monospacedFonts\0"
    "proportionalFonts\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickFontListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       6,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   80,    2, 0x0a /* Public */,
      10,    1,   83,    2, 0x0a /* Public */,
      11,    1,   86,    2, 0x0a /* Public */,
      12,    1,   89,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      13,    1,   92,    2, 0x02 /* Public */,
      16,    0,   95,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,

 // methods: parameters
    0x80000000 | 14, QMetaType::Int,   15,
    0x80000000 | 14,

 // properties: name, type, flags
      17, QMetaType::QString, 0x00495103,
      18, QMetaType::Bool, 0x00495103,
      19, QMetaType::Bool, 0x00495103,
      20, QMetaType::Bool, 0x00495103,
      21, QMetaType::Bool, 0x00495103,
      22, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       4,
       0,
       1,
       2,
       3,
       5,

       0        // eod
};

void QQuickFontListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickFontListModel *_t = static_cast<QQuickFontListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scalableFontsChanged(); break;
        case 1: _t->nonScalableFontsChanged(); break;
        case 2: _t->monospacedFontsChanged(); break;
        case 3: _t->proportionalFontsChanged(); break;
        case 4: _t->writingSystemChanged(); break;
        case 5: _t->rowCountChanged(); break;
        case 6: _t->setScalableFonts((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setNonScalableFonts((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setMonospacedFonts((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setProportionalFonts((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: { QJSValue _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        case 11: { QJSValue _r = _t->pointSizes();
            if (_a[0]) *reinterpret_cast< QJSValue*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickFontListModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFontListModel::scalableFontsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickFontListModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFontListModel::nonScalableFontsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickFontListModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFontListModel::monospacedFontsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickFontListModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFontListModel::proportionalFontsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickFontListModel::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFontListModel::writingSystemChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickFontListModel::*_t)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickFontListModel::rowCountChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickFontListModel *_t = static_cast<QQuickFontListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->writingSystem(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->scalableFonts(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->nonScalableFonts(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->monospacedFonts(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->proportionalFonts(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->count(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickFontListModel *_t = static_cast<QQuickFontListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWritingSystem(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setScalableFonts(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setNonScalableFonts(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setMonospacedFonts(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setProportionalFonts(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickFontListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_QQuickFontListModel.data,
      qt_meta_data_QQuickFontListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickFontListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickFontListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickFontListModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int QQuickFontListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
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
void QQuickFontListModel::scalableFontsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickFontListModel::nonScalableFontsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickFontListModel::monospacedFontsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickFontListModel::proportionalFontsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickFontListModel::writingSystemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickFontListModel::rowCountChanged()const
{
    QMetaObject::activate(const_cast< QQuickFontListModel *>(this), &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
