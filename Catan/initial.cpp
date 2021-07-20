#include "initial.h"
#include "ui_initial.h"

Initial::Initial(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Initial)
{
    ui->setupUi(this);
}

Initial::~Initial()
{
    delete ui;
}


void Initial::on_ThreePlayers_clicked()
{
    // hide initial window
    this->hide();

    Name *w = new Name();
    w->show();

    //    // setup mainwindow ui
    //    MainWindow *w = new MainWindow();
    //    w->show();

    //    // change status
    //    w->changeStatusTo(rollDice);

}


void Initial::on_FourPlayers_clicked()
{
    // hide initial window
    this->hide();

    Name *w = new Name();
    w->show();

//    // setup mainwindow ui
//    MainWindow *w = new MainWindow();
//    w->show();

//    // change status
//    w->changeStatusTo(rollDice);
}


void Initial::on_Help_clicked()
{

}

