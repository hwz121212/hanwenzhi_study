/****************************************************************************
** Meta object code from reading C++ file 'qquickwebenginedownloaditem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../5.9.6/QtWebEngine/private/qquickwebenginedownloaditem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickwebenginedownloaditem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QQuickWebEngineDownloadItem_t {
    QByteArrayData data[63];
    char stringdata0[962];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWebEngineDownloadItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWebEngineDownloadItem_t qt_meta_stringdata_QQuickWebEngineDownloadItem = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QQuickWebEngineDownloadItem"
QT_MOC_LITERAL(1, 28, 12), // "stateChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 21), // "savePageFormatChanged"
QT_MOC_LITERAL(4, 64, 20), // "receivedBytesChanged"
QT_MOC_LITERAL(5, 85, 17), // "totalBytesChanged"
QT_MOC_LITERAL(6, 103, 15), // "mimeTypeChanged"
QT_MOC_LITERAL(7, 119, 11), // "pathChanged"
QT_MOC_LITERAL(8, 131, 11), // "typeChanged"
QT_MOC_LITERAL(9, 143, 22), // "interruptReasonChanged"
QT_MOC_LITERAL(10, 166, 6), // "accept"
QT_MOC_LITERAL(11, 173, 6), // "cancel"
QT_MOC_LITERAL(12, 180, 2), // "id"
QT_MOC_LITERAL(13, 183, 5), // "state"
QT_MOC_LITERAL(14, 189, 13), // "DownloadState"
QT_MOC_LITERAL(15, 203, 14), // "savePageFormat"
QT_MOC_LITERAL(16, 218, 14), // "SavePageFormat"
QT_MOC_LITERAL(17, 233, 10), // "totalBytes"
QT_MOC_LITERAL(18, 244, 13), // "receivedBytes"
QT_MOC_LITERAL(19, 258, 8), // "mimeType"
QT_MOC_LITERAL(20, 267, 4), // "path"
QT_MOC_LITERAL(21, 272, 4), // "type"
QT_MOC_LITERAL(22, 277, 12), // "DownloadType"
QT_MOC_LITERAL(23, 290, 15), // "interruptReason"
QT_MOC_LITERAL(24, 306, 23), // "DownloadInterruptReason"
QT_MOC_LITERAL(25, 330, 21), // "interruptReasonString"
QT_MOC_LITERAL(26, 352, 17), // "DownloadRequested"
QT_MOC_LITERAL(27, 370, 18), // "DownloadInProgress"
QT_MOC_LITERAL(28, 389, 17), // "DownloadCompleted"
QT_MOC_LITERAL(29, 407, 17), // "DownloadCancelled"
QT_MOC_LITERAL(30, 425, 19), // "DownloadInterrupted"
QT_MOC_LITERAL(31, 445, 17), // "UnknownSaveFormat"
QT_MOC_LITERAL(32, 463, 20), // "SingleHtmlSaveFormat"
QT_MOC_LITERAL(33, 484, 22), // "CompleteHtmlSaveFormat"
QT_MOC_LITERAL(34, 507, 18), // "MimeHtmlSaveFormat"
QT_MOC_LITERAL(35, 526, 8), // "NoReason"
QT_MOC_LITERAL(36, 535, 10), // "FileFailed"
QT_MOC_LITERAL(37, 546, 16), // "FileAccessDenied"
QT_MOC_LITERAL(38, 563, 11), // "FileNoSpace"
QT_MOC_LITERAL(39, 575, 15), // "FileNameTooLong"
QT_MOC_LITERAL(40, 591, 12), // "FileTooLarge"
QT_MOC_LITERAL(41, 604, 17), // "FileVirusInfected"
QT_MOC_LITERAL(42, 622, 18), // "FileTransientError"
QT_MOC_LITERAL(43, 641, 11), // "FileBlocked"
QT_MOC_LITERAL(44, 653, 23), // "FileSecurityCheckFailed"
QT_MOC_LITERAL(45, 677, 12), // "FileTooShort"
QT_MOC_LITERAL(46, 690, 16), // "FileHashMismatch"
QT_MOC_LITERAL(47, 707, 13), // "NetworkFailed"
QT_MOC_LITERAL(48, 721, 14), // "NetworkTimeout"
QT_MOC_LITERAL(49, 736, 19), // "NetworkDisconnected"
QT_MOC_LITERAL(50, 756, 17), // "NetworkServerDown"
QT_MOC_LITERAL(51, 774, 21), // "NetworkInvalidRequest"
QT_MOC_LITERAL(52, 796, 12), // "ServerFailed"
QT_MOC_LITERAL(53, 809, 16), // "ServerBadContent"
QT_MOC_LITERAL(54, 826, 18), // "ServerUnauthorized"
QT_MOC_LITERAL(55, 845, 17), // "ServerCertProblem"
QT_MOC_LITERAL(56, 863, 15), // "ServerForbidden"
QT_MOC_LITERAL(57, 879, 17), // "ServerUnreachable"
QT_MOC_LITERAL(58, 897, 12), // "UserCanceled"
QT_MOC_LITERAL(59, 910, 10), // "Attachment"
QT_MOC_LITERAL(60, 921, 17), // "DownloadAttribute"
QT_MOC_LITERAL(61, 939, 13), // "UserRequested"
QT_MOC_LITERAL(62, 953, 8) // "SavePage"

    },
    "QQuickWebEngineDownloadItem\0stateChanged\0"
    "\0savePageFormatChanged\0receivedBytesChanged\0"
    "totalBytesChanged\0mimeTypeChanged\0"
    "pathChanged\0typeChanged\0interruptReasonChanged\0"
    "accept\0cancel\0id\0state\0DownloadState\0"
    "savePageFormat\0SavePageFormat\0totalBytes\0"
    "receivedBytes\0mimeType\0path\0type\0"
    "DownloadType\0interruptReason\0"
    "DownloadInterruptReason\0interruptReasonString\0"
    "DownloadRequested\0DownloadInProgress\0"
    "DownloadCompleted\0DownloadCancelled\0"
    "DownloadInterrupted\0UnknownSaveFormat\0"
    "SingleHtmlSaveFormat\0CompleteHtmlSaveFormat\0"
    "MimeHtmlSaveFormat\0NoReason\0FileFailed\0"
    "FileAccessDenied\0FileNoSpace\0"
    "FileNameTooLong\0FileTooLarge\0"
    "FileVirusInfected\0FileTransientError\0"
    "FileBlocked\0FileSecurityCheckFailed\0"
    "FileTooShort\0FileHashMismatch\0"
    "NetworkFailed\0NetworkTimeout\0"
    "NetworkDisconnected\0NetworkServerDown\0"
    "NetworkInvalidRequest\0ServerFailed\0"
    "ServerBadContent\0ServerUnauthorized\0"
    "ServerCertProblem\0ServerForbidden\0"
    "ServerUnreachable\0UserCanceled\0"
    "Attachment\0DownloadAttribute\0UserRequested\0"
    "SavePage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWebEngineDownloadItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,   84, // properties
       4,  134, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x86 /* Public | MethodRevisioned */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x86 /* Public | MethodRevisioned */,
       7,    0,   79,    2, 0x06 /* Public */,
       8,    0,   80,    2, 0x86 /* Public | MethodRevisioned */,
       9,    0,   81,    2, 0x86 /* Public | MethodRevisioned */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   82,    2, 0x02 /* Public */,
      11,    0,   83,    2, 0x02 /* Public */,

 // signals: revision
       0,
       2,
       0,
       0,
       1,
       0,
       3,
       4,

 // methods: revision
       0,
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::UInt, 0x00095c01,
      13, 0x80000000 | 14, 0x00495809,
      15, 0x80000000 | 16, 0x00c9590b,
      17, QMetaType::LongLong, 0x00495801,
      18, QMetaType::LongLong, 0x00495801,
      19, QMetaType::QString, 0x00c95801,
      20, QMetaType::QString, 0x00495903,
      21, 0x80000000 | 22, 0x00c95809,
      23, 0x80000000 | 24, 0x00c95809,
      25, QMetaType::QString, 0x00c95801,

 // properties: notify_signal_id
       0,
       0,
       1,
       3,
       2,
       4,
       5,
       6,
       7,
       7,

 // properties: revision
       0,
       0,
       2,
       0,
       0,
       1,
       0,
       3,
       4,
       4,

 // enums: name, flags, count, data
      14, 0x0,    5,  150,
      16, 0x0,    4,  160,
      24, 0x0,   24,  168,
      22, 0x0,    4,  216,

 // enum data: key, value
      26, uint(QQuickWebEngineDownloadItem::DownloadRequested),
      27, uint(QQuickWebEngineDownloadItem::DownloadInProgress),
      28, uint(QQuickWebEngineDownloadItem::DownloadCompleted),
      29, uint(QQuickWebEngineDownloadItem::DownloadCancelled),
      30, uint(QQuickWebEngineDownloadItem::DownloadInterrupted),
      31, uint(QQuickWebEngineDownloadItem::UnknownSaveFormat),
      32, uint(QQuickWebEngineDownloadItem::SingleHtmlSaveFormat),
      33, uint(QQuickWebEngineDownloadItem::CompleteHtmlSaveFormat),
      34, uint(QQuickWebEngineDownloadItem::MimeHtmlSaveFormat),
      35, uint(QQuickWebEngineDownloadItem::NoReason),
      36, uint(QQuickWebEngineDownloadItem::FileFailed),
      37, uint(QQuickWebEngineDownloadItem::FileAccessDenied),
      38, uint(QQuickWebEngineDownloadItem::FileNoSpace),
      39, uint(QQuickWebEngineDownloadItem::FileNameTooLong),
      40, uint(QQuickWebEngineDownloadItem::FileTooLarge),
      41, uint(QQuickWebEngineDownloadItem::FileVirusInfected),
      42, uint(QQuickWebEngineDownloadItem::FileTransientError),
      43, uint(QQuickWebEngineDownloadItem::FileBlocked),
      44, uint(QQuickWebEngineDownloadItem::FileSecurityCheckFailed),
      45, uint(QQuickWebEngineDownloadItem::FileTooShort),
      46, uint(QQuickWebEngineDownloadItem::FileHashMismatch),
      47, uint(QQuickWebEngineDownloadItem::NetworkFailed),
      48, uint(QQuickWebEngineDownloadItem::NetworkTimeout),
      49, uint(QQuickWebEngineDownloadItem::NetworkDisconnected),
      50, uint(QQuickWebEngineDownloadItem::NetworkServerDown),
      51, uint(QQuickWebEngineDownloadItem::NetworkInvalidRequest),
      52, uint(QQuickWebEngineDownloadItem::ServerFailed),
      53, uint(QQuickWebEngineDownloadItem::ServerBadContent),
      54, uint(QQuickWebEngineDownloadItem::ServerUnauthorized),
      55, uint(QQuickWebEngineDownloadItem::ServerCertProblem),
      56, uint(QQuickWebEngineDownloadItem::ServerForbidden),
      57, uint(QQuickWebEngineDownloadItem::ServerUnreachable),
      58, uint(QQuickWebEngineDownloadItem::UserCanceled),
      59, uint(QQuickWebEngineDownloadItem::Attachment),
      60, uint(QQuickWebEngineDownloadItem::DownloadAttribute),
      61, uint(QQuickWebEngineDownloadItem::UserRequested),
      62, uint(QQuickWebEngineDownloadItem::SavePage),

       0        // eod
};

void QQuickWebEngineDownloadItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickWebEngineDownloadItem *_t = static_cast<QQuickWebEngineDownloadItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged(); break;
        case 1: _t->savePageFormatChanged(); break;
        case 2: _t->receivedBytesChanged(); break;
        case 3: _t->totalBytesChanged(); break;
        case 4: _t->mimeTypeChanged(); break;
        case 5: _t->pathChanged(); break;
        case 6: _t->typeChanged(); break;
        case 7: _t->interruptReasonChanged(); break;
        case 8: _t->accept(); break;
        case 9: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (QQuickWebEngineDownloadItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWebEngineDownloadItem::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickWebEngineDownloadItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWebEngineDownloadItem::savePageFormatChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickWebEngineDownloadItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWebEngineDownloadItem::receivedBytesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickWebEngineDownloadItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWebEngineDownloadItem::totalBytesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickWebEngineDownloadItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWebEngineDownloadItem::mimeTypeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickWebEngineDownloadItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWebEngineDownloadItem::pathChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickWebEngineDownloadItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWebEngineDownloadItem::typeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickWebEngineDownloadItem::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QQuickWebEngineDownloadItem::interruptReasonChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickWebEngineDownloadItem *_t = static_cast<QQuickWebEngineDownloadItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< DownloadState*>(_v) = _t->state(); break;
        case 2: *reinterpret_cast< SavePageFormat*>(_v) = _t->savePageFormat(); break;
        case 3: *reinterpret_cast< qint64*>(_v) = _t->totalBytes(); break;
        case 4: *reinterpret_cast< qint64*>(_v) = _t->receivedBytes(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->mimeType(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->path(); break;
        case 7: *reinterpret_cast< DownloadType*>(_v) = _t->type(); break;
        case 8: *reinterpret_cast< DownloadInterruptReason*>(_v) = _t->interruptReason(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->interruptReasonString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickWebEngineDownloadItem *_t = static_cast<QQuickWebEngineDownloadItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setSavePageFormat(*reinterpret_cast< SavePageFormat*>(_v)); break;
        case 6: _t->setPath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickWebEngineDownloadItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickWebEngineDownloadItem.data,
      qt_meta_data_QQuickWebEngineDownloadItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QQuickWebEngineDownloadItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWebEngineDownloadItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWebEngineDownloadItem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QQuickWebEngineDownloadItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickWebEngineDownloadItem::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QQuickWebEngineDownloadItem::savePageFormatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QQuickWebEngineDownloadItem::receivedBytesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QQuickWebEngineDownloadItem::totalBytesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QQuickWebEngineDownloadItem::mimeTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QQuickWebEngineDownloadItem::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QQuickWebEngineDownloadItem::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QQuickWebEngineDownloadItem::interruptReasonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
