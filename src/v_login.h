#ifndef V_LOGIN_H
#define V_LOGIN_H

#include <QWidget>
#include <QTabWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <iostream>
#include "utente.h"


class V_Login : public QWidget
{
    Q_OBJECT
private:
    QTabWidget *accesso;

    QGridLayout *accedi;
    QWidget *login;
    QLabel *lMail;
    QLabel *lPass;
    QLineEdit *lEditM;
    QLineEdit *lEditP;
    QPushButton *lAccedi;
    QPushButton *lAnnulla;

    QGridLayout *registrati;
    QWidget *signup;
    QLabel *sNome;
    QLabel *sCognome;
    QLabel *sMail;
    QLabel *sPass;
    QLineEdit *sEditN;
    QLineEdit *sEditC;
    QLineEdit *sEditM;
    QLineEdit *sEditP;
    QPushButton *sReg;
    QPushButton *sAnnulla;

private slots:
    void tabResize(int i);
    void accediClicked();
    void annullaClicked();
    void registratiClicked();
signals:
    void onAccediClicked(QString username, QString password);
    void onAnnullaClicked();
    void onRegistratiClicked(Utente *user);
public:
    V_Login(QWidget *parent = nullptr);
};

#endif // V_LOGIN_H
