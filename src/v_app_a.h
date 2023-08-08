#ifndef V_APP_A_H
#define V_APP_A_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QString>
#include <QTabWidget>
#include <QPushButton>
#include <QGridLayout>
#include <QGroupBox>
#include <QComboBox>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QTableWidget>
#include <QTableView>
#include <QHeaderView>
#include "film.h"
#include "musica.h"
#include "libro.h"
#include "premi.h"
#include "v_main.h"

class V_App_A : public V_Main
{
    Q_OBJECT
private:
    QGroupBox *gridAdmin;
    QLabel *name;
    QLabel *surname;
    QLabel *id;
    QLineEdit *eId;
    QSpinBox *qta;
    QLabel *addQta;
    QPushButton *okQta;

    QTabWidget *tabAdmin;
    QWidget *info;
    QWidget *addFil;
    QWidget *addMus;
    QWidget *addLib;
    QWidget *addPre;
    QVBoxLayout *Tab;
    QGridLayout *iTab;
    QGridLayout *fTab;
    QGridLayout *mTab;
    QGridLayout *lTab;
    QGridLayout *pTab;

    //campi addFil
    QLabel *fId;
    QLabel *fTitolo;
    QLabel *fRegista;
    QLabel *fAnno;
    QLabel *fDurata;
    QLabel *fRated;
    QLabel *fCosto;
    QLabel *fQta;
    QLineEdit *fEId;
    QLineEdit *fETitolo;
    QLineEdit *fERegista;
    QSpinBox *fEAnno;
    QSpinBox *fEDurata;
    QComboBox *fERated;
    QDoubleSpinBox *fECosto;
    QSpinBox *fEQta;
    QPushButton *fOk;

    //campi addMus
    QLabel *mId;
    QLabel *mTitolo;
    QLabel *mArtista;
    QLabel *mAnno;
    QLabel *mGenere;
    QLabel *mTipo;
    QLabel *mCosto;
    QLabel *mQta;
    QLineEdit *mEId;
    QLineEdit *mETitolo;
    QLineEdit *mEArtista;
    QSpinBox *mEAnno;
    QLineEdit *mEGenere;
    QComboBox *mETipo;
    QDoubleSpinBox *mECosto;
    QSpinBox *mEQta;
    QPushButton *mOk;

    //campi addLib
    QLabel *lId;
    QLabel *lTitolo;
    QLabel *lAutore;
    QLabel *lCaEdi;
    QLabel *lAnno;
    QLabel *lCosto;
    QLabel *lQta;
    QLineEdit *lEId;
    QLineEdit *lETitolo;
    QLineEdit *lEAutore;
    QLineEdit *lECaEdi;
    QSpinBox *lEAnno;
    QDoubleSpinBox *lECosto;
    QSpinBox *lEQta;
    QPushButton *lOk;

    //campi addPre
    QLabel *pId;
    QLabel *pNome;
    QLabel *pCPunti;
    QLabel *pQta;
    QLineEdit *pEId;
    QLineEdit *pENome;
    QSpinBox *pECPunti;
    QSpinBox *pEQta;
    QPushButton *pOk;

    void creaInfo() override;
    void creaMenu() override;

private slots:
    void addQtaClicked();
    void addFilClicked();
    void addMusClicked();
    void addLibClicked();
    void addPreClicked();

signals:
    void onAddQtaClicked(QString id, unsigned short int qta);
    void onAddFilClicked(Film *f);
    void onAddMusClicked(Musica *m);
    void onAddLibClicked(Libro *l);
    void onAddPreClicked(Premi *p);

public:
    V_App_A(QWidget *parent=nullptr);
};

#endif // V_APP_A_H
