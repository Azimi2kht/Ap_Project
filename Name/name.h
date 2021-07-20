#ifndef NAME_H
#define NAME_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Name; }
QT_END_NAMESPACE

class Name : public QMainWindow
{
    Q_OBJECT

public:
    Name(QWidget *parent = nullptr);
    ~Name();

private:
    Ui::Name *ui;
};
#endif // NAME_H
