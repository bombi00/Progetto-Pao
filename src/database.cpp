#include "database.h"
#include "messaggi.h"
#include "container.h"

Database::Database() {
    loadCli();
    loadOgg();
    loadPre();
    loadSto();
}

void Database::loadOgg() {
    Oggetto *ogg = nullptr;

    QSqlQuery l;
    l.exec("SELECT id, titolo, autore, casa_editrice, anno, costo, quantità FROM Libri");

    while (l.next()) {
        QString i = l.value(0).toString();
        QString t = l.value(1).toString();
        QString a = l.value(2).toString();
        QString c = l.value(3).toString();
        unsigned short int an = l.value(4).toUInt();
        double co = l.value(5).toDouble();
        unsigned short int q = l.value(6).toUInt();

        ogg = new Libro(i,t,a,c,an,co,q);
        dbOgg.add(ogg);
    }

    QSqlQuery f;
    f.exec("SELECT id, titolo, regista, anno, durata, rated, costo, quantità FROM Film");

    while (f.next()) {
        QString i = f.value(0).toString();
        QString t = f.value(1).toString();
        QString r = f.value(2).toString();
        unsigned short int an = f.value(3).toUInt();
        unsigned short int d = f.value(4).toUInt();
        unsigned short int ra = f.value(5).toUInt();
        double c = f.value(6).toDouble();
        unsigned short int q = f.value(7).toUInt();

        ogg = new Film(i,t,r,an,d,ra,c,q);
        dbOgg.add(ogg);
    }

    QSqlQuery m;
    m.exec("SELECT id, titolo, artista, anno, genere, tipo, costo, quantità FROM Musica");

    while (m.next()) {
        QString i = m.value(0).toString();
        QString t = m.value(1).toString();
        QString a = m.value(2).toString();
        unsigned short int an = m.value(3).toUInt();
        QString g = m.value(4).toString();
        QString ty = m.value(5).toString();
        double c = m.value(6).toDouble();
        unsigned short int q = m.value(7).toUInt();

        ogg = new Musica(i,t,a,an,g,ty,c,q);
        dbOgg.add(ogg);
    }
}

void Database::loadCli() {
    Utente *cli = nullptr;

    QSqlQuery c;
    c.exec("SELECT nome, cognome, email, password, saldo, punti FROM Cliente");

    while (c.next()) {
        QString n = c.value(0).toString();
        QString co = c.value(1).toString();
        QString e = c.value(2).toString();
        QString p = c.value(3).toString();
        double s = c.value(4).toDouble();
        unsigned short int pu = c.value(5).toUInt();

        cli = new Utente(n,co,e,p,s,pu);
        dbCli.push_back(cli);
    }
}

void Database::loadPre() {
    Premi *pre = nullptr;

    QSqlQuery p;
    p.exec("SELECT id, nome, cPunti, quantità FROM Premi");

    while (p.next()) {
        QString i = p.value(0).toString();
        QString n = p.value(1).toString();
        unsigned short int pu = p.value(2).toUInt();
        unsigned short int q = p.value(3).toUInt();

        pre = new Premi(i,n,pu,q);
        dbPre.push_back(pre);
    }
}

void Database::loadSto() {
    Storico *sto = nullptr;

    QSqlQuery s;
    s.exec("SELECT idU, id, titolo, costo FROM Storico");
    while (s.next()){
        QString iu = s.value(0).toString();
        QString i = s.value(1).toString();
        QString t = s.value(2).toString();
        double c = s.value(3).toDouble();

        sto = new Storico(iu, i, t, c);
        dbSto.push_back(sto);
    }
}

void Database::addLib(Libro *l) {
    dbOgg.add(l);

    QSqlQuery lib;
    lib.prepare("INSERT INTO Libri VALUES (:id, :titolo, :autore, :casa, :anno, :costo, :quantita)");
    lib.bindValue(":id", l->getId());
    lib.bindValue(":titolo", l->getTitolo());
    lib.bindValue(":autore", l->getAutore());
    lib.bindValue(":casa", l->getCaEdi());
    lib.bindValue(":anno", l->getAnno());
    lib.bindValue(":costo", l->getCosto());
    lib.bindValue(":quantita", l->getQta());
    lib.exec();
}

void Database::addMus(Musica *m) {
    dbOgg.add(m);

    QSqlQuery mus;
    mus.prepare("INSERT INTO Musica VALUES (:id, :titolo, :artista, :anno, :genere, :tipo, :costo, :quantita)");
    mus.bindValue(":id", m->getId());
    mus.bindValue(":titolo", m->getTitolo());
    mus.bindValue(":artista", m->getArtista());
    mus.bindValue(":anno", m->getAnno());
    mus.bindValue(":genere", m->getGenere());
    mus.bindValue(":tipo", m->getTipo());
    mus.bindValue(":costo", m->getCosto());
    mus.bindValue(":quantita", m->getQta());
    mus.exec();
}

