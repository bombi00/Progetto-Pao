#include "v_app_a.h"

V_App_A::V_App_A(QWidget *parent) : V_Main(parent) {
    V_App_A::creaMenu();
    V_App_A::creaInfo();
    creaTable(true);
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(menubar);
    mainLayout->addWidget(gridAdmin);
    mainLayout->addWidget(tabDati);
    QWidget *centralWidget = new QWidget;
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);
    setWindowTitle(tr("QTShop Manager"));
}

void V_App_A::addQtaClicked() {
    emit onAddQtaClicked(eId->text(), qta->value());
}

void V_App_A::addFilClicked() {
    Film *f = new Film(fEId->text(), fETitolo->text(), fERegista->text(), fEAnno->value(), fEDurata->value(), fERated->currentText().toUInt(), fECosto->value(), fEQta->value());
    emit onAddFilClicked(f);
}

void V_App_A::addMusClicked() {
    Musica *m = new Musica(mEId->text(), mETitolo->text(), mEArtista->text(), mEAnno->value(), mEGenere->text(), mETipo->currentText(), mECosto->value(), mEQta->value());
    emit onAddMusClicked(m);
}

void V_App_A::addLibClicked() {
    Libro *l = new Libro(lEId->text(), lETitolo->text(), lEAutore->text(), lECaEdi->text(), lEAnno->value(), lECosto->value(), lEQta->value());
    emit onAddLibClicked(l);
}

void V_App_A::addPreClicked() {
    Premi *p = new Premi(pEId->text(), pENome->text(), pECPunti->value(), pEQta->value());
    emit onAddPreClicked(p);
}

