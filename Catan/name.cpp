#include "name.h"
#include "ui_name.h"

Name::Name(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Name)
{
    ui->setupUi(this);
}

Name::~Name()
{
    delete ui;
}

void Name::on_pushButton_clicked()
{
    // send name and email
    QString name = ui->EnteredName->text();
    ClientSocket socket;
    QString request = name + "." + "GiveName";

    socket.Connect("127.0.0.1", 1234, request);

    // hide current window
    this->hide();

    // open the new window
    Waiting *w = new Waiting();
    w->show();

    // get turns :TODO

//    QString request("chooseTurn");
//    ClientSocket socket;
//    QString response = socket.Connect("127.0.0.1", 1234,request);



}

