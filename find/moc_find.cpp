/****************************************************************************
** Meta object code from reading C++ file 'find.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "find.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'find.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Find_t {
    QByteArrayData data[9];
    char stringdata[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Find_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Find_t qt_meta_stringdata_Find = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Find"
QT_MOC_LITERAL(1, 5, 8), // "findNext"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 3), // "str"
QT_MOC_LITERAL(4, 19, 19), // "Qt::CaseSensitivity"
QT_MOC_LITERAL(5, 39, 2), // "cs"
QT_MOC_LITERAL(6, 42, 12), // "findPrevious"
QT_MOC_LITERAL(7, 55, 11), // "findClicked"
QT_MOC_LITERAL(8, 67, 16) // "enableFindButton"

    },
    "Find\0findNext\0\0str\0Qt::CaseSensitivity\0"
    "cs\0findPrevious\0findClicked\0"
    "enableFindButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Find[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       6,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   44,    2, 0x08 /* Private */,
       8,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Find::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Find *_t = static_cast<Find *>(_o);
        switch (_id) {
        case 0: _t->findNext((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 1: _t->findPrevious((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< Qt::CaseSensitivity(*)>(_a[2]))); break;
        case 2: _t->findClicked(); break;
        case 3: _t->enableFindButton((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Find::*_t)(const QString & , Qt::CaseSensitivity );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Find::findNext)) {
                *result = 0;
            }
        }
        {
            typedef void (Find::*_t)(const QString & , Qt::CaseSensitivity );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Find::findPrevious)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject Find::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Find.data,
      qt_meta_data_Find,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Find::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Find::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Find.stringdata))
        return static_cast<void*>(const_cast< Find*>(this));
    return QDialog::qt_metacast(_clname);
}

int Find::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Find::findNext(const QString & _t1, Qt::CaseSensitivity _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Find::findPrevious(const QString & _t1, Qt::CaseSensitivity _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE