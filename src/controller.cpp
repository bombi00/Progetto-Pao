#include "controller.h"
#include "messaggi.h"

Controller::Controller(Database *m, V_Login *vL, V_App_A *vA, V_App_U *vU, V_Imp_Utente *vI, QObject *parent): QObject(parent), viewLogin(vL), model(m), viewAdmin(vA), viewUser(vU), viewImp(vI) {
    //controller Login
    connect(viewLogin, &V_Login::onAccediClicked, this, &Controller::accediClicked);
    connect(viewLogin, &V_Login::onAnnullaClicked, this, &Controller::annullaClicked);
    connect(viewLogin, &V_Login::onRegistratiClicked, this, &Controller::registratiClicked);

    //controller Admin
    connect(viewAdmin, &V_App_A::onAddQtaClicked, this, &Controller::addQtaClicked);
    connect(viewAdmin, &V_App_A::onAddFilClicked, this, &Controller::addFilClicked);
    connect(viewAdmin, &V_App_A::onAddMusClicked, this, &Controller::addMusClicked);
    connect(viewAdmin, &V_App_A::onAddLibClicked, this, &Controller::addLibClicked);
    connect(viewAdmin, &V_App_A::onAddPreClicked, this, &Controller::addPreClicked);
    connect(viewAdmin, &V_Main::onDelFilClicked, this, &Controller::delFilClicked);
    connect(viewAdmin, &V_Main::onDelMusClicked, this, &Controller::delMusClicked);
    connect(viewAdmin, &V_Main::onDelLibClicked, this, &Controller::delLibClicked);
    connect(viewAdmin, &V_Main::onDelPreClicked, this, &Controller::delPreClicked);
    connect(viewAdmin, &V_Main::onExitTriggered, this, &Controller::exitTriggered);
    connect(viewAdmin, &V_Main::onCloseTriggered, this, &Controller::closeTriggered);
    connect(viewAdmin, &V_Main::onKeywordClicked, this, &Controller::keywordClickedA);

    //controller User
    connect(viewUser, &V_App_U::onAddSaldoClicked, this, &Controller::addSaldoClicked);
    connect(viewUser, &V_Main::onBuyFilClicked, this, &Controller::buyFilClicked);
    connect(viewUser, &V_Main::onBuyMusClicked, this, &Controller::buyMusClicked);
    connect(viewUser, &V_Main::onBuyLibClicked, this, &Controller::buyLibClicked);
    connect(viewUser, &V_Main::onBuyPreClicked, this, &Controller::buyPreClicked);
    connect(viewUser, &V_Main::onExitTriggered, this, &Controller::exitTriggered);
    connect(viewUser, &V_App_U::onDeleteTriggered, this, &Controller::deleteTriggered);
    connect(viewUser, &V_Main::onCloseTriggered, this, &Controller::closeTriggered);
    connect(viewUser, &V_Main::onKeywordClicked, this, &Controller::keywordClickedU);
    connect(viewUser, &V_App_U::onImpUtTriggered, this, &Controller::impUtTriggered);

    //controller Impostazioni
    connect(viewImp, &V_Imp_Utente::onChangePassClicked, this, &Controller::changePassClicked);
    connect(viewImp, &V_Imp_Utente::onChangeNameClicked, this, &Controller::changeNameClicked);
    connect(viewImp, &V_Imp_Utente::onChangeSurClicked, this, &Controller::changeSurClicked);
}

void Controller::setLogin() {
    viewLogin->setFixedSize(500,300);
    viewLogin->show();
}

void Controller::accediClicked(QString user, QString pass) {
    int risultato = model->tryLogin(user,pass);
    if(risultato == 1){
        viewAdmin->setMaximumSize(1500,1000);
        viewAdmin->setMinimumSize(800,600);
        viewAdmin->show();
        viewLogin->close();
    }
    if(risultato == 2){
        Utente *utente = model->getOneCli(user);
        viewUser->setUtente(utente);
        viewUser->setMaximumSize(1500,1000);
        viewUser->setMinimumSize(800,600);
        viewUser->show();
        viewUser->refreshStorico(viewUser->getSto());
        viewUser->refreshInfo();
        viewLogin->close();
    }
}

void Controller::annullaClicked() {
    viewLogin->close();
}

void Controller::registratiClicked(Utente *user) {
    QString e = user->getEmail();
    bool trovato = model->findCli(e);
    if(trovato){
        Messaggi::RegError();
    }
    else{
        model->addCli(user);
        Messaggi::RegSuccess();
    }
}

void Controller::addQtaClicked(QString id, unsigned short qta) {
    int tipo = model->addQta(id,qta);
    if(tipo == 0)
        Messaggi::AddEleError();
    if(tipo == 1)
        viewAdmin->refreshFilTable(viewAdmin->getFil(), true);
    if(tipo == 2)
        viewAdmin->refreshMusTable(viewAdmin->getMus(), true);
    if(tipo == 3)
        viewAdmin->refreshLibTable(viewAdmin->getLib(), true);
    if(tipo == 4)
        viewAdmin->refreshPreTable(viewAdmin->getPre(), true);
}

void Controller::addFilClicked(Film *f) {
    bool trovato = model->checkId(f->getId());
    if(f->getId() == "" || f->getTitolo() == "" || f->getRegista() == ""){
        Messaggi::AddEleError();
        return;
    }
    if(trovato){
        Messaggi::IdError();
        return;
    }
    model->addFil(f);
    viewAdmin->refreshFilTable(viewAdmin->getFil(), true);
    Messaggi::AddEleSuccess();
}

