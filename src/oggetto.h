#ifndef OGGETTO_H
#define OGGETTO_H

#include <QString>
#include <QSqlQuery>

class Oggetto {

private:
    QString id;
    QString titolo;
    unsigned short int anno;
    double costo;
    unsigned short int qta;

public:
    Oggetto(QString i="", QString t="", unsigned short int a=0, double c=0, unsigned short int q=1);
    virtual ~Oggetto()=default;

    QString getId() const;
    QString getTitolo() const;
    virtual double getCosto() const;
    unsigned short int getAnno() const;
    unsigned short int getQta() const;
    virtual void stampaDettagli() const;
    virtual void updateDelOgg(QString i) const =0;
    virtual int updateQtaOgg(QString i, unsigned short int q) const =0;

    void setId(const QString& nId);
    void setTitolo(const QString& nTitolo);
    void setCosto(const double& nCosto);
    void setAnno(const unsigned short int& nAnno);
    void setQta(const unsigned short int& nQta);
    void addQta(const unsigned short int& aQta);
    void sotQta();
};
#endif // OGGETTO_H
