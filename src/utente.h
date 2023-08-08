#ifndef UTENTE_H
#define UTENTE_H

#include<QString>

class Utente {

private:
    QString nome;
    QString cognome;
    QString email;
    QString password;
    double saldo;
    unsigned short int punti;

public:
    Utente(QString n="", QString c="", QString e="", QString p="", double s=0, unsigned short int pt=0);
    ~Utente()=default;

    QString getNome() const;
    QString getCognome() const;
    QString getEmail() const;
    QString getPassword() const;
    double getSaldo() const;
    unsigned short int getPunti() const;

    void setNome(const QString& nNome);
    void setCognome(const QString& nCognome);
    void setEmail(const QString& nEmail);
    void setPassword(const QString& nPassword);
    void setSaldo(const double& nSaldo);
    void SetPunti(const unsigned short int& nPunti);

    void addSaldo(const double& aSaldo);
    void sotSaldo(const double& sSaldo);
    void addPunti(const unsigned short int& aPunti);
    void sotPunti(const unsigned short int& sPunti);
};

#endif // UTENTE_H
