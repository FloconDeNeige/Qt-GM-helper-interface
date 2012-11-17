#include "./header/mainwindow.h"
#include <QDockWidget>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    this->setWindowTitle(tr("MainWindowTitle"));
    this->createDocks();
    this->adjustSize();

}

void MainWindow::createDocks() {
    QDockWidget *exp = new QDockWidget(tr("EXPLORER"), this);
    QDockWidget *chat = new QDockWidget(tr("CHAT"), this);
    QDockWidget *main = new QDockWidget(tr("MAIN_VIEW"), this);
    addDockWidget(Qt::LeftDockWidgetArea, exp);
    addDockWidget(Qt::RightDockWidgetArea, main);
    addDockWidget(Qt::RightDockWidgetArea, chat);
}
