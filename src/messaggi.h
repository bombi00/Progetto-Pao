#ifndef MESSAGGI_H
#define MESSAGGI_H

#include <QObject>
#include <QMessageBox>

class Messaggi : public QObject
{
    Q_OBJECT
public:
    static void LoginError();
    static void LoginSuccess();
    static void RegError();
    static void RegSuccess();
    static void AddEleSuccess();
    static void AddQtaSuccess();
    static void AddQtaError();
    static void AddEleError();
    static void IdError();
    static void BuyError();
    static void BuySuccess();
    static void PreError();
    static void Ricarica();
    static void PassError();
    static void ChangeName();
    static void ChangeSur();
    static void ChangePassSuccess();

    Messaggi(QObject *parent = nullptr);
};

#endif // MESSAGGI_H
