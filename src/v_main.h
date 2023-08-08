#ifndef V_MAIN_H
#define V_MAIN_H

#include <QMainWindow>
#include <QTableWidget>
#include <QPushButton>
#include <QGroupBox>
#include <QHeaderView>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QComboBox>

class V_Main : public QMainWindow
{
    Q_OBJECT
protected:
    void insLib(QTableWidget *table, bool admin);
    void insFil(QTableWidget *table, bool admin);
    void insMus(QTableWidget *table, bool admin);
    void insPre(QTableWidget *table, bool admin);

    void creaTable(bool admin);
    virtual void creaMenu();
    virtual void creaInfo() =0;

    QMenuBar *menubar;
    QMenu *file;
    QMenu *edit;
    QAction *esci;
    QAction *chiudi;
    QAction *elimina;
    QAction *impUt;

    QGroupBox *tabDati;
    QTabWidget *tabOggetto;
    QWidget *film;
    QWidget *musica;
    QWidget *libri;
    QWidget *premi;
    QTableWidget *filtab;
    QTableWidget *mustab;
    QTableWidget *libtab;
    QTableWidget *pretab;
    QLineEdit *search;
    QPushButton *cerca;
    QComboBox *tipo;
    QComboBox *tabella;

private slots:
    void delFilClicked(QString id);
    void delMusClicked(QString id);
    void delLibClicked(QString id);
    void delPreClicked(QString id);

    void buyFilClicked(QString id);
    void buyMusClicked(QString id);
    void buyLibClicked(QString id);
    void buyPreClicked(QString id);

    void exitTriggered();
    void closeTriggered();
    void keywordClicked();

signals:
    void onDelFilClicked(QString id);
    void onDelMusClicked(QString id);
    void onDelLibClicked(QString id);
    void onDelPreClicked(QString id);

    void onBuyFilClicked(QString id);
    void onBuyMusClicked(QString id);
    void onBuyLibClicked(QString id);
    void onBuyPreClicked(QString id);

    void onExitTriggered();
    void onCloseTriggered();
    void onKeywordClicked(QString t, QString k, QString ty);

public:
    V_Main(QWidget *parent = nullptr);
    void refreshFilTable(QTableWidget *table, bool admin);
    void refreshMusTable(QTableWidget *table, bool admin);
    void refreshPreTable(QTableWidget *table, bool admin);
    void refreshLibTable(QTableWidget *table, bool admin);
    void keywordSearch(QTableWidget *table, QString keyword, int tipo);
    QTableWidget *getFil() const;
    QTableWidget *getMus() const;
    QTableWidget *getPre() const;
    QTableWidget *getLib() const;
};

#endif // V_MAIN_H
