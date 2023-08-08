#include "v_main.h"
#include "database.h"
#include <QTableWidgetItem>

V_Main::V_Main(QWidget *parent) : QMainWindow(parent){}

void V_Main::delFilClicked(QString id) {
    emit onDelFilClicked(id);
}

void V_Main::delMusClicked(QString id) {
    emit onDelMusClicked(id);
}

void V_Main::delLibClicked(QString id) {
    emit onDelLibClicked(id);
}

void V_Main::delPreClicked(QString id) {
    emit onDelPreClicked(id);
}

void V_Main::buyFilClicked(QString id) {
    emit onBuyFilClicked(id);
}

void V_Main::buyMusClicked(QString id) {
    emit onBuyMusClicked(id);
}

void V_Main::buyLibClicked(QString id) {
    emit onBuyLibClicked(id);
}

void V_Main::buyPreClicked(QString id) {
    emit onBuyPreClicked(id);
}

void V_Main::exitTriggered()
{
    emit onExitTriggered();
}

void V_Main::closeTriggered()
{
    emit onCloseTriggered();
}

void V_Main::keywordClicked()
{
    emit onKeywordClicked(tabella->currentText(), search->text(), tipo->currentText());
}


void V_Main::insLib(QTableWidget *table, bool admin) {
    Database d;
    Container ogg = d.getOggetti();
    std::list<Oggetto*> dbOgg = ogg.fillList();
    int k = 0;
    for(auto it = dbOgg.begin(); it != dbOgg.end(); it++){
        if(Libro* l = dynamic_cast<Libro*>(*it)){
            table->insertRow(k);
            table->setRowHeight(k, 50);
            QTableWidgetItem *id = new QTableWidgetItem(l->getId());
            table->setItem(k,0,id);
            QTableWidgetItem *titolo = new QTableWidgetItem(l->getTitolo());
            table->setItem(k,1,titolo);
            QTableWidgetItem *autore = new QTableWidgetItem(l->getAutore());
            table->setItem(k,2,autore);
            QTableWidgetItem *casa_edi = new QTableWidgetItem(l->getCaEdi());
            table->setItem(k,3,casa_edi);
            QTableWidgetItem *anno = new QTableWidgetItem(QString::number(l->getAnno()));
            table->setItem(k,4,anno);
            QTableWidgetItem *costo = new QTableWidgetItem(QString::number(l->getCosto(), 'f', 2) + "€");
            table->setItem(k,5,costo);
            QTableWidgetItem *qta = new QTableWidgetItem(QString::number(l->getQta()));
            table->setItem(k,6,qta);
            if (admin) {
                QPushButton* button = new QPushButton("Elimina");
                connect(button, &QPushButton::clicked, this, [this, table, k]() {
                    int row = k;
                    QTableWidgetItem* idItem = table->item(row, 0);
                    QString id = idItem->text();
                    delLibClicked(id);
                });
                table->setCellWidget(k,7,button);
            }
            else {
                QPushButton* button = new QPushButton("Acquista");
                connect(button, &QPushButton::clicked, this, [this, table, k]() {
                    int row = k;
                    QTableWidgetItem* idItem = table->item(row, 0);
                    QString id = idItem->text();
                    buyLibClicked(id);
                });
                table->setCellWidget(k,7,button);
            }
            k++;
        }
    }
}

