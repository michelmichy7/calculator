#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

int firstNum, secondNum, result;

void MainWindow::on_btnAdd_clicked()
{
    firstNum= ui->txtFirstNum->text().toFloat();
    secondNum= ui->txtSecondNum->text().toFloat();
    result = firstNum + secondNum;
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnSubstract_clicked()
{
    firstNum= ui->txtFirstNum->text().toFloat();
    secondNum= ui->txtSecondNum->text().toFloat();
    result = firstNum - secondNum;
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnDivide_clicked()
{
    firstNum= ui->txtFirstNum->text().toFloat();
    secondNum= ui->txtSecondNum->text().toFloat();
    result = firstNum / secondNum;
    ui->txtResult->setText(QString::number(result));
}


void MainWindow::on_btnMultiply_clicked()
{
    firstNum= ui->txtFirstNum->text().toFloat();
    secondNum= ui->txtSecondNum->text().toFloat();
    result = firstNum * secondNum;
    ui->txtResult->setText(QString::number(result));
}

