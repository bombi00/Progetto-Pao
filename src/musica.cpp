#include "musica.h"
#include <iostream>

Musica::Musica(QString i, QString t, QString ar, unsigned short int a, QString g, QString ty, double c, unsigned short int q) : Oggetto(i,t,a,c,q), artista(ar), genere(g), tipo(ty){}

double Musica::IVA = 0.22;

QString Musica::getArtista() const {
    return artista;
}

QString Musica::getGenere() const {
    return genere;
}

QString Musica::getTipo() const {
    return tipo;
}

double Musica::getCosto() const
{
    return Oggetto::getCosto() + Oggetto::getCosto()*IVA;
}

void Musica::stampaDettagli() const
{
    Oggetto::stampaDettagli();
    std::cout << artista.toStdString() << " " << genere.toStdString() << " " << tipo.toStdString();
}

void Musica::updateDelOgg(QString i) const
{
    QSqlQuery m;
    m.prepare("DELETE FROM Musica WHERE id = ?");
    m.addBindValue(i);
    m.exec();
}

int Musica::updateQtaOgg(QString i, unsigned short q) const
{
    QSqlQuery m;
    m.prepare("UPDATE Musica SET quantità = :value WHERE id = :id");
    m.bindValue(":value", q);
    m.bindValue(":id", i);
    m.exec();
    return 2;
}

void Musica::setArtista(const QString &nArtista) {
    artista = nArtista;
}

void Musica::setGenere(const QString &nGenere) {
    genere = nGenere;
}

void Musica::setTipo(const QString &nTipo) {
    tipo = nTipo;
}
