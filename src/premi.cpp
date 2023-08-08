#include "premi.h"

Premi::Premi(QString i, QString n, unsigned short int c, unsigned short int q): id(i), nome(n), cPunti(c), qta(q){}

QString Premi::getId() const {
    return id;
}

QString Premi::getNome() const {
    return nome;
}

unsigned short Premi::getCP() const {
    return cPunti;
}

unsigned short Premi::getQta() const {
    return qta;
}

void Premi::setId(const QString &nId) {
    id = nId;
}

void Premi::setNome(const QString &nNome) {
    nome = nNome;
}

void Premi::setCP(const unsigned short &nCPunti) {
    cPunti = nCPunti;
}

void Premi::setQta(const unsigned short &nQta) {
    qta = nQta;
}

void Premi::addQta(const unsigned short &aQta) {
    qta += aQta;
}

void Premi::sotQta() {
    qta--;
}
