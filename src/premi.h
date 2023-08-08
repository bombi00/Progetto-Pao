#ifndef PREMI_H
#define PREMI_H

#include <QString>

class Premi {

private:
    QString id;
    QString nome;
    unsigned short int cPunti;
    unsigned short int qta;

public:
    Premi(QString i, QString n, unsigned short int c, unsigned short int q=1);

    QString getId() const;
    QString getNome() const;
    unsigned short int getCP() const;
    unsigned short int getQta() const;

    void setId(const QString& nId);
    void setNome(const QString& nNome);
    void setCP(const unsigned short int& nCPunti);
    void setQta(const unsigned short int& nQta);
    void addQta(const unsigned short int& aQta);
    void sotQta();
};

#endif // PREMI_H
