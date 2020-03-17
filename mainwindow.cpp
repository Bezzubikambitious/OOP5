#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_set1_clicked()
{
    this->m1.SetDolar(ui->set_dollars1->text().toInt());
    this->m1.SetCent(ui->set_cents1->text().toInt());
}

void MainWindow::on_set2_clicked()
{
    this->m2.SetDolar(ui->set_dollars2->text().toInt());
    this->m2.SetCent(ui->set_cents2->text().toInt());
}

void MainWindow::on_add_clicked()
{
    this->res = this->m1.addMoney(this->m2);
    ui->show_res->setText(QString::fromStdString(this->res.get_res()));
}

void MainWindow::on_sub_clicked()
{
    this->res = this->m1.subMoney(this->m2);
    ui->show_res->setText(QString::fromStdString(this->res.get_res()));
}
