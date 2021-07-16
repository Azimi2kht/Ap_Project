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

    setPictureForHouse(":/new/prefix1/house-model-green.png");
}

void MainWindow::on_pushButton_51_clicked() {
    setPictureForRoad(":/new/prefix1/road-red.png");
}

void MainWindow::setPictureForHouse(QString address) {
    if (match->getPlayer()->getNumOfWood() >= 1 && match->getPlayer()->getNumOfBrick() >= 1
            && match->getPlayer()->getNumOfSheep() >= 1 && match->getPlayer()->getNumOfWheat() >= 1) {

        // set picture
        QPixmap pixmap(address);
        QIcon icon(pixmap);
        ui->pushButton_82->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseBrick();
        match->getPlayer()->decreaseSheep();
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseWheat();
    }
}

void MainWindow::setPictureForRoad(QString address) {
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {

        // set picture
        QPixmap pixmap(address);
        QIcon icon(pixmap);
        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }

}

