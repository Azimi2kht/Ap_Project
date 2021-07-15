#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
    match = new Match();
}

MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::on_pushButton_82_clicked() {


    if (match->getPlayer()->getNumOfWood() >= 1 && match->getPlayer()->getNumOfBrick() >= 1
            && match->getPlayer()->getNumOfSheep() >= 1 && match->getPlayer()->getNumOfWheat() >= 1) {
        QPixmap pixmap(":/new/prefix1/house-model-1.png");
        QIcon icon(pixmap);

        ui->pushButton_82->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseBrick();
        match->getPlayer()->decreaseSheep();
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseWheat();
    }
}

void MainWindow::on_pushButton_51_clicked() {
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}