void Database::addFil(Film *f) {
    dbOgg.add(f);

    QSqlQuery fil;
    fil.prepare("INSERT INTO Film VALUES (:id, :titolo, :regista, :anno, :durata, :rated, :costo, :quantita)");
    fil.bindValue(":id", f->getId());
    fil.bindValue(":titolo", f->getTitolo());
    fil.bindValue(":regista", f->getRegista());
    fil.bindValue(":anno", f->getAnno());
    fil.bindValue(":durata", f->getDurata());
    fil.bindValue(":rated", f->getRated());
    fil.bindValue(":costo", f->getCosto());
    fil.bindValue(":quantita", f->getQta());
    fil.exec();
}

void Database::addCli(Utente *c) {
    dbCli.push_back(c);

    QSqlQuery query;
    query.prepare("INSERT INTO Cliente (nome, cognome, email, password, saldo, punti) VALUES (:nome, :cognome, :email, :password, :saldo, :punti)");
    query.bindValue(":nome", c->getNome());
    query.bindValue(":cognome", c->getCognome());
    query.bindValue(":email", c->getEmail());
    query.bindValue(":password", c->getPassword());
    query.bindValue(":saldo", c->getSaldo());
    query.bindValue(":punti", c->getPunti());
    query.exec();
}

void Database::addPre(Premi *p) {
    dbPre.push_back(p);

    QSqlQuery pre;
    pre.prepare("INSERT INTO Premi VALUES (:id, :nome, :cPunti, :quantita)");
    pre.bindValue(":id", p->getId());
    pre.bindValue(":nome", p->getNome());
    pre.bindValue(":cPunti", p->getCP());
    pre.bindValue(":quantita", p->getQta());
    pre.exec();
}

void Database::addSto(Storico *s) {
    dbSto.push_back(s);

    QSqlQuery sto;
    sto.prepare("INSERT INTO Storico VALUES (:idU, :id, :titolo, :costo)");
    sto.bindValue(":idU", s->getIdU());
    sto.bindValue(":id", s->getId());
    sto.bindValue(":titolo", s->getTitolo());
    sto.bindValue(":costo", s->getCosto());
    sto.exec();
}

bool Database::findOgg(QString id) const {
    bool ok = dbOgg.find(id);
    return ok;
}

bool Database::findPre(QString id) const {
    for(auto it = dbPre.begin(); it != dbPre.end(); it++){
        if((*it)->getId() == id)
            return true;
    }
    return false;
}

bool Database::findCli(QString e) const {
    for(auto it = dbCli.begin(); it != dbCli.end(); it++){
        if((*it)->getEmail() == e)
            return true;
    }
    return false;
}

void Database::delOgg(QString id) {
    Oggetto *o = dbOgg.getOgg(id);
    o->updateDelOgg(id);
    dbOgg.del(id);
}

void Database::delCli(QString e) {
    for(auto it = dbCli.begin(); it != dbCli.end(); it++){
        if((*it)->getEmail() == e){
            delete *it;
            it = dbCli.erase(it);
            it--;
        }
    }

    QSqlQuery query;
    query.prepare("DELETE FROM Cliente WHERE email = ?");
    query.addBindValue(e);
    query.exec();
}

void Database::delPre(QString id) {
    for(auto it = dbPre.begin(); it != dbPre.end(); it++){
        if((*it)->getId() == id){
            delete *it;
            it = dbPre.erase(it);
            it--;
        }
    }

    QSqlQuery query;
    query.prepare("DELETE FROM Premi WHERE id = ?");
    query.addBindValue(id);
    query.exec();
}

int Database::addQta(QString id, unsigned short qta) {
    for (auto it = dbPre.begin(); it != dbPre.end(); it++){
        if((*it)->getId() == id){
            (*it)->addQta(qta);
            Messaggi::AddEleSuccess();
            QSqlQuery p;
            p.prepare("UPDATE Premi SET quantità = :value WHERE id = :id");
            p.bindValue(":value", (*it)->getQta());
            p.bindValue(":id", id);
            p.exec();
            return 4;
        }
    }

    dbOgg.addQta(id,qta);
    Oggetto *o = dbOgg.getOgg(id);
    if(o != nullptr){
        Messaggi::AddEleSuccess();
        int r = o->updateQtaOgg(id, o->getQta());
        return r;
    }

    return 0;
}

bool Database::checkId(QString id) const {
    for (auto it = dbPre.begin(); it != dbPre.end(); it++){
        if((*it)->getId() == id){
            return true;
        }
    }
    bool ok = dbOgg.find(id);
    return ok;
}

int Database::tryLogin(QString e, QString p) {
    bool trovato = false;
    if (e == "admin" && p == "admin") {
        Messaggi::LoginSuccess();
        return 1;
    }
    for (auto it = dbCli.begin(); it != dbCli.end(); it++) {
        if (e == (*it)->getEmail() && p == (*it)->getPassword()) {
            Messaggi::LoginSuccess();
            return 2;
        }
    }
    if(trovato == false){
    Messaggi::LoginError();
    }
    return 0;
}