void V_Main::insFil(QTableWidget *table, bool admin) {
    Database d;
    Container ogg = d.getOggetti();
    std::list<Oggetto*> dbOgg = ogg.fillList();
    int k = 0;
    for(auto it = dbOgg.begin(); it != dbOgg.end(); it++){
        if(Film* l = dynamic_cast<Film*>(*it)){
            table->insertRow(k);
            table->setRowHeight(k, 50);
            QTableWidgetItem *id = new QTableWidgetItem(l->getId());
            table->setItem(k,0,id);
            QTableWidgetItem *titolo = new QTableWidgetItem(l->getTitolo());
            table->setItem(k,1,titolo);
            QTableWidgetItem *regista = new QTableWidgetItem(l->getRegista());
            table->setItem(k,2,regista);
            QTableWidgetItem *anno = new QTableWidgetItem(QString::number(l->getAnno()));
            table->setItem(k,3,anno);
            QTableWidgetItem *durata = new QTableWidgetItem(QString::number(l->getDurata()));
            table->setItem(k,4,durata);
            QTableWidgetItem *rated = new QTableWidgetItem(QString::number(l->getRated()));
            table->setItem(k,5,rated);
            QTableWidgetItem *costo = new QTableWidgetItem(QString::number(l->getCosto(), 'f', 2) + "€");
            table->setItem(k,6,costo);
            QTableWidgetItem *qta = new QTableWidgetItem(QString::number(l->getQta()));
            table->setItem(k,7,qta);
            if (admin) {
                QPushButton* button = new QPushButton("Elimina");
                connect(button, &QPushButton::clicked, this, [this, table, k]() {
                    int row = k;
                    QTableWidgetItem* idItem = table->item(row, 0);
                    QString id = idItem->text();
                    delFilClicked(id);
                });
                table->setCellWidget(k,8,button);
            }
            else {
                QPushButton* button = new QPushButton("Acquista");
                connect(button, &QPushButton::clicked, this, [this, table, k]() {
                    int row = k;
                    QTableWidgetItem* idItem = table->item(row, 0);
                    QString id = idItem->text();
                    buyFilClicked(id);
                });
                table->setCellWidget(k,8,button);
            }
            k++;
        }
    }
}


void V_Main::insMus(QTableWidget *table, bool admin) {
    Database d;
    Container ogg = d.getOggetti();
    std::list<Oggetto*> dbOgg = ogg.fillList();
    int k = 0;
    for(auto it = dbOgg.begin(); it != dbOgg.end(); it++){
        if(Musica* l = dynamic_cast<Musica*>(*it)){
            table->insertRow(k);
            table->setRowHeight(k, 50);
            QTableWidgetItem *id = new QTableWidgetItem(l->getId());
            table->setItem(k,0,id);
            QTableWidgetItem *titolo = new QTableWidgetItem(l->getTitolo());
            table->setItem(k,1,titolo);
            QTableWidgetItem *artista = new QTableWidgetItem(l->getArtista());
            table->setItem(k,2,artista);
            QTableWidgetItem *anno = new QTableWidgetItem(QString::number(l->getAnno()));
            table->setItem(k,3,anno);
            QTableWidgetItem *genere = new QTableWidgetItem(l->getGenere());
            table->setItem(k,4,genere);
            QTableWidgetItem *tipo = new QTableWidgetItem(l->getTipo());
            table->setItem(k,5,tipo);
            QTableWidgetItem *costo = new QTableWidgetItem(QString::number(l->getCosto(), 'f', 2) + "€");
            table->setItem(k,6,costo);
            QTableWidgetItem *qta = new QTableWidgetItem(QString::number(l->getQta()));
            table->setItem(k,7,qta);
            if (admin){
                QPushButton* button = new QPushButton("Elimina");
                connect(button, &QPushButton::clicked, this, [this, table, k]() {
                    int row = k;
                    QTableWidgetItem* idItem = table->item(row, 0);
                    QString id = idItem->text();
                    delFilClicked(id);
                });
                table->setCellWidget(k,8,button);
            }
            else {
                QPushButton* button = new QPushButton("Acquista");
                connect(button, &QPushButton::clicked, this, [this, table, k]() {
                    int row = k;
                    QTableWidgetItem* idItem = table->item(row, 0);
                    QString id = idItem->text();
                    buyFilClicked(id);
                });
                table->setCellWidget(k,8,button);
            }
            k++;
        }
    }
}

