/****************************************************************************
** Meta object code from reading C++ file 'v_imp_utente.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "v_imp_utente.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'v_imp_utente.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_V_Imp_Utente_t {
    const uint offsetsAndSize[24];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_V_Imp_Utente_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_V_Imp_Utente_t qt_meta_stringdata_V_Imp_Utente = {
    {
QT_MOC_LITERAL(0, 12), // "V_Imp_Utente"
QT_MOC_LITERAL(13, 19), // "onChangePassClicked"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 5), // "nPass"
QT_MOC_LITERAL(40, 5), // "vPass"
QT_MOC_LITERAL(46, 19), // "onChangeNameClicked"
QT_MOC_LITERAL(66, 4), // "name"
QT_MOC_LITERAL(71, 18), // "onChangeSurClicked"
QT_MOC_LITERAL(90, 3), // "sur"
QT_MOC_LITERAL(94, 17), // "changePassClicked"
QT_MOC_LITERAL(112, 17), // "changeNameClicked"
QT_MOC_LITERAL(130, 16) // "changeSurClicked"

    },
    "V_Imp_Utente\0onChangePassClicked\0\0"
    "nPass\0vPass\0onChangeNameClicked\0name\0"
    "onChangeSurClicked\0sur\0changePassClicked\0"
    "changeNameClicked\0changeSurClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_V_Imp_Utente[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,
       5,    1,   55,    2, 0x06,    4 /* Public */,
       7,    1,   58,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   61,    2, 0x0a,    8 /* Public */,
      10,    0,   62,    2, 0x0a,    9 /* Public */,
      11,    0,   63,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void V_Imp_Utente::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<V_Imp_Utente *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onChangePassClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->onChangeNameClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->onChangeSurClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->changePassClicked(); break;
        case 4: _t->changeNameClicked(); break;
        case 5: _t->changeSurClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (V_Imp_Utente::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V_Imp_Utente::onChangePassClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (V_Imp_Utente::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V_Imp_Utente::onChangeNameClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (V_Imp_Utente::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&V_Imp_Utente::onChangeSurClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject V_Imp_Utente::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_V_Imp_Utente.offsetsAndSize,
    qt_meta_data_V_Imp_Utente,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_V_Imp_Utente_t
, QtPrivate::TypeAndForceComplete<V_Imp_Utente, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *V_Imp_Utente::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *V_Imp_Utente::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_V_Imp_Utente.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int V_Imp_Utente::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void V_Imp_Utente::onChangePassClicked(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void V_Imp_Utente::onChangeNameClicked(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void V_Imp_Utente::onChangeSurClicked(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
