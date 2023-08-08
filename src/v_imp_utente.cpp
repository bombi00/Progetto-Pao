#include "v_imp_utente.h"

void V_Imp_Utente::changePassClicked()
{
    emit onChangePassClicked(eNPass->text() ,eVPass->text());
}

void V_Imp_Utente::changeNameClicked()
{
    emit onChangeNameClicked(eNName->text());
}

void V_Imp_Utente::changeSurClicked()
{
    emit onChangeSurClicked(eNSur->text());
}

V_Imp_Utente::V_Imp_Utente(QWidget *parent) : QWidget(parent) {
    impostazioni = new QTabWidget;
    nPass = new QWidget;
    nName = new QWidget;
    nSur = new QWidget;
    impostazioni->addTab(nPass, "Cambio Password");
    impostazioni->addTab(nName, "Cambio Nome");
    impostazioni->addTab(nSur, "Cambio Cognome");

    pass = new QGridLayout(nPass);
    name = new QGridLayout(nName);
    sur = new QGridLayout(nSur);

    lVPass = new QLabel("Inserire la vecchia Password:");
    lNPass = new QLabel("Inserire la nuova Password:");
    eVPass = new QLineEdit;
    eNPass = new QLineEdit;
    bPass = new QPushButton("Conferma");
    connect(bPass, &QPushButton::clicked, this, &V_Imp_Utente::changePassClicked);
    pass->addWidget(lVPass,0,0);
    pass->addWidget(eVPass,0,1);
    pass->addWidget(lNPass,1,0);
    pass->addWidget(eNPass,1,1);
    pass->addWidget(bPass,2,1);

    lNName = new QLabel("Inserire il nuovo Nome:");
    eNName = new QLineEdit;
    bName = new QPushButton("Conferma");
    connect(bName, &QPushButton::clicked, this, &V_Imp_Utente::changeNameClicked);
    name->addWidget(lNName,0,0);
    name->addWidget(eNName,0,1);
    name->addWidget(bName,1,1);

    lNSur = new QLabel("Inserire il nuovo Cognome:");
    eNSur = new QLineEdit;
    bSur = new QPushButton("Conferma");
    connect(bSur, &QPushButton::clicked, this, &V_Imp_Utente::changeSurClicked);
    sur->addWidget(lNSur,0,0);
    sur->addWidget(eNSur,0,1);
    sur->addWidget(bSur,1,1);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(impostazioni);
    setLayout(mainLayout);
    setWindowTitle("Impostazioni Utente");
}