void V_Main::insPre(QTableWidget *table, bool admin) {
    Database d;
    const std::list<Premi*> dbPre = d.getPre();
    int k = 0;
    for(auto it = dbPre.begin(); it != dbPre.end(); it++){
        table->insertRow(k);
        table->setRowHeight(k, 50);
        QTableWidgetItem *id = new QTableWidgetItem((*it)->getId());
        table->setItem(k,0,id);
        QTableWidgetItem *nome = new QTableWidgetItem((*it)->getNome());
        table->setItem(k,1,nome);
        QTableWidgetItem *cPunti = new QTableWidgetItem(QString::number((*it)->getCP()) + " Punti");
        table->setItem(k,2,cPunti);
        QTableWidgetItem *qta = new QTableWidgetItem(QString::number((*it)->getQta()));
        table->setItem(k,3,qta);
        if(admin){
            QPushButton* button = new QPushButton("Elimina");
            connect(button, &QPushButton::clicked, this, [this, table, k]() {
                int row = k;
                QTableWidgetItem* idItem = table->item(row, 0);
                QString id = idItem->text();
                delPreClicked(id);
            });
            table->setCellWidget(k,4,button);
        }
        else {
            QPushButton* button = new QPushButton("Acquista");
            connect(button, &QPushButton::clicked, this, [this, table, k]() {
                int row = k;
                QTableWidgetItem* idItem = table->item(row, 0);
                QString id = idItem->text();
                buyPreClicked(id);
            });
            table->setCellWidget(k,4,button);
        }
        k++;
    }
}

void V_Main::creaTable(bool admin) {
    tabDati = new QGroupBox(tr("Catalogo"));
    tabOggetto = new QTabWidget;
    libri = new QWidget;
    musica = new QWidget;
    film = new QWidget;
    premi = new QWidget;
    tabella = new QComboBox;
    tabella->addItem("Libro");
    tabella->addItem("Musica");
    tabella->addItem("Film");
    tipo = new QComboBox;
    tipo->addItem("ID");
    tipo->addItem("Titolo");
    search = new QLineEdit;
    cerca = new QPushButton("Cerca");
    connect(cerca, &QPushButton::clicked, this, &V_Main::keywordClicked);

    QHBoxLayout *keyword = new QHBoxLayout;
    keyword->addWidget(tabella);
    keyword->addWidget(search);
    keyword->addWidget(tipo);
    keyword->addWidget(cerca);

    QVBoxLayout *tab = new QVBoxLayout;

    tabOggetto->addTab(libri, "Libro");
    tabOggetto->addTab(musica, "Musica");
    tabOggetto->addTab(film, "Film");
    tabOggetto->addTab(premi, "Premi");

    tab->addLayout(keyword);
    tab->addWidget(tabOggetto);
    tabDati->setLayout(tab);

    QStringList headerLibro;
    if(admin)
        headerLibro << "ID" << "Titolo" << "Autore" << "Casa Editrice" << "Anno" << "Costo" << "Quantità" << "Elimina";
    else
        headerLibro << "ID" << "Titolo" << "Autore" << "Casa Editrice" << "Anno" << "Costo" << "Quantità" << "Acquista";
    libtab = new QTableWidget();
    libtab->setColumnCount(8);
    libtab->setEditTriggers(QAbstractItemView::NoEditTriggers);
    libtab->setHorizontalHeaderLabels(headerLibro);
    libtab->verticalHeader()->setVisible(false);
    libtab->setColumnWidth(1, 300);
    libtab->setColumnWidth(2, 300);
    libtab->setColumnWidth(3, 200);
    libtab->setColumnWidth(6, 100);
    libtab->setColumnWidth(7, 200);
    libtab->setSelectionMode(QAbstractItemView::NoSelection);
    libtab->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    libtab->setShowGrid(false);
    QVBoxLayout *liblay = new QVBoxLayout(libri);
    liblay->addWidget(libtab);
    insLib(libtab, admin);

    QStringList headerMusica;
    if(admin)
        headerMusica << "ID" << "Titolo" << "Artista" << "Anno" << "Genere" << "Tipo" << "Costo" << "Quantità" << "Elimina";
    else
        headerMusica << "ID" << "Titolo" << "Artista" << "Anno" << "Genere" << "Tipo" << "Costo" << "Quantità" << "Acquista";
    mustab = new QTableWidget();
    mustab->setColumnCount(9);
    QVBoxLayout *muslay = new QVBoxLayout(musica);
    muslay->addWidget(mustab);
    mustab->setEditTriggers(QAbstractItemView::NoEditTriggers);
    mustab->setHorizontalHeaderLabels(headerMusica);
    mustab->verticalHeader()->setVisible(false);
    mustab->setColumnWidth(1, 300);
    mustab->setColumnWidth(2, 300);
    mustab->setColumnWidth(7, 100);
    mustab->setColumnWidth(8, 200);
    mustab->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    mustab->setShowGrid(false);
    mustab->setSelectionMode(QAbstractItemView::NoSelection);
    insMus(mustab, admin);

    QStringList headerFilm;
    if(admin)
        headerFilm << "ID" << "Titolo" << "Regista" << "Anno" << "Durata" << "Rated" << "Costo" << "Quantità" << "Elimina";
    else
        headerFilm << "ID" << "Titolo" << "Regista" << "Anno" << "Durata" << "Rated" << "Costo" << "Quantità" << "Acquista";
    filtab = new QTableWidget();
    filtab->setColumnCount(9);
    QVBoxLayout *fillay = new QVBoxLayout(film);
    fillay->addWidget(filtab);
    filtab->resizeColumnToContents(7);
    filtab->setEditTriggers(QAbstractItemView::NoEditTriggers);
    filtab->setHorizontalHeaderLabels(headerFilm);
    filtab->verticalHeader()->setVisible(false);
    filtab->setColumnWidth(1, 300);
    filtab->setColumnWidth(2, 300);
    filtab->setColumnWidth(7, 100);
    filtab->setColumnWidth(8, 200);
    filtab->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    filtab->setShowGrid(false);
    filtab->setSelectionMode(QAbstractItemView::NoSelection);
    insFil(filtab, admin);

    QStringList headerPremi;
    if(admin)
        headerPremi << "ID" << "Nome" << "Costo Punti" << "Quantità" << "Elimina";
    else
        headerPremi << "ID" << "Nome" << "Costo Punti" << "Quantità" << "Acquista";
    pretab = new QTableWidget();
    pretab->setColumnCount(5);
    QVBoxLayout *prelay = new QVBoxLayout(premi);
    prelay->addWidget(pretab);
    pretab->setEditTriggers(QAbstractItemView::NoEditTriggers);
    pretab->setHorizontalHeaderLabels(headerPremi);
    pretab->verticalHeader()->setVisible(false);
    pretab->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    pretab->setShowGrid(false);
    pretab->setSelectionMode(QAbstractItemView::NoSelection);
    insPre(pretab, admin);
}

