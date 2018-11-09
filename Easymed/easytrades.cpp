#include "easytrades.h"
#include "ui_easytrades.h"
#include<QDesktopServices>
#include<QUrl>
#include<QString>
#include<QLabel>
#include<qwidget.h>
#include<QProcess>
#include<QDialog>
#include<QDialogButtonBox>
#include<QtCore>
#include<QtGui>
#include<QMessageBox>
#include<aboutdialog.h>
#include<QInputMethod>
#include<QTextStream>
#include<QProgressBar>


EasyTrades::EasyTrades(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EasyTrades)
{
    ui->setupUi(this);


    connect(&myProcess, SIGNAL(readyRead()), this, SLOT(on_action_started()));


    //this->centralWidget()->setStyleSheet("background-image: url(); background-position: center; ");
    }

EasyTrades::~EasyTrades()
{
    delete ui;
}

void EasyTrades::on_pushButton_clicked()
{
    QString link="http://192.168.0.100/easymed/";
    QDesktopServices::openUrl(QUrl(link));
}


void EasyTrades::on_actionStart_EasyTrades_triggered()
{
    QString link="http://192.168.0.100/easymed/";
    QDesktopServices::openUrl(QUrl(link));
}

void EasyTrades::on_actionExit_triggered()
{
  QApplication::quit();
}

void EasyTrades::on_pushButton_4_clicked()
{

   program = "C:/Easymed/bin/syscommands.exe";


   myProcess.setProcessChannelMode(QProcess::MergedChannels);

   myProcess.start(program);


}

void EasyTrades::on_action_test()
{
    if(!myProcess.waitForStarted()){
        qDebug() << "Program Failed: " << myProcess.errorString();
    }
    else{
        QLabel* mylabel = new QLabel();
        mylabel->resize(200,100);

        QByteArray newData = myProcess.readAll();
        QString text = newData;
        mylabel->setText(newData);

         QTextStream out(stdout);
         out << "Result" << newData;   // serialize a string
        // mylabel->show();
       // qDebug() << "Program Output:" << myProcess.readAll();
    }


      //QMessageBox::information(this, tr("Server Installation"), tr("<h3>Installation Status</h3>"
      //"<p>Server has been successfully installed</p>"));
      //myProcess.write("20");

      //myProcess.closeWriteChannel();



 // QTextStream out(stdout);
  //out << "Result" << myProcess.readAllStandardOutput();   // serialize a string

}

void EasyTrades::on_action_started()
{

    if(!myProcess.waitForFinished()){

         QMessageBox::warning(this, tr("Server Installation"), tr("<p>Program Could Not Start"));

    }
    else{
        if(myProcess.Running)
        {

          //  QTimer *timer = new QTimer(this);
            //   connect(timer, SIGNAL(timeout()), this, SLOT(on_action_timer()));
              // timer->start(1000);
              // QLabel *label = new QLabel();
               //label->resize(400,400);
            //QPixmap pixmap("C:/Users/EWEBS/Pictures/loading.gif");
            //label->setPixmap(pixmap);
             //label->setText("<h2>Server Installation in Progress...</h2>"
               //            "<p>Please Wait, this might take some time!</p>");
            //label->show();

           // QLabel* mylabel = new QLabel();
            //mylabel->setGeometry(0,0,300,200);

            QByteArray newData = myProcess.readAll();
            int exitstatus = myProcess.exitCode();
            if(exitstatus == 0)
            {
                QMessageBox::information(this, tr("Server Installation"), tr("<h3>Installation Status</h3>"
                + newData + "\n"));
            }



        }
    }
}






/*void EasyTrades::update_now()
{
void EasyTrades::on_action_finished()
{
}
    int looptime = 1;
   QProgressDialog progress("Installing Servers...", "Cancel", 0, looptime, this);
   progress.setWindowModality(Qt::WindowModal);
  for (int i = 0; i <= looptime; i++) {
    progress.setValue(i);

    if (progress.wasCanceled())
        break;
    //... copy one file
    looptime++;
}
progress.setValue(looptime);
 //progress.show();
}
*/

    void EasyTrades::on_pushButton_2_clicked()
{
    aboutdialog abd;
    abd.setModal(true);
    abd.exec();
}

void EasyTrades::on_pushButton_3_clicked()
{
    QString link="http://127.0.0.1/phpmyadmin/";
    QDesktopServices::openUrl(QUrl(link));

}



void EasyTrades::on_actionAbout_triggered()
{
    QMessageBox::about(this, tr("About EasyMed"),
    tr("<h2>EasyTrades 3.0</h2>"
    "<p>Copyright &copy; 2015 Ewebstechnologies Software Inc."
    "<p>EasyTrades is an innovative Hospital Management Software developed for efficient hospital business monitoring and automated pharmaceutical transactions.</p>"
       "<p>Easytrades is developed, distributed and licensed by EwebsTechnologies Inc.</p>"));
}

void EasyTrades::on_actionCheck_for_Updates_triggered()
{
    QString link="http://www.ewebstechnologies.com/";
    QDesktopServices::openUrl(QUrl(link));

}
