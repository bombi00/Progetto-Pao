#include "v_app_u.h"
#include "database.h"

V_App_U::V_App_U(Utente *u, QWidget *parent): V_Main(parent), utente(u){
    V_App_U::creaMenu();
    V_App_U::creaInfo();
    creaTable(false);
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(menubar);
    mainLayout->addWidget(gridUtente);
    mainLayout->addWidget(tabDati);
    QWidget *centralWidget = new QWidget;
    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);
    setWindowTitle(tr("QTShop"));
}

Utente *V_App_U::getUser() const {
    return utente;
}

QTableWidget *V_App_U::getSto() const {
    return stoTable;
}

void V_App_U::refreshInfo() {
    name->setText("Nome: " + utente->getNome());
    surname->setText("Cognome: " + utente->getCognome());
    money->setText("Saldo: " + QString::number(utente->getSaldo(), 'f', 2) + "€");
    points->setText("Punti: " + QString::number(utente->getPunti()));
}

void V_App_U::refreshStorico(QTableWidget *table) {
    table->clearContents();
    table->setRowCount(0);
    insStorico(table);
}

void V_App_U::setUtente(Utente *u) {
    utente = u;
}

void V_App_U::creaInfo()
{
    gridUtente = new QGroupBox("Utente");
    tabUtente = new QTabWidget(this);

    info = new QWidget;
    storico = new QWidget;

    gridUtente->setFixedHeight(200);

    iTab = new QVBoxLayout;
    tabUtente->addTab(info, "Informazioni");
    tabUtente->addTab(storico, "Storico");
    iTab->addWidget(tabUtente);
    gridUtente->setLayout(iTab);

    name = new QLabel("Nome: " + utente->getNome());
    name->setObjectName("name");
    surname = new QLabel("Cognome: " + utente->getCognome());
    surname->setObjectName("name");
    money = new QLabel("Saldo: " + QString::number(utente->getSaldo()) + "€");
    points = new QLabel("Punti: " + QString::number(utente->getPunti()));
    ricarica = new QPushButton("Ricarica");
    connect(ricarica, &QPushButton::clicked, this, &V_App_U::addSaldoClicked);
    qta = new QDoubleSpinBox;
    qta->setSuffix(" €");
    qta->setMaximum(1000);
    qta->setMinimum(1);

    userInfo = new QGridLayout(info);
    userInfo->addWidget(name,0,0);
    userInfo->addWidget(surname,1,0);
    userInfo->addWidget(money,0,1);
    userInfo->addWidget(points,1,1);
    userInfo->addWidget(ricarica,1,2,1,1);
    userInfo->addWidget(qta,0,2);

    QStringList headerStorico;
    headerStorico << "ID" << "Titolo" << "Prezzo";
    stoTable = new QTableWidget();
    stoTable->setColumnCount(3);
    stoTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    stoTable->setHorizontalHeaderLabels(headerStorico);
    stoTable->verticalHeader()->setVisible(false);
    stoTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    QVBoxLayout *stoLay = new QVBoxLayout(storico);
    stoLay->addWidget(stoTable);
    insStorico(stoTable);
}

void V_App_U::creaMenu()
{
    V_Main::creaMenu();
    elimina = new QAction("Elimina profilo", file);
    connect(elimina, &QAction::triggered, this, &V_App_U::deleteTriggered);
    file->addAction(elimina);
    edit = new QMenu("Edit", menubar);
    impUt = new QAction("Impostazioni Utente", edit);
    edit->addAction(impUt);
    connect(impUt, &QAction::triggered, this, &V_App_U::impUtTriggered);
    menubar->addMenu(edit);
}

void V_App_U::insStorico(QTableWidget *table) {
    Database d;
    const std::list<Storico*> dbSto = d.getSto();
    int k = 0;
    for(auto it = dbSto.begin(); it != dbSto.end(); it++){
        if((*it)->getIdU() == utente->getEmail()){
            table->insertRow(k);
            QTableWidgetItem *id = new QTableWidgetItem((*it)->getId());
            table->setItem(k,0,id);
            QTableWidgetItem *titolo = new QTableWidgetItem((*it)->getTitolo());
            table->setItem(k,1,titolo);
            QTableWidgetItem *costo = new QTableWidgetItem(QString::number((*it)->getCosto(), 'f', 2) + "€");
            table->setItem(k,2,costo);
            k++;
        }
    }
}

void V_App_U::addSaldoClicked() {
    emit onAddSaldoClicked(qta->value());
}

void V_App_U::deleteTriggered()
{
    emit onDeleteTriggered();
}

void V_App_U::impUtTriggered()
{
    emit onImpUtTriggered();
}


