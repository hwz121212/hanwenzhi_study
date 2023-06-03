/****************************************************************************
** Meta object code from reading C++ file 'qquickfiledialog_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickfiledialog_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickfiledialog_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickFileDialog_t {
    QByteArrayData data[12];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickFileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickFileDialog_t qt_meta_stringdata_QQuickFileDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QQuickFileDialog"
QT_MOC_LITERAL(1, 17, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 33, 11), // "contentItem"
QT_MOC_LITERAL(3, 45, 14), // "clearSelection"
QT_MOC_LITERAL(4, 60, 0), // ""
QT_MOC_LITERAL(5, 61, 12), // "addSelection"
QT_MOC_LITERAL(6, 74, 4), // "path"
QT_MOC_LITERAL(7, 79, 9), // "urlToPath"
QT_MOC_LITERAL(8, 89, 3), // "url"
QT_MOC_LITERAL(9, 93, 9), // "pathToUrl"
QT_MOC_LITERAL(10, 103, 10), // "pathFolder"
QT_MOC_LITERAL(11, 114, 11) // "QQuickItem*"

    },
    "QQuickFileDialog\0DefaultProperty\0"
    "contentItem\0clearSelection\0\0addSelection\0"
    "path\0urlToPath\0url\0pathToUrl\0pathFolder\0"
    "QQuickItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickFileDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       5,   16, // methods
       1,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,

 // slots: name, argc, parameters, tag, flags
       3,    0,   41,    4, 0x0a /* Public */,
       5,    1,   42,    4, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   45,    4, 0x01 /* Protected */,
       9,    1,   48,    4, 0x01 /* Protected */,
      10,    1,   51,    4, 0x01 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QUrl,    6,

 // methods: parameters
    QMetaType::QString, QMetaType::QUrl,    8,
    QMetaType::QUrl, QMetaType::QString,    6,
    QMetaType::QUrl, QMetaType::QString,    6,

 // properties: name, type, flags
       2, 0x80000000 | 11, 0x0009410b,

       0        // eod
};

void QQuickFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickFileDialog *_t = static_cast<QQuickFileDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clearSelection(); break;
        case 1: { bool _r = _t->addSelection((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->urlToPath((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QUrl _r = _t->pathToUrl((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 4: { QUrl _r = _t->pathFolder((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickFileDialog *_t = static_cast<QQuickFileDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->contentItem(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickFileDialog *_t = static_cast<QQuickFileDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContentItem(*reinterpret_cast< QQuickItem**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickFileDialog::staticMetaObject = {
    { &QQuickAbstractFileDialog::staticMetaObject, qt_meta_stringdata_QQuickFileDialog.data,
      qt_meta_data_QQuickFileDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickFileDialog.stringdata0))
        return static_cast<void*>(this);
    return QQuickAbstractFileDialog::qt_metacast(_clname);
}

int QQuickFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickAbstractFileDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
