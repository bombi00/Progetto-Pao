#ifndef LIBRO_H
#define LIBRO_H

#include "oggetto.h"

class Libro : public Oggetto{

private:
    static double IVA;
    QString autore;
    QString casaEditrice;

public:
    Libro(QString i="", QString t="", QString aut="", QString ce="", unsigned short int a=0, double c=0, unsigned short int q=1);

    QString getAutore() const;
    QString getCaEdi() const;
    double getCosto() const override;
    void stampaDettagli() const override;
    void updateDelOgg(QString i) const override;
    int updateQtaOgg(QString i, unsigned short int q) const override;

    void setAutore(const QString& nAutore);
    void setCaEdi(const QString& nCasaEditrice);
};

#endif // LIBRO_H
