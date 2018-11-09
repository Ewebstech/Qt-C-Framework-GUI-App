#ifndef EASYTRADES_H
#define EASYTRADES_H

#include <QMainWindow>
#include<QProcess>

namespace Ui {
class EasyTrades;
}

class EasyTrades : public QMainWindow
{
    Q_OBJECT

public:
    explicit EasyTrades(QWidget *parent = 0);

    ~EasyTrades();

private slots:
    void on_pushButton_clicked();

    //void on_commandLinkButton_clicked();

    void on_actionStart_EasyTrades_triggered();

    void on_actionExit_triggered();

    void on_pushButton_4_clicked();


    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_actionAbout_triggered();

    void on_actionCheck_for_Updates_triggered();

    void on_action_started();

    void on_action_test();


   // void on_action_timer();

public:

      int number = 1;
      int msecs;
private:
    Ui::EasyTrades *ui;

    QProcess myProcess;
    QString program;

};

#endif // EASYTRADES_H
