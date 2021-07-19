#include "ui.h"
#include "ui_ui.h"
#include "dice.h"


UI::UI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UI)
{
    ui->setupUi(this);
}

UI::~UI()
{
    delete ui;
}


void UI::on_RollDice_clicked()
{
    Dice Roll;
    QString Rolled = QString::number(Roll.GenerateValue());
    ui->RolledNumber->setText(Rolled);
}






