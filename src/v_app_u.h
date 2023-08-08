#ifndef V_APP_U_H
#define V_APP_U_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLabel>
#include <QString>
#include <QTabWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QGroupBox>
#include <QDoubleSpinBox>
#include <QTableWidget>
#include <QHeaderView>
#include "utente.h"
#include "v_main.h"

class V_App_U : public V_Main {
    Q_OBJECT
private:    
    Utente *utente;
    QGroupBox *gridUtente;
    QLabel *name;
    QLabel *surname;
    QLabel *money;
    QLabel *points;
    QPushButton *ricarica;
    QDoubleSpinBox *qta;
    QGridLayout *userInfo;
    QTableWidget *stoTable;

    QTabWidget *tabUtente;
    QWidget *info;
    QWidget *storico;
    QVBoxLayout *iTab;
    QVBoxLayout *sTab;

    void insStorico(QTableWidget *table);
    void creaInfo() override;
    void creaMenu() override;

public slots:
    void addSaldoClicked();
    void deleteTriggered();
    void impUtTriggered();

signals:
    void onAddSaldoClicked(double s);
    void onDeleteTriggered();
    void onImpUtTriggered();

public:
    V_App_U(Utente *utente, QWidget *parent=nullptr);
    Utente *getUser() const;
    QTableWidget *getSto() const;
    void refreshInfo();
    void refreshStorico(QTableWidget *table);
    void setUtente(Utente *u);
};

#endif // V_APP_U_H
