#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "money.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_set1_clicked();

    void on_set2_clicked();

    void on_add_clicked();

    void on_sub_clicked();

private:
    Ui::MainWindow *ui;
    Money m1;
    Money m2;
    Money res;
};
#endif // MAINWINDOW_H