void Database::buyOgg(QString id, Utente *u) {
    Oggetto *temp = getOneOgg(id);
    if(temp->getCosto() > u->getSaldo()){
        Messaggi::BuyError();
        return;
    }
    if(temp->getQta() == 1){
        u->sotSaldo(temp->getCosto());
        addPunti(u,temp->getCosto());
        updateUser(u);
        Messaggi::BuySuccess();
        Storico *s = new Storico(u->getEmail(), temp->getId(), temp->getTitolo(), temp->getCosto());
        addSto(s);
        delOgg(temp->getId());
        return;
    }
    u->sotSaldo(temp->getCosto());
    temp->sotQta();
    addPunti(u,temp->getCosto());
    updateQtaOgg(temp);
    Messaggi::BuySuccess();
    Storico *s = new Storico(u->getEmail(), temp->getId(), temp->getTitolo(), temp->getCosto());
    addSto(s);
    updateUser(u);
}

void Database::buyPre(QString id, Utente *u) {
    Premi *temp = getOnePre(id);
    if(temp->getCP() > u->getPunti()){
        Messaggi::PreError();
        return;
    }
    if(temp->getQta() == 1){
        u->sotPunti(temp->getCP());
        updateUser(u);
        delPre(temp->getId());
        Messaggi::BuySuccess();
        return;
    }
    u->sotPunti(temp->getCP());
    temp->sotQta();
    updateQtaPre(temp);
    Messaggi::BuySuccess();
    updateUser(u);
}

void Database::addSaldo(double s, Utente *u) {
    u->addSaldo(s);
    QSqlQuery q;
    q.prepare("UPDATE Cliente SET saldo = :value WHERE email = :email");
    q.bindValue(":value", u->getSaldo());
    q.bindValue(":email", u->getEmail());
    q.exec();
    Messaggi::Ricarica();
}

void Database::updateUser(Utente *u) const {
    QSqlQuery q;
    q.prepare("UPDATE Cliente SET saldo = :valueS, punti = :valueP WHERE email = :email");
    q.bindValue(":valueS", u->getSaldo());
    q.bindValue(":valueP", u->getPunti());
    q.bindValue(":email", u->getEmail());
    q.exec();
}

void Database::updateQtaOgg(Oggetto *o) {
    o->updateQtaOgg(o->getId(), o->getQta());
}

void Database::updateQtaPre(Premi *p) {
    QSqlQuery q;
    q.prepare("UPDATE Premi SET quantità = :value WHERE id = :id");
    q.bindValue(":value", p->getQta());
    q.bindValue(":id", p->getId());
    q.exec();
    loadOgg();
}

void Database::addPunti(Utente *u, double c) {
    unsigned short int punti = c;
    double resto = c - punti;
    if ((resto) >= 0.5){
        punti++;
    }
    u->addPunti(punti);
    updateUser(u);
}

void Database::updateName(QString n, Utente *u)
{
    u->setNome(n);
    QSqlQuery q;
    q.prepare("UPDATE Cliente SET nome = :value WHERE email = :id");
    q.bindValue(":value", n);
    q.bindValue(":id", u->getEmail());
    q.exec();
    loadOgg();
}

void Database::updateSur(QString s, Utente *u)
{
    u->setCognome(s);
    QSqlQuery q;
    q.prepare("UPDATE Cliente SET cognome = :value WHERE email = :id");
    q.bindValue(":value", s);
    q.bindValue(":id", u->getEmail());
    q.exec();
    loadOgg();
}

void Database::updatePass(QString p, Utente *u)
{
    u->setPassword(p);
    QSqlQuery q;
    q.prepare("UPDATE Cliente SET password = :value WHERE email = :id");
    q.bindValue(":value", p);
    q.bindValue(":id", u->getEmail());
    q.exec();
    loadOgg();
}

const std::list<Utente *> Database::getCli() const {
    return dbCli;
}

const std::list<Premi *> Database::getPre() const {
    return dbPre;
}

const std::list<Storico *> Database::getSto() const {
    return dbSto;
}

const Container Database::getOggetti() const
{
    return dbOgg;
}


Utente* Database::getOneCli(QString e) const {
    Utente *temp = nullptr;
    for(auto it = dbCli.begin(); it != dbCli.end(); it++){
        if((*it)->getEmail() == e){
            temp = *it;
        }
    }
    return temp;
}

Oggetto *Database::getOneOgg(QString id) const {
    Oggetto *o = dbOgg.getOgg(id);
    return o;
}

Premi *Database::getOnePre(QString id) const {
    Premi *temp = nullptr;
    for(auto it= dbPre.begin(); it != dbPre.end(); it++){
        if((*it)->getId() == id)
            temp = *it;
    }
    return temp;
}
