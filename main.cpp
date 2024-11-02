#include <QtGui/QApplication>
#include <QDebug>
#include "mainwindow.h"
#include "sha256wrapper.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QString input = "hello";
    QString hash = SHA256Wrapper::computeHash(input);
    qDebug() << "Input:" << input;
    qDebug() << "SHA-256 Hash:" << hash;

    return a.exec();
}
