#include "film.h"
#include <iostream>

Film::Film(QString i, QString t, QString reg, unsigned short int a, unsigned short int d, unsigned short int r, double c, unsigned short int q): Oggetto(i,t,a,c,q), regista(reg), durata(d), rated(r){}

double Film::IVA = 0.22;

QString Film::getRegista() const {
    return regista;
}

unsigned short int Film::getDurata() const {
    return durata;
}

unsigned short int Film::getRated() const {
    return rated;
}

double Film::getCosto() const
{
    return Oggetto::getCosto() + Oggetto::getCosto()*IVA;
}

void Film::stampaDettagli() const
{
    Oggetto::stampaDettagli();
    std::cout << regista.toStdString() << " " << durata << " " << rated;
}

void Film::updateDelOgg(QString i) const
{
    QSqlQuery f;
    f.prepare("DELETE FROM Film WHERE id = ?");
    f.addBindValue(i);
    f.exec();
}

int Film::updateQtaOgg(QString i, unsigned short q) const
{
    QSqlQuery f;
    f.prepare("UPDATE Film SET quantità = :value WHERE id = :id");
    f.bindValue(":value", q);
    f.bindValue(":id", i);
    f.exec();
    return 1;
}

void Film::setRegista(const QString &nRegista) {
    regista = nRegista;
}

void Film::setDurata(const unsigned short int &nDurata) {
    durata = nDurata;
}

void Film::setRated(const unsigned short int &nRated) {
    rated = nRated;
}
