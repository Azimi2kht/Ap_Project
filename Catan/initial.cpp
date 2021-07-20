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

    // send gameMode to server
    ClientSocket socket;
    QString Info("GameMode.3");
    socket.Connect("127.0.0.1", 1234, Info);
}


void Initial::on_FourPlayers_clicked()
{
    // hide initial window
    this->hide();

    Name *w = new Name();
    w->show();

    // send gameMode to server
    ClientSocket socket;
    QString Info("GameMode.4");
    socket.Connect("127.0.0.1", 1234, Info);

}


void Initial::on_Help_clicked()
{
    help * h= new help();
    h->show();
}

