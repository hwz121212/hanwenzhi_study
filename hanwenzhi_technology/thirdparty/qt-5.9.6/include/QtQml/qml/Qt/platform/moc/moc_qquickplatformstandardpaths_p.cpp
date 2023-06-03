/****************************************************************************
** Meta object code from reading C++ file 'qquickplatformstandardpaths_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qquickplatformstandardpaths_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickplatformstandardpaths_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickPlatformStandardPaths_t {
    QByteArrayData data[18];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickPlatformStandardPaths_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickPlatformStandardPaths_t qt_meta_stringdata_QQuickPlatformStandardPaths = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QQuickPlatformStandardPaths"
QT_MOC_LITERAL(1, 28, 11), // "displayName"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 32), // "QStandardPaths::StandardLocation"
QT_MOC_LITERAL(4, 74, 4), // "type"
QT_MOC_LITERAL(5, 79, 14), // "findExecutable"
QT_MOC_LITERAL(6, 94, 14), // "executableName"
QT_MOC_LITERAL(7, 109, 5), // "paths"
QT_MOC_LITERAL(8, 115, 6), // "locate"
QT_MOC_LITERAL(9, 122, 8), // "fileName"
QT_MOC_LITERAL(10, 131, 29), // "QStandardPaths::LocateOptions"
QT_MOC_LITERAL(11, 161, 7), // "options"
QT_MOC_LITERAL(12, 169, 9), // "locateAll"
QT_MOC_LITERAL(13, 179, 11), // "QList<QUrl>"
QT_MOC_LITERAL(14, 191, 18), // "setTestModeEnabled"
QT_MOC_LITERAL(15, 210, 8), // "testMode"
QT_MOC_LITERAL(16, 219, 17), // "standardLocations"
QT_MOC_LITERAL(17, 237, 16) // "writableLocation"

    },
    "QQuickPlatformStandardPaths\0displayName\0"
    "\0QStandardPaths::StandardLocation\0"
    "type\0findExecutable\0executableName\0"
    "paths\0locate\0fileName\0"
    "QStandardPaths::LocateOptions\0options\0"
    "locateAll\0QList<QUrl>\0setTestModeEnabled\0"
    "testMode\0standardLocations\0writableLocation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickPlatformStandardPaths[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x02 /* Public */,
       5,    2,   67,    2, 0x02 /* Public */,
       5,    1,   72,    2, 0x22 /* Public | MethodCloned */,
       8,    3,   75,    2, 0x02 /* Public */,
       8,    2,   82,    2, 0x22 /* Public | MethodCloned */,
      12,    3,   87,    2, 0x02 /* Public */,
      12,    2,   94,    2, 0x22 /* Public | MethodCloned */,
      14,    1,   99,    2, 0x02 /* Public */,
      16,    1,  102,    2, 0x02 /* Public */,
      17,    1,  105,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QString, 0x80000000 | 3,    4,
    QMetaType::QUrl, QMetaType::QString, QMetaType::QStringList,    6,    7,
    QMetaType::QUrl, QMetaType::QString,    6,
    QMetaType::QUrl, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 10,    4,    9,   11,
    QMetaType::QUrl, 0x80000000 | 3, QMetaType::QString,    4,    9,
    0x80000000 | 13, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 10,    4,    9,   11,
    0x80000000 | 13, 0x80000000 | 3, QMetaType::QString,    4,    9,
    QMetaType::Void, QMetaType::Bool,   15,
    0x80000000 | 13, 0x80000000 | 3,    4,
    QMetaType::QUrl, 0x80000000 | 3,    4,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

void QQuickPlatformStandardPaths::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickPlatformStandardPaths *_t = static_cast<QQuickPlatformStandardPaths *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->displayName((*reinterpret_cast< QStandardPaths::StandardLocation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QUrl _r = _t->findExecutable((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 2: { QUrl _r = _t->findExecutable((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 3: { QUrl _r = _t->locate((*reinterpret_cast< QStandardPaths::StandardLocation(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QStandardPaths::LocateOptions(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 4: { QUrl _r = _t->locate((*reinterpret_cast< QStandardPaths::StandardLocation(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 5: { QList<QUrl> _r = _t->locateAll((*reinterpret_cast< QStandardPaths::StandardLocation(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QStandardPaths::LocateOptions(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QList<QUrl>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QList<QUrl> _r = _t->locateAll((*reinterpret_cast< QStandardPaths::StandardLocation(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<QUrl>*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->setTestModeEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: { QList<QUrl> _r = _t->standardLocations((*reinterpret_cast< QStandardPaths::StandardLocation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QUrl>*>(_a[0]) = std::move(_r); }  break;
        case 9: { QUrl _r = _t->writableLocation((*reinterpret_cast< QStandardPaths::StandardLocation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardPaths::StandardLocation >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardPaths::LocateOptions >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardPaths::StandardLocation >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardPaths::StandardLocation >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardPaths::LocateOptions >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardPaths::StandardLocation >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardPaths::StandardLocation >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardPaths::StandardLocation >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QStandardPaths::StandardLocation >(); break;
            }
            break;
        }
    }
}

static const QMetaObject * const qt_meta_extradata_QQuickPlatformStandardPaths[] = {
        &QStandardPaths::staticMetaObject,
    nullptr
};

const QMetaObject QQuickPlatformStandardPaths::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickPlatformStandardPaths.data,
      qt_meta_data_QQuickPlatformStandardPaths,  qt_static_metacall, qt_meta_extradata_QQuickPlatformStandardPaths, nullptr}
};


const QMetaObject *QQuickPlatformStandardPaths::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickPlatformStandardPaths::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickPlatformStandardPaths.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickPlatformStandardPaths::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
