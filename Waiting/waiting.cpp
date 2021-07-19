#include "waiting.h"
#include "ui_waiting.h"

Waiting::Waiting(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Waiting)
{
    ui->setupUi(this);
}

Waiting::~Waiting()
{
    delete ui;
}

