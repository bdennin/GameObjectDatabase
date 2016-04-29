/****************************************************************************
** Meta object code from reading C++ file 'GameObjectDatabaseAdmin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GameObjectDatabaseAdmin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GameObjectDatabaseAdmin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GameObjectDatabaseAdmin_t {
    QByteArrayData data[10];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameObjectDatabaseAdmin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameObjectDatabaseAdmin_t qt_meta_stringdata_GameObjectDatabaseAdmin = {
    {
QT_MOC_LITERAL(0, 0, 23), // "GameObjectDatabaseAdmin"
QT_MOC_LITERAL(1, 24, 3), // "add"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "generate"
QT_MOC_LITERAL(4, 38, 6), // "logout"
QT_MOC_LITERAL(5, 45, 6), // "modify"
QT_MOC_LITERAL(6, 52, 6), // "remove"
QT_MOC_LITERAL(7, 59, 9), // "removeAll"
QT_MOC_LITERAL(8, 69, 4), // "view"
QT_MOC_LITERAL(9, 74, 9) // "viewTable"

    },
    "GameObjectDatabaseAdmin\0add\0\0generate\0"
    "logout\0modify\0remove\0removeAll\0view\0"
    "viewTable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameObjectDatabaseAdmin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GameObjectDatabaseAdmin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameObjectDatabaseAdmin *_t = static_cast<GameObjectDatabaseAdmin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->add(); break;
        case 1: _t->generate(); break;
        case 2: _t->logout(); break;
        case 3: _t->modify(); break;
        case 4: _t->remove(); break;
        case 5: _t->removeAll(); break;
        case 6: _t->view(); break;
        case 7: _t->viewTable(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject GameObjectDatabaseAdmin::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GameObjectDatabaseAdmin.data,
      qt_meta_data_GameObjectDatabaseAdmin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GameObjectDatabaseAdmin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameObjectDatabaseAdmin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GameObjectDatabaseAdmin.stringdata0))
        return static_cast<void*>(const_cast< GameObjectDatabaseAdmin*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GameObjectDatabaseAdmin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
