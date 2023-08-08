#ifndef V_IMP_UTENTE_H
#define V_IMP_UTENTE_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTabWidget>
#include <QGridLayout>

class V_Imp_Utente : public QWidget {
    Q_OBJECT
private:
    QTabWidget *impostazioni;

    QWidget *nPass;
    QWidget *nName;
    QWidget *nSur;

    QGridLayout *pass;
    QLabel *lVPass;
    QLabel *lNPass;
    QLineEdit *eVPass;
    QLineEdit *eNPass;
    QPushButton *bPass;

    QGridLayout *name;;
    QLabel *lNName;;
    QLineEdit *eNName;
    QPushButton *bName;

    QGridLayout *sur;;
    QLabel *lNSur;
    QLineEdit *eNSur;
    QPushButton *bSur;

public slots:
    void changePassClicked();
    void changeNameClicked();
    void changeSurClicked();

signals:
    void onChangePassClicked(QString nPass, QString vPass);
    void onChangeNameClicked(QString name);
    void onChangeSurClicked(QString sur);

public:
    V_Imp_Utente(QWidget *parent = nullptr);
};

#endif // V_IMP_UTENTE_H
