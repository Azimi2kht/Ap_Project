#ifndef INITIAL_H
#define INITIAL_H

#include <QMainWindow>
#include "name.h"
#include "help.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Initial; }
QT_END_NAMESPACE

class Initial : public QMainWindow
{
    Q_OBJECT

public:
    Initial(QWidget *parent = nullptr);
    ~Initial();

private slots:
    void on_ThreePlayers_clicked();

    void on_FourPlayers_clicked();

    void on_Help_clicked();

private:
    Ui::Initial *ui;
};
#endif // INITIAL_H
