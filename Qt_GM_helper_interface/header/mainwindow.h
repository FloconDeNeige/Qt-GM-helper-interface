#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:


public:
    explicit MainWindow(QWidget *parent = 0);
    void createDocks();
    
signals:
    
public slots:

    
};

#endif // MAINWINDOW_H
