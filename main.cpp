#include "classes/mainwindow.h"

#include <QApplication>

int main() {
    QApplication a = (QApplication) QApplication::instance();
    WS::Creator::MainWindow w;
    w.show();
    return a.exec();
}