void V_App_A::creaInfo() {
    gridAdmin = new QGroupBox("Utente");
    tabAdmin = new QTabWidget(this);
    gridAdmin->setFixedHeight(250);

    info = new QWidget;
    addFil = new QWidget;
    addMus = new QWidget;
    addLib = new QWidget;
    addPre = new QWidget;

    Tab = new QVBoxLayout;
    iTab = new QGridLayout(info);
    fTab = new QGridLayout(addFil);
    mTab = new QGridLayout(addMus);
    lTab = new QGridLayout(addLib);
    pTab = new QGridLayout(addPre);

    tabAdmin->addTab(info, "Informazioni");
    tabAdmin->addTab(addFil, "Aggiungi Film");
    tabAdmin->addTab(addMus, "Aggiungi Musica");
    tabAdmin->addTab(addLib, "Aggiungi Libro");
    tabAdmin->addTab(addPre, "Aggiungi Premi");

    Tab->addWidget(tabAdmin);
    gridAdmin->setLayout(Tab);

    name = new QLabel("Nome: Admin");
    name->setObjectName("name");
    surname =  new QLabel("Cognome: Admin");
    surname->setObjectName("name");
    qta = new QSpinBox;
    qta->setMinimum(1);
    addQta = new QLabel("Numero Articoli da aggiungere:");
    addQta->setAlignment(Qt::AlignRight);
    eId = new QLineEdit;
    id = new QLabel("Aggiungi ID dell'elemento a cui vuoi aggiungere la quantità:");
    id->setAlignment(Qt::AlignRight);
    okQta = new QPushButton("Aggiungi");
    connect(okQta, &QPushButton::clicked, this, &V_App_A::addQtaClicked);
    iTab->addWidget(name,0,0);
    iTab->addWidget(surname,1,0);
    iTab->addWidget(id,0,1);
    iTab->addWidget(eId,0,2);
    iTab->addWidget(addQta,1,1);
    iTab->addWidget(qta,1,2);
    iTab->addWidget(okQta,3,2,1,1);
    iTab->setColumnStretch(0, 2);
    iTab->setColumnStretch(1, 3);
    iTab->setColumnStretch(2, 2);

    fId = new QLabel("ID:");
    fTitolo = new QLabel("Titolo:");
    fRegista = new QLabel("Regista:");
    fAnno = new QLabel("Anno:");
    fAnno->setAlignment(Qt::AlignRight);
    fDurata = new QLabel("Durata:");
    fDurata->setAlignment(Qt::AlignRight);
    fRated = new QLabel("Rated:");
    fRated->setAlignment(Qt::AlignRight);
    fCosto = new QLabel("Costo:");
    fCosto->setAlignment(Qt::AlignRight);
    fQta = new QLabel("Quantità:");
    fQta->setAlignment(Qt::AlignRight);
    fEId = new QLineEdit;
    fETitolo = new QLineEdit;
    fERegista = new QLineEdit;
    fEAnno = new QSpinBox;
    fEAnno->setMinimum(1000);
    fEAnno->setMaximum(2023);
    fEDurata = new QSpinBox;
    fEDurata->setMinimum(1);
    fEDurata->setMaximum(400);
    fERated = new QComboBox;
    fERated->addItem("4");
    fERated->addItem("14");
    fERated->addItem("16");
    fERated->addItem("18");
    fECosto = new QDoubleSpinBox;
    fECosto->setMinimum(0);
    fECosto->setMaximum(200);
    fEQta = new QSpinBox;
    fEQta->setMinimum(1);
    fEQta->setMaximum(1000);
    fOk = new QPushButton("Aggiungi");
    fOk->setObjectName("fOk");
    connect(fOk, &QPushButton::clicked, this, &V_App_A::addFilClicked);
    fTab->addWidget(fId,0,0);
    fTab->addWidget(fTitolo,1,0);
    fTab->addWidget(fRegista,2,0);
    fTab->addWidget(fEId,0,1);
    fTab->addWidget(fETitolo,1,1);
    fTab->addWidget(fERegista,2,1);
    fTab->addWidget(fAnno,0,2);
    fTab->addWidget(fDurata,1,2);
    fTab->addWidget(fRated,2,2);
    fTab->addWidget(fEAnno,0,3);
    fTab->addWidget(fEDurata,1,3);
    fTab->addWidget(fERated,2,3);
    fTab->addWidget(fCosto,0,4);
    fTab->addWidget(fQta,1,4);
    fTab->addWidget(fECosto,0,5);
    fTab->addWidget(fEQta,1,5);
    fTab->addWidget(fOk,2,5,1,1);
    fTab->setColumnStretch(0, 2);
    fTab->setColumnStretch(1, 3);
    fTab->setColumnStretch(2, 2);
    fTab->setColumnStretch(3, 3);
    fTab->setColumnStretch(4, 2);
    fTab->setColumnStretch(5, 3);

    mId = new QLabel("ID:");
    mTitolo = new QLabel("Titolo:");
    mArtista = new QLabel("Artista:");
    mAnno = new QLabel("Anno:");
    mAnno->setAlignment(Qt::AlignRight);
    mGenere = new QLabel("Genere:");
    mGenere->setAlignment(Qt::AlignRight);
    mTipo = new QLabel("Tipo:");
    mTipo->setAlignment(Qt::AlignRight);
    mCosto = new QLabel("Costo:");
    mCosto->setAlignment(Qt::AlignRight);
    mQta = new QLabel("Quantità:");
    mQta->setAlignment(Qt::AlignRight);
    mEId = new QLineEdit;
    mETitolo = new QLineEdit;
    mEArtista = new QLineEdit;
    mEAnno = new QSpinBox;
    mEAnno->setMinimum(1000);
    mEAnno->setMaximum(2023);
    mEGenere = new QLineEdit;
    mETipo = new QComboBox;
    mETipo->addItem("CD");
    mETipo->addItem("Vinile");
    mECosto = new QDoubleSpinBox;
    mECosto->setMinimum(0);
    mECosto->setMaximum(200);
    mEQta = new QSpinBox;
    mEQta->setMinimum(1);
    mEQta->setMaximum(1000);
    mOk = new QPushButton("Aggiungi");
    mOk->setObjectName("mOk");
    connect(mOk, &QPushButton::clicked, this, &V_App_A::addMusClicked);
    mTab->addWidget(mId,0,0);
    mTab->addWidget(mTitolo,1,0);
    mTab->addWidget(mArtista,2,0);
    mTab->addWidget(mEId,0,1);
    mTab->addWidget(mETitolo,1,1);
    mTab->addWidget(mEArtista,2,1);
    mTab->addWidget(mAnno,0,2);
    mTab->addWidget(mGenere,1,2);
    mTab->addWidget(mTipo,2,2);
    mTab->addWidget(mEAnno,0,3);
    mTab->addWidget(mEGenere,1,3);
    mTab->addWidget(mETipo,2,3);
    mTab->addWidget(mCosto,0,4);
    mTab->addWidget(mQta,1,4);
    mTab->addWidget(mECosto,0,5);
    mTab->addWidget(mEQta,1,5);
    mTab->addWidget(mOk,2,5,1,1);
    mTab->setColumnStretch(0, 2);
    mTab->setColumnStretch(1, 3);
    mTab->setColumnStretch(2, 2);
    mTab->setColumnStretch(3, 3);
    mTab->setColumnStretch(4, 2);
    mTab->setColumnStretch(5, 3);

    lId = new QLabel("ID:");
    lTitolo = new QLabel("Titolo:");
    lAutore = new QLabel("Autore:");
    lCaEdi = new QLabel("Casa editrice:");
    lCaEdi->setAlignment(Qt::AlignRight);
    lAnno = new QLabel("Anno:");
    lAnno->setAlignment(Qt::AlignRight);
    lCosto = new QLabel("Costo:");
    lCosto->setAlignment(Qt::AlignRight);
    lQta = new QLabel("Quantità:");
    lQta->setAlignment(Qt::AlignRight);
    lEId = new QLineEdit;
    lETitolo = new QLineEdit;
    lEAutore = new QLineEdit;
    lECaEdi = new QLineEdit;
    lEAnno = new QSpinBox;
    lEAnno->setMinimum(1000);
    lEAnno->setMaximum(2023);
    lECosto = new QDoubleSpinBox;
    lECosto->setMinimum(0);
    lECosto->setMaximum(200);
    lEQta = new QSpinBox;
    lEQta->setMinimum(1);
    lEQta->setMaximum(1000);
    lOk = new QPushButton("Aggiungi");
    lOk->setObjectName("lOk");
    connect(lOk, &QPushButton::clicked, this, &V_App_A::addLibClicked);
    lTab->addWidget(lId,0,0);
    lTab->addWidget(lTitolo,1,0);
    lTab->addWidget(lAutore,2,0);
    lTab->addWidget(lEId,0,1);
    lTab->addWidget(lETitolo,1,1);
    lTab->addWidget(lEAutore,2,1);
    lTab->addWidget(lCaEdi,0,2);
    lTab->addWidget(lAnno,1,2);
    lTab->addWidget(lCosto,2,2);
    lTab->addWidget(lECaEdi,0,3);
    lTab->addWidget(lEAnno,1,3);
    lTab->addWidget(lECosto,2,3);
    lTab->addWidget(lQta,0,4);
    lTab->addWidget(lEQta,0,5);
    lTab->addWidget(lOk,1,5,1,1);
    lTab->setColumnStretch(0, 2);
    lTab->setColumnStretch(1, 3);
    lTab->setColumnStretch(2, 2);
    lTab->setColumnStretch(3, 3);
    lTab->setColumnStretch(4, 2);
    lTab->setColumnStretch(5, 3);

    pId = new QLabel("ID:");
    pNome = new QLabel("Nome:");
    pCPunti = new QLabel("Costo Punti:");
    pCPunti->setAlignment(Qt::AlignRight);
    pQta = new QLabel("Quantità:");
    pQta->setAlignment(Qt::AlignRight);
    pEId = new QLineEdit;
    pENome = new QLineEdit;
    pECPunti = new QSpinBox;
    pECPunti->setMinimum(1);
    pECPunti->setMaximum(1000);
    pEQta = new QSpinBox;
    pEQta->setMinimum(1);
    pEQta->setMaximum(1000);
    pOk = new QPushButton("Aggiungi");
    pOk->setObjectName("pOk");
    connect(pOk, &QPushButton::clicked, this, &V_App_A::addPreClicked);
    pTab->addWidget(pId,0,0);
    pTab->addWidget(pNome,1,0);
    pTab->addWidget(pEId,0,1);
    pTab->addWidget(pENome,1,1);
    pTab->addWidget(pCPunti,0,2);
    pTab->addWidget(pQta,1,2);
    pTab->addWidget(pECPunti,0,3);
    pTab->addWidget(pEQta,1,3);
    pTab->addWidget(pOk,0,4,1,1);
    pTab->setColumnStretch(0, 2);
    pTab->setColumnStretch(1, 3);
    pTab->setColumnStretch(2, 2);
    pTab->setColumnStretch(3, 3);
    pTab->setColumnStretch(4, 3);
}

void V_App_A::creaMenu()
{
    V_Main::creaMenu();
}
