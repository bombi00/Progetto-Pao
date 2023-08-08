#ifndef FILM_H
#define FILM_H

#include "oggetto.h"

class Film : public Oggetto{

private:
    static double IVA;
    QString regista;
    unsigned short int durata;
    unsigned short int rated;

public:
    Film(QString i="", QString t="", QString reg="", unsigned short int a=0, unsigned short int d=0, unsigned short int r=0, double c=0, unsigned short int q=1);

    QString getRegista() const;
    unsigned short int getDurata() const;
    unsigned short int getRated() const;
    double getCosto() const override;
    void stampaDettagli() const override;
    void updateDelOgg(QString i) const override;
    int updateQtaOgg(QString i, unsigned short int q) const override;

    void setRegista(const QString& nRegista);
    void setDurata(const unsigned short int& nDurata);
    void setRated(const unsigned short int& nRated);
};

#endif // FILM_H
