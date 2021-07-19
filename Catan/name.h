#ifndef NAME_H
#define NAME_H

#include <QMainWindow>
#include "clientsocket.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Name; }
QT_END_NAMESPACE

class Name : public QMainWindow
{
    Q_OBJECT

public:
    Name(QWidget *parent = nullptr);
    ~Name();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Name *ui;
};
#endif // NAME_H
