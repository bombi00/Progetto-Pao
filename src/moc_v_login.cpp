/****************************************************************************
** Meta object code from reading C++ file 'v_login.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "v_login.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v_login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_V_Login_t {
    const uint offsetsAndSize[28];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_V_Login_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_V_Login_t qt_meta_stringdata_V_Login = {
    {
QT_MOC_LITERAL(0, 7), // "V_Login"
QT_MOC_LITERAL(8, 15), // "onAccediClicked"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 8), // "username"
QT_MOC_LITERAL(34, 8), // "password"
QT_MOC_LITERAL(43, 16), // "onAnnullaClicked"
QT_MOC_LITERAL(60, 19), // "onRegistratiClicked"
QT_MOC_LITERAL(80, 7), // "Utente*"
QT_MOC_LITERAL(88, 4), // "user"
QT_MOC_LITERAL(93, 9), // "tabResize"
QT_MOC_LITERAL(103, 1), // "i"
QT_MOC_LITERAL(105, 13), // "accediClicked"
QT_MOC_LITERAL(119, 14), // "annullaClicked"
QT_MOC_LITERAL(134, 17) // "registratiClicked"

    },
    "V_Login\0onAccediClicked\0\0username\0"
    "password\0onAnnullaClicked\0onRegistratiClicked\0"
    "Utente*\0user\0tabResize\0i\0accediClicked\0"
    "annullaClicked\0registratiClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_V_Login[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   56,    2, 0x06,    1 /* Public */,
       5,    0,   61,    2, 0x06,    4 /* Public */,
       6,    1,   62,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   65,    2, 0x08,    7 /* Private */,
      11,    0,   68,    2, 0x08,    9 /* Private */,
      12,    0,   69,    2, 0x08,   10 /* Private */,
      13,    0,   70,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void V_Login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<V_Login *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAccediClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->onAnnullaClicked(); break;
        case 2: _t->onRegistratiClicked((*reinterpret_cast< std::add_pointer_t<Utente*>>(_a[1]))); break;
        case 3: _t->tabResize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->accediClicked(); break;
        case 5: _t->annullaClicked(); break;
        case 6: _t->registratiClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (V_Login::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V_Login::onAccediClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (V_Login::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V_Login::onAnnullaClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (V_Login::*)(Utente * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V_Login::onRegistratiClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject V_Login::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_V_Login.offsetsAndSize,
    qt_meta_data_V_Login,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_V_Login_t
, QtPrivate::TypeAndForceComplete<V_Login, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Utente *, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *V_Login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *V_Login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_V_Login.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int V_Login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void V_Login::onAccediClicked(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void V_Login::onAnnullaClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void V_Login::onRegistratiClicked(Utente * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
