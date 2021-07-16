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

void MainWindow::on_pushButton_81_clicked()
{
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


void MainWindow::on_pushButton_79_clicked()
{
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


void MainWindow::on_pushButton_78_clicked()
{
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


void MainWindow::on_pushButton_77_clicked()
{
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


void MainWindow::on_pushButton_76_clicked()
{
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


void MainWindow::on_pushButton_75_clicked()
{
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


void MainWindow::on_pushButton_74_clicked()
{
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


void MainWindow::on_pushButton_2_clicked()
{
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


void MainWindow::on_pushButton_96_clicked()
{
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


void MainWindow::on_pushButton_95_clicked()
{
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


void MainWindow::on_pushButton_84_clicked()
{
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


void MainWindow::on_pushButton_94_clicked()
{
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


void MainWindow::on_pushButton_86_clicked()
{
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


void MainWindow::on_pushButton_92_clicked()
{
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


void MainWindow::on_pushButton_88_clicked()
{
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


void MainWindow::on_pushButton_85_clicked()
{
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


void MainWindow::on_pushButton_87_clicked()
{
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


void MainWindow::on_pushButton_93_clicked()
{
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


void MainWindow::on_pushButton_91_clicked()
{
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


void MainWindow::on_pushButton_90_clicked()
{
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


void MainWindow::on_pushButton_89_clicked()
{
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


void MainWindow::on_pushButton_97_clicked()
{
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


void MainWindow::on_pushButton_98_clicked()
{
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


void MainWindow::on_pushButton_99_clicked()
{
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


void MainWindow::on_pushButton_100_clicked()
{
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


void MainWindow::on_pushButton_101_clicked()
{
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


void MainWindow::on_pushButton_102_clicked()
{
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


void MainWindow::on_pushButton_103_clicked()
{
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


void MainWindow::on_pushButton_104_clicked()
{
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


void MainWindow::on_pushButton_105_clicked()
{
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


void MainWindow::on_pushButton_106_clicked()
{
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


void MainWindow::on_pushButton_107_clicked()
{
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


void MainWindow::on_pushButton_108_clicked()
{
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


void MainWindow::on_pushButton_109_clicked()
{
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


void MainWindow::on_pushButton_110_clicked()
{
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


void MainWindow::on_pushButton_124_clicked()
{
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


void MainWindow::on_pushButton_123_clicked()
{
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


void MainWindow::on_pushButton_122_clicked()
{
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


void MainWindow::on_pushButton_121_clicked()
{
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


void MainWindow::on_pushButton_120_clicked()
{
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


void MainWindow::on_pushButton_119_clicked()
{
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


void MainWindow::on_pushButton_118_clicked()
{
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


void MainWindow::on_pushButton_117_clicked()
{
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


void MainWindow::on_pushButton_116_clicked()
{
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


void MainWindow::on_pushButton_115_clicked()
{
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


void MainWindow::on_pushButton_114_clicked()
{
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


void MainWindow::on_pushButton_113_clicked()
{
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


void MainWindow::on_pushButton_112_clicked()
{
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


void MainWindow::on_pushButton_111_clicked()
{
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


void MainWindow::on_pushButton_125_clicked()
{
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


void MainWindow::on_pushButton_126_clicked()
{
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


void MainWindow::on_pushButton_127_clicked()
{
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


void MainWindow::on_pushButton_128_clicked()
{
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


void MainWindow::on_pushButton_129_clicked()
{
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


void MainWindow::on_pushButton_130_clicked()
{
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


void MainWindow::on_pushButton_132_clicked()
{
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


void MainWindow::on_pushButton_131_clicked()
{
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


void MainWindow::on_pushButton_133_clicked()
{
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


void MainWindow::on_pushButton_134_clicked()
{
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


void MainWindow::on_pushButton_135_clicked()
{
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


void MainWindow::on_pushButton_136_clicked()
{
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


void MainWindow::on_pushButton_137_clicked()
{
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


void MainWindow::on_pushButton_173_clicked()
{
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


void MainWindow::on_pushButton_154_clicked()
{
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


void MainWindow::on_pushButton_163_clicked()
{
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


void MainWindow::on_pushButton_165_clicked()
{
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


void MainWindow::on_pushButton_157_clicked()
{
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


void MainWindow::on_pushButton_153_clicked()
{
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


void MainWindow::on_pushButton_151_clicked()
{
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


void MainWindow::on_pushButton_141_clicked()
{
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


void MainWindow::on_pushButton_167_clicked()
{
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


void MainWindow::on_pushButton_146_clicked()
{
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


void MainWindow::on_pushButton_144_clicked()
{
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


void MainWindow::on_pushButton_148_clicked()
{
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


void MainWindow::on_pushButton_175_clicked()
{
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


void MainWindow::on_pushButton_170_clicked()
{
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


void MainWindow::on_pushButton_166_clicked()
{
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


void MainWindow::on_pushButton_169_clicked()
{
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


void MainWindow::on_pushButton_142_clicked()
{
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


void MainWindow::on_pushButton_150_clicked()
{
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


void MainWindow::on_pushButton_80_clicked()
{
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


void MainWindow::on_pushButton_160_clicked()
{
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


void MainWindow::on_pushButton_176_clicked()
{
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


void MainWindow::on_pushButton_138_clicked()
{
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


void MainWindow::on_pushButton_139_clicked()
{
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


void MainWindow::on_pushButton_156_clicked()
{
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


void MainWindow::on_pushButton_159_clicked()
{
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


void MainWindow::on_pushButton_152_clicked()
{
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


void MainWindow::on_pushButton_143_clicked()
{
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


void MainWindow::on_pushButton_140_clicked()
{
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


void MainWindow::on_pushButton_149_clicked()
{
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


void MainWindow::on_pushButton_147_clicked()
{
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


void MainWindow::on_pushButton_145_clicked()
{
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


void MainWindow::on_pushButton_52_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_26_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_28_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_29_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_27_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_50_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_53_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_44_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_43_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_9_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_7_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_6_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_72_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_54_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_45_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_46_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_10_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_8_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_71_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_55_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_47_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_11_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_25_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_23_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_24_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_21_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_20_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_70_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_56_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_48_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_49_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_12_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_19_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_18_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_17_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_22_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_69_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_58_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_41_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_40_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_13_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_14_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_15_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_16_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_68_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_57_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_42_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_39_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_32_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_31_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_33_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_30_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_67_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_59_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_60_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_38_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_37_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_35_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_36_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_34_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_66_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_61_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_62_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_63_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_64_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_65_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}


void MainWindow::on_pushButton_73_clicked()
{
    if (match->getPlayer()->getNumOfBrick() >= 1 && match->getPlayer()->getNumOfWood() >=1) {
        QPixmap pixmap(":/new/prefix1/road.png");
        QIcon icon(pixmap);

        ui->pushButton_51->setIcon(icon);

        // decrease
        match->getPlayer()->decreaseWood();
        match->getPlayer()->decreaseBrick();
    }
}

void MainWindow::setPictureForHouse(QString address)
{
    // check requirements for building

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

void MainWindow::setPictureForHouse()
{
    QString address = getPictureHouseType();
    // check requirements for building
    if (match->getPlayer()->getNumOfWood() >= 1 && match->getPlayer()->getNumOfBrick() >= 1
            && match->getPlayer()->getNumOfSheep() >= 1 && match->getPlayer()->getNumOfWheat() >= 1) {

        // set the picture
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

void MainWindow::setPictureForRoad()
{
    QString address = getPictureRoadType();
    // check requirements for building road
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

QString MainWindow::getPictureHouseType() {
    if (match->getPlayer()->getPlayerColor() == Red) {
        return ":/new/prefix1/house-model-red.png";

    } else if (match->getPlayer()->getPlayerColor() == Green) {
        return ":/new/prefix1/house-model-green.png";

    } else if (match->getPlayer()->getPlayerColor() == Blue) {
        return ":/new/prefix1/house-model-blue.png";

    } else if (match->getPlayer()->getPlayerColor() == Yellow) {
        return ":/new/prefix1/house-model-yellow.png";

    } else
        return "-1";
}

QString MainWindow::getPictureRoadType() {
    if (match->getPlayer()->getPlayerColor() == Red) {
        return ":/new/prefix1/road-red.png";

    } else if (match->getPlayer()->getPlayerColor() == Green) {
         return ":/new/prefix1/road-green.png";

    } else if (match->getPlayer()->getPlayerColor() == Blue) {
         return ":/new/prefix1/road-blue.png";

    } else if (match->getPlayer()->getPlayerColor() == Yellow) {
         return ":/new/prefix1/road-yellow.png";

    } else
        return "-1";

}


