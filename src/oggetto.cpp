#include "oggetto.h"
#include <iostream>

Oggetto::Oggetto(QString i, QString t, unsigned short int a, double c, unsigned short int q) : id(i), titolo(t), anno(a), costo(c), qta(q){}

QString Oggetto::getId() const {
    return id;
}

QString Oggetto::getTitolo() const {
    return titolo;
}

double Oggetto::getCosto() const
{
    return costo;
}

unsigned short int Oggetto::getAnno() const {
    return anno;
}

unsigned short Oggetto::getQta() const {
    return qta;
}

void Oggetto::stampaDettagli() const
{
    std::cout << id.toStdString() << " " << titolo.toStdString() << " " << anno << " " << costo << " " << qta << " ";
}

void Oggetto::setId(const QString &nId) {
    id = nId;
}

void Oggetto::setTitolo(const QString &nTitolo) {
    titolo = nTitolo;
}

void Oggetto::setCosto(const double &nCosto) {
    costo = nCosto;
}

void Oggetto::setAnno(const unsigned short int &nAnno) {
    anno = nAnno;
}

void Oggetto::setQta(const unsigned short &nQta) {
    qta = nQta;
}

void Oggetto::addQta(const unsigned short &aQta) {
    qta += aQta;
}

void Oggetto::sotQta() {
    qta = qta - 1;
}
