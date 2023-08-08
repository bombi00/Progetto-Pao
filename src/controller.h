#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include "database.h"
#include "v_login.h"
#include "v_app_a.h"
#include "v_app_u.h"
#include "v_main.h"
#include "v_imp_utente.h"

class Controller : public QObject
{
    Q_OBJECT
private:
    V_Login *viewLogin;
    Database *model;
    V_App_A *viewAdmin;
    V_App_U *viewUser;
    V_Main *viewMain;
    V_Imp_Utente *viewImp;

public slots:
    void accediClicked(QString user, QString pass);
    void annullaClicked();
    void registratiClicked(Utente *user);

    void addQtaClicked(QString id, unsigned short int qta);
    void addFilClicked(Film *f);
    void addMusClicked(Musica *m);
    void addLibClicked(Libro *l);
    void addPreClicked(Premi *p);
    void delFilClicked(QString id);
    void delMusClicked(QString id);
    void delLibClicked(QString id);
    void delPreClicked(QString id);

    void addSaldoClicked(double s);
    void buyFilClicked(QString id);
    void buyMusClicked(QString id);
    void buyLibClicked(QString id);
    void buyPreClicked(QString id);

    void exitTriggered();
    void deleteTriggered();
    void closeTriggered();
    void impUtTriggered();

    void keywordClickedA(QString t, QString k, QString ty);
    void keywordClickedU(QString t, QString k, QString ty);

    void changePassClicked(QString nPass, QString vPass);
    void changeNameClicked(QString name);
    void changeSurClicked(QString sur);
public:
    Controller(Database *m, V_Login *vL, V_App_A *vA, V_App_U *vU, V_Imp_Utente *vI, QObject *parent = nullptr);
    void setLogin();
};

#endif // C_LOGIN_H
