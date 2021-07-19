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

