#include "messaggi.h"

void Messaggi::LoginError() {
    QMessageBox::critical(nullptr, "Errore nel Login", "Email o Password sbagliati");
}

void Messaggi::LoginSuccess() {
    QMessageBox::information(nullptr, "Successo", "Accesso effettuato");
}

void Messaggi::RegError() {
    QMessageBox::critical(nullptr, "Errore nella registrazione", "Email già presente o campi non riempiti correttamente");
}

void Messaggi::RegSuccess() {
    QMessageBox::information(nullptr, "Successo", "Registazione effettuata");
}

void Messaggi::AddEleSuccess() {
    QMessageBox::information(nullptr, "Successo", "Elemento aggiunto correttamente");
}

void Messaggi::AddQtaSuccess() {
    QMessageBox::information(nullptr, "Successo", "Quantità aggiunta all'elemento");
}

void Messaggi::AddQtaError() {
    QMessageBox::critical(nullptr, "Errore nell'aggiunta quantità", "Riempire il campo ID correttamente");
}

void Messaggi::AddEleError() {
    QMessageBox::critical(nullptr, "Errore nell'aggiunta elemento", "Riempire i campi correttamente");
}

void Messaggi::IdError() {
    QMessageBox::critical(nullptr, "Errore nell'aggiunta elemento", "Inserire un ID valido");
}

void Messaggi::BuyError() {
    QMessageBox::critical(nullptr, "Errore nell'acquisto", "Saldo insufficiente, ricarica il profilo");
}

void Messaggi::BuySuccess()
{
    QMessageBox::information(nullptr, "Successo", "Elemento acquistato correttamente");
}

void Messaggi::PreError()
{
    QMessageBox::critical(nullptr, "Errore", "Saldo punti insufficiente");
}

void Messaggi::Ricarica()
{
    QMessageBox::information(nullptr, "Successo", "Importo caricato sul profilo");
}

void Messaggi::PassError()
{
    QMessageBox::critical(nullptr, "Errore", "Password vecchia non corretta");
}

void Messaggi::ChangeName()
{
    QMessageBox::information(nullptr, "Successo", "Cambiato il nome del profilo correttamente");
}

void Messaggi::ChangeSur()
{
    QMessageBox::information(nullptr, "Successo", "Cambiato il cognome del profilo correttamente");
}

void Messaggi::ChangePassSuccess()
{
    QMessageBox::information(nullptr, "Successo", "Password cambiata correttamente");
}



Messaggi::Messaggi(QObject *parent) : QObject(parent){}
