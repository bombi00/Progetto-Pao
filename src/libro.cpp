#include "libro.h"
#include <iostream>

Libro::Libro(QString i, QString t, QString aut, QString ce, unsigned short int a, double c, unsigned short int q) : Oggetto(i,t,a,c,q), autore(aut), casaEditrice(ce) {}

double Libro::IVA = 0.15;

QString Libro::getAutore() const {
    return autore;
}

QString Libro::getCaEdi() const {
    return casaEditrice;
}

double Libro::getCosto() const
{
    return Oggetto::getCosto() + Oggetto::getCosto()*IVA;
}

void Libro::stampaDettagli() const
{
    Oggetto::stampaDettagli();
    std::cout << autore.toStdString() << " " << casaEditrice.toStdString();
}

void Libro::updateDelOgg(QString i) const
{
    QSqlQuery f;
    f.prepare("DELETE FROM Libri WHERE id = ?");
    f.addBindValue(i);
    f.exec();
}

int Libro::updateQtaOgg(QString i, unsigned short q) const
{
    QSqlQuery l;
    l.prepare("UPDATE Libri SET quantità = :value WHERE id = :id");
    l.bindValue(":value", q);
    l.bindValue(":id", i);
    l.exec();
    return 3;
}

void Libro::setAutore(const QString &nAutore) {
    autore = nAutore;
}

void Libro::setCaEdi(const QString &nCasaEditrice) {
    casaEditrice = nCasaEditrice;
}
