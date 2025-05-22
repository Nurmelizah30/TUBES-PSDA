#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

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

void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "user" && password == "user123") {
        QMessageBox::information(this, "Login", "Username and password correct");
        hide();
        userWindow = new user(this);
        userWindow->show();
    }

}



void MainWindow::on_pushButton_2_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "admin" && password == "admin123") {
    QMessageBox::information(this, "Login", "Username and password correct");
    hide();
    adminWindow = new admin(this);
    adminWindow->show();
    }
    else {
        QMessageBox::warning(this, "Login", "Username and password not correct");
    }

}
