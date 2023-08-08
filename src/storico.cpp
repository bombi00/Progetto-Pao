#include "storico.h"

Storico::Storico(QString iu, QString i, QString t, double c) : idU(iu), id(i), titolo(t), costo(c){}

QString Storico::getIdU() const {
    return idU;
}

QString Storico::getId() const {
    return id;
}

QString Storico::getTitolo() const {
    return titolo;
}

double Storico::getCosto() const {
    return costo;
}
