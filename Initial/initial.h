#ifndef INITIAL_H
#define INITIAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Initial; }
QT_END_NAMESPACE

class Initial : public QMainWindow
{
    Q_OBJECT

public:
    Initial(QWidget *parent = nullptr);
    ~Initial();

private:
    Ui::Initial *ui;
};
#endif // INITIAL_H