void V_Main::creaMenu()
{
    menubar = new QMenuBar(this);
    file = new QMenu("File", menubar);
    esci = new QAction("Cambia Utente", file);
    connect(esci, &QAction::triggered, this, &V_Main::exitTriggered);
    chiudi = new QAction("Esci", file);
    connect(chiudi, &QAction::triggered, this, &V_Main::closeTriggered);
    file->addAction(esci);
    file->addAction(chiudi);
    menubar->addMenu(file);
}

void V_Main::refreshFilTable(QTableWidget *table, bool admin) {
    table->clearContents();
    table->setRowCount(0);
    insFil(table, admin);
}

void V_Main::refreshMusTable(QTableWidget *table, bool admin) {
    table->clearContents();
    table->setRowCount(0);
    insMus(table, admin);
}

void V_Main::refreshPreTable(QTableWidget *table, bool admin) {
    table->clearContents();
    table->setRowCount(0);
    insPre(table, admin);
}

void V_Main::refreshLibTable(QTableWidget *table, bool admin) {
    table->clearContents();
    table->setRowCount(0);
    insLib(table, admin);
}

void V_Main::keywordSearch(QTableWidget *table, QString keyword, int tipo)
{
    if(tipo == 1){
        for (int riga = 0; riga < table->rowCount(); riga++) {
            QTableWidgetItem* item = table->item(riga, 0);
            if (item && item->text().contains(keyword, Qt::CaseInsensitive)) {
                table->setRowHidden(riga, false);
            } else {
                table->setRowHidden(riga, true);
            }
        }
    }
    if(tipo == 2){
        for (int riga = 0; riga < table->rowCount(); riga++) {
            QTableWidgetItem* item = table->item(riga, 1);
            if (item && item->text().contains(keyword, Qt::CaseInsensitive)) {
                table->setRowHidden(riga, false);
            } else {
                table->setRowHidden(riga, true);
            }
        }
    }
}

QTableWidget *V_Main::getFil() const {
    return filtab;
}

QTableWidget *V_Main::getMus() const {
    return mustab;
}

QTableWidget *V_Main::getPre() const {
    return pretab;
}

QTableWidget *V_Main::getLib() const {
    return libtab;
}
