#ifndef WAITING_H
#define WAITING_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Waiting; }
QT_END_NAMESPACE

class Waiting : public QMainWindow
{
    Q_OBJECT

public:
    Waiting(QWidget *parent = nullptr);
    ~Waiting();

private:
    Ui::Waiting *ui;
};
#endif // WAITING_H
