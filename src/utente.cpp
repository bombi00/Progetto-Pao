#include "utente.h"

Utente::Utente(QString n, QString c, QString e, QString p, double s, unsigned short int pt) : nome(n), cognome(c), email(e), password(p), saldo(s), punti(pt) {}

QString Utente::getNome() const {
    return nome;
}

QString Utente::getCognome() const {
    return cognome;
}

QString Utente::getEmail() const {
    return email;
}

QString Utente::getPassword() const {
    return password;
}

double Utente::getSaldo() const {
    return saldo;
}

unsigned short Utente::getPunti() const {
    return punti;
}

void Utente::setNome(const QString &nNome) {
    nome = nNome;
}

void Utente::setCognome(const QString &nCognome) {
    cognome = nCognome;
}

void Utente::setEmail(const QString &nEmail) {
    email = nEmail;
}

void Utente::setPassword(const QString &nPassword) {
    password = nPassword;
}

void Utente::setSaldo(const double &nSaldo) {
    saldo = nSaldo;
}

void Utente::SetPunti(const unsigned short &nPunti) {
    punti = nPunti;
}

void Utente::addSaldo(const double &aSaldo) {
    saldo += aSaldo;
}

void Utente::sotSaldo(const double &sSaldo) {
    saldo -= sSaldo;
}

void Utente::addPunti(const unsigned short &aPunti) {
    punti += aPunti;
}

void Utente::sotPunti(const unsigned short &sPunti) {
    punti -= sPunti;
}
