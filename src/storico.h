#ifndef STORICO_H
#define STORICO_H

#include <QString>

class Storico
{

private:
    QString idU;
    QString id;
    QString titolo;
    double costo;
public:
    Storico(QString iu, QString i, QString t, double c);

    QString getIdU() const;
    QString getId() const;
    QString getTitolo() const;
    double getCosto() const;
};

#endif // STORICO_H
