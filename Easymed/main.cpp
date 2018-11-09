#include "easytrades.h"
#include <QApplication>
#include<QWidget>
#include<QLabel>

int main(int argc, char *argv[])
{
    QCoreApplication::addLibraryPath("./");
    QApplication a(argc, argv);
    EasyTrades w;
    //QWidget::resize(376, 301);
    w.show();

    return a.exec();
}
