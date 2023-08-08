#ifndef MUSICA_H
#define MUSICA_H

#include "oggetto.h"

class Musica : public Oggetto {

private:
    static double IVA;
    QString artista;
    QString genere;
    QString tipo;

public:
    Musica(QString i="", QString t="", QString ar="", unsigned short int a=0, QString g="", QString ty="", double c=0, unsigned short int q=1);

    QString getArtista() const;
    QString getGenere() const;
    QString getTipo() const;
    double getCosto() const override;
    void stampaDettagli() const override;
    void updateDelOgg(QString i) const override;
    int updateQtaOgg(QString i, unsigned short int q) const override;

    void setArtista(const QString& nArtista);
    void setGenere(const QString& nGenere);
    void setTipo(const QString& nTipo);
};

#endif // MUSICA_H
