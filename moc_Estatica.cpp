/****************************************************************************
** Meta object code from reading C++ file 'Estatica.h'
**
** Created: Wed 9. Nov 16:11:20 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Estatica.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Estatica.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Estatica[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      28,    9,    9,    9, 0x08,
      50,    9,    9,    9, 0x08,
      67,   61,    9,    9, 0x08,
      97,    9,    9,    9, 0x08,
     118,    9,    9,    9, 0x08,
     133,    9,    9,    9, 0x08,
     148,    9,    9,    9, 0x08,
     163,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Estatica[] = {
    "Estatica\0\0AgregarCpuntual()\0"
    "AgregarCdistribuida()\0Calcular()\0event\0"
    "salirypreguntar(QCloseEvent*)\0"
    "ingresarparametros()\0botonperfilL()\0"
    "botonperfilI()\0botonperfilu()\0"
    "botonperfilc()\0"
};

void Estatica::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Estatica *_t = static_cast<Estatica *>(_o);
        switch (_id) {
        case 0: _t->AgregarCpuntual(); break;
        case 1: _t->AgregarCdistribuida(); break;
        case 2: _t->Calcular(); break;
        case 3: _t->salirypreguntar((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 4: _t->ingresarparametros(); break;
        case 5: _t->botonperfilL(); break;
        case 6: _t->botonperfilI(); break;
        case 7: _t->botonperfilu(); break;
        case 8: _t->botonperfilc(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Estatica::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Estatica::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Estatica,
      qt_meta_data_Estatica, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Estatica::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Estatica::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Estatica::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Estatica))
        return static_cast<void*>(const_cast< Estatica*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Estatica::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
