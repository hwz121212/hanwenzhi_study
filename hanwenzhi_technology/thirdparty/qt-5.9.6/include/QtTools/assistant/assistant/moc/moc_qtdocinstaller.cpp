/****************************************************************************
** Meta object code from reading C++ file 'qtdocinstaller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtdocinstaller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtdocinstaller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtDocInstaller_t {
    QByteArrayData data[8];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtDocInstaller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtDocInstaller_t qt_meta_stringdata_QtDocInstaller = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QtDocInstaller"
QT_MOC_LITERAL(1, 15, 15), // "qchFileNotFound"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "component"
QT_MOC_LITERAL(4, 42, 21), // "registerDocumentation"
QT_MOC_LITERAL(5, 64, 11), // "absFileName"
QT_MOC_LITERAL(6, 76, 13), // "docsInstalled"
QT_MOC_LITERAL(7, 90, 16) // "newDocsInstalled"

    },
    "QtDocInstaller\0qchFileNotFound\0\0"
    "component\0registerDocumentation\0"
    "absFileName\0docsInstalled\0newDocsInstalled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtDocInstaller[] = {

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
       4,    2,   32,    2, 0x06 /* Public */,
       6,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    5,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void QtDocInstaller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtDocInstaller *_t = static_cast<QtDocInstaller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->qchFileNotFound((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->registerDocumentation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->docsInstalled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QtDocInstaller::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtDocInstaller::qchFileNotFound)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QtDocInstaller::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtDocInstaller::registerDocumentation)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QtDocInstaller::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtDocInstaller::docsInstalled)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QtDocInstaller::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QtDocInstaller.data,
      qt_meta_data_QtDocInstaller,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QtDocInstaller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtDocInstaller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtDocInstaller.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int QtDocInstaller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void QtDocInstaller::qchFileNotFound(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtDocInstaller::registerDocumentation(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtDocInstaller::docsInstalled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