void Controller::addMusClicked(Musica *m) {
    bool trovato = model->checkId(m->getId());
    if(m->getId() == "" || m->getTitolo() == "" || m->getArtista() == "" || m->getGenere() == ""){
        Messaggi::AddEleError();
        return;
    }
    if(trovato){
        Messaggi::IdError();
        return;
    }
    model->addMus(m);
    viewAdmin->refreshMusTable(viewAdmin->getMus(), true);
    Messaggi::AddEleSuccess();
}

void Controller::addLibClicked(Libro *l) {
    bool trovato = model->checkId(l->getId());
    if(l->getId() == "" || l->getAutore() == "" || l->getTitolo() == "" || l->getCaEdi() == ""){
        Messaggi::AddEleError();
        return;
    }
    if(trovato){
        Messaggi::IdError();
        return;
    }
    model->addLib(l);
    viewAdmin->refreshLibTable(viewAdmin->getLib(), true);
    Messaggi::AddEleSuccess();
}

void Controller::addPreClicked(Premi *p) {
    bool trovato = model->checkId(p->getId());
    if(p->getId() == "" || p->getNome() == ""){
        Messaggi::AddEleError();
        return;
    }
    if(trovato){
        Messaggi::IdError();
        return;
    }
    model->addPre(p);
    viewAdmin->refreshPreTable(viewAdmin->getPre(), true);
    Messaggi::AddEleSuccess();
}

void Controller::delFilClicked(QString id) {
    model->delOgg(id);
    viewAdmin->refreshFilTable(viewAdmin->getFil(), true);
}

void Controller::delMusClicked(QString id) {
    model->delOgg(id);
    viewAdmin->refreshMusTable(viewAdmin->getMus(), true);
}

void Controller::delLibClicked(QString id) {
    model->delOgg(id);
    viewAdmin->refreshLibTable(viewAdmin->getLib(), true);
}

void Controller::delPreClicked(QString id) {
    model->delPre(id);
    viewAdmin->refreshPreTable(viewAdmin->getPre(), true);
}

void Controller::addSaldoClicked(double s) {
    Utente *u = viewUser->getUser();
    model->addSaldo(s, u);
    viewUser->refreshInfo();
}

void Controller::buyFilClicked(QString id) {
    Utente *u = viewUser->getUser();
    model->buyOgg(id, u);
    viewUser->refreshInfo();
    viewUser->refreshStorico(viewUser->getSto());
    viewUser->refreshFilTable(viewUser->getFil(), false);
}

void Controller::buyMusClicked(QString id) {
    Utente *u = viewUser->getUser();
    model->buyOgg(id, u);
    viewUser->refreshInfo();
    viewUser->refreshStorico(viewUser->getSto());
    viewUser->refreshMusTable(viewUser->getMus(), false);
}

void Controller::buyLibClicked(QString id) {
    Utente *u = viewUser->getUser();
    model->buyOgg(id, u);
    viewUser->refreshInfo();
    viewUser->refreshStorico(viewUser->getSto());
    viewUser->refreshLibTable(viewUser->getLib(), false);
}

void Controller::buyPreClicked(QString id) {
    Utente *u = viewUser->getUser();
    model->buyPre(id, u);
    viewUser->refreshInfo();
    viewUser->refreshStorico(viewUser->getSto());
    viewUser->refreshPreTable(viewUser->getPre(), false);
}

void Controller::exitTriggered()
{
    viewAdmin->close();
    viewUser->close();
    viewLogin->show();
}

void Controller::deleteTriggered()
{
    Utente *u = viewUser->getUser();
    viewUser->close();
    model->delCli(u->getEmail());
    viewLogin->show();
}

void Controller::closeTriggered()
{
    viewAdmin->close();
    viewUser->close();

}

void Controller::impUtTriggered()
{
    viewImp->show();
    viewImp->setFixedSize(500,280);
}

void Controller::keywordClickedA(QString t, QString k, QString ty)
{
    int tipo = (ty == "ID") ? 1 : 2;
    QTableWidget *table;
    if(t == "Libro"){
        table = viewAdmin->getLib();
        viewAdmin->keywordSearch(table, k, tipo);
        return;
    }
    if(t == "Musica"){
        table = viewAdmin->getMus();
        viewAdmin->keywordSearch(table, k, tipo);
        return;
    }
    if(t == "Film"){
        table = viewAdmin->getFil();
        viewAdmin->keywordSearch(table, k, tipo);
        return;
    }
}

void Controller::keywordClickedU(QString t, QString k, QString ty)
{
    int tipo = (ty == "ID") ? 1 : 2;
    QTableWidget *table;
    if(t == "Libro"){
        table = viewUser->getLib();
        viewUser->keywordSearch(table, k, tipo);
        return;
    }
    if(t == "Musica"){
        table = viewUser->getMus();
        viewUser->keywordSearch(table, k, tipo);
        return;
    }
    if(t == "Film"){
        table = viewUser->getFil();
        viewUser->keywordSearch(table, k, tipo);
        return;
    }
}

void Controller::changePassClicked(QString nPass, QString vPass)
{
    Utente *u = viewUser->getUser();
    if(vPass == u->getPassword()) {
        model->updatePass(nPass, u);
        Messaggi::ChangePassSuccess();
    }
    else{
        Messaggi::PassError();
    }
}

void Controller::changeNameClicked(QString name)
{
    Utente *u = viewUser->getUser();
    model->updateName(name, u);
    viewUser->refreshInfo();
    Messaggi::ChangeName();
}

void Controller::changeSurClicked(QString sur)
{
    Utente *u = viewUser->getUser();
    model->updateSur(sur, u);
    viewUser->refreshInfo();
    Messaggi::ChangeSur();
}

