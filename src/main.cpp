#include <iostream>
#include <QApplication>
#include <QString>
#include <QDebug>
#include <QIcon>
#include <iostream>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDir>
#include <QFile>
#include "database.h"
#include "v_login.h"
#include "controller.h"
#include "v_app_a.h"
#include "v_app_u.h"
#include "v_imp_utente.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QFile styleFile(":/resources/res/style.qss"); // Percorso al tuo file CSS
    styleFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleFile.readAll());
    a.setStyleSheet(styleSheet);

    QIcon icon(":/resources/res/logo.png");
    a.setWindowIcon(icon);

    QString path = "./database.sqlite";

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);

    if (!db.open()) {
        qDebug() << "Failed to connect to database:" << db.lastError().text();
        return 1;
    }
    Utente *utente = new Utente();
    Database *database = new Database();
    V_Login *login = new V_Login();
    V_App_A *admin = new V_App_A();
    V_App_U *user = new V_App_U(utente);
    V_Imp_Utente *imp = new V_Imp_Utente();
    Controller *controller = new Controller(database, login, admin, user, imp);

    controller->setLogin();
    return a.exec();
}
