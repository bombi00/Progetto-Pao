#include "v_login.h"
#include "messaggi.h"

void V_Login::tabResize(int i) {
    QSize size;
    if (i == 0) {
        size = QSize(500, 300);
    } else if (i == 1) {
        size = QSize(500, 450);
    }
    setFixedSize(size);
}

void V_Login::accediClicked() {

    QString username = lEditM->text();
    QString password = lEditP->text();

    emit onAccediClicked(username, password);
}

void V_Login::annullaClicked() {
    emit onAnnullaClicked();
}

void V_Login::registratiClicked() {
    if(sEditN->text() == "" || sEditC->text() == "" || sEditM->text() == "" || sEditP->text()== ""){
        Messaggi::RegError();
        return;
    }
    QString nome = sEditN->text();
    QString cognome = sEditC->text();
    QString email = sEditM->text();
    QString pass = sEditP->text();
    Utente *p = new Utente(nome,cognome,email,pass);

    emit onRegistratiClicked(p);
}

V_Login::V_Login(QWidget *parent): QWidget(parent) {
    accesso = new QTabWidget(this);

    login = new QWidget;
    signup = new QWidget;

    accesso->addTab(login, "Accedi");
    accesso->addTab(signup, "Registrati");

    connect(accesso, &QTabWidget::currentChanged, this, &V_Login::tabResize);

    accedi = new QGridLayout(login);
    registrati = new QGridLayout(signup);

    lMail = new QLabel("Email: ");
    lPass = new QLabel("Password: ");
    lEditM = new QLineEdit;
    lEditP = new QLineEdit;
    lEditP->setEchoMode(QLineEdit::Password);
    lAccedi = new QPushButton("Accedi");

    lAnnulla = new QPushButton("Annulla");

    accedi->addWidget(lMail,0,0);
    accedi->addWidget(lEditM,0,1);
    accedi->addWidget(lPass,1,0);
    accedi->addWidget(lEditP,1,1);
    accedi->addWidget(lAccedi,2,0);
    accedi->addWidget(lAnnulla,2,1);
    accedi->setColumnStretch(0, 1);
    accedi->setColumnStretch(1, 1);

    sNome = new QLabel("Nome: ");
    sCognome = new QLabel("Cognome: ");
    sMail = new QLabel("Email: ");
    sPass = new QLabel("Password: ");
    sEditN = new QLineEdit;
    sEditC = new QLineEdit;
    sEditM = new QLineEdit;
    sEditP = new QLineEdit;
    sEditP->setEchoMode(QLineEdit::Password);
    sReg = new QPushButton("Registrati");
    sAnnulla = new QPushButton("Annulla");

    registrati->addWidget(sNome,0,0);
    registrati->addWidget(sEditN,0,1);
    registrati->addWidget(sCognome,1,0);
    registrati->addWidget(sEditC,1,1);
    registrati->addWidget(sMail,2,0);
    registrati->addWidget(sEditM,2,1);
    registrati->addWidget(sPass,3,0);
    registrati->addWidget(sEditP,3,1);
    registrati->addWidget(sReg,4,0);
    registrati->addWidget(sAnnulla,4,1);
    registrati->setColumnStretch(0, 1);
    registrati->setColumnStretch(1, 1);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(accesso);
    setLayout(mainLayout);
    setWindowTitle("Login");

    connect(lAccedi, &QPushButton::clicked, this, &V_Login::accediClicked);
    connect(lAnnulla, &QPushButton::clicked, this, &V_Login::annullaClicked);
    connect(sAnnulla, &QPushButton::clicked, this, &V_Login::annullaClicked);
    connect(sReg, &QPushButton::clicked, this, &V_Login::registratiClicked);
}
