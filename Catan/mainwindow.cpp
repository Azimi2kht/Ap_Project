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


void MainWindow::on_pushButton_82_clicked() {
    QPixmap pixmap(":/new/prefix1/house-model-1.png");
    QIcon icon(pixmap);

    ui->pushButton_82->setIcon(icon);
}

