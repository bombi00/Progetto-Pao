#ifndef DATABASE_H
#define DATABASE_H

#include "container.h"
#include "oggetto.h"
#include "utente.h"
#include "premi.h"
#include "premi.h"
#include "libro.h"
#include "musica.h"
#include "film.h"
#include "utente.h"
#include "storico.h"
#include <iostream>
#include <list>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

class Database {

private:
    //std::list<Oggetto*> dbOgg;
    std::list<Utente*> dbCli;
    std::list<Premi*> dbPre;
    std::list<Storico*> dbSto;
    Container dbOgg;

public:
    Database();

    void loadOgg();
    void loadCli();
    void loadPre();
    void loadSto();

    void addLib(Libro* l);
    void addMus(Musica* m);
    void addFil(Film* f);
    void addCli(Utente* c);
    void addPre(Premi* p);
    void addSto(Storico *s);

    bool findOgg(QString id) const;
    bool findPre(QString id) const;
    bool findCli(QString e) const;

    void delOgg(QString id);
    void delCli(QString email);
    void delPre(QString id);

    int addQta(QString id, unsigned short int qta);
    bool checkId(QString id) const;
    int tryLogin(QString e, QString p);
    void buyOgg(QString id, Utente *u);
    void buyPre(QString id, Utente *u);
    void addSaldo(double s, Utente *u);
    void updateUser(Utente *u) const;
    void updateQtaOgg(Oggetto *o);
    void updateQtaPre(Premi *p);
    void addPunti(Utente *u, double c);

    void updateName(QString n, Utente *u);
    void updateSur(QString s, Utente *u);
    void updatePass(QString p, Utente *u);

    const std::list<Oggetto*> getOgg() const;
    const std::list<Utente*> getCli() const;
    const std::list<Premi*> getPre() const;
    const std::list<Storico*> getSto() const;
    const Container getOggetti() const;
    Utente* getOneCli(QString e) const;
    Oggetto *getOneOgg(QString id) const;
    Premi *getOnePre(QString id) const;
};

#endif // DATABASE_H
