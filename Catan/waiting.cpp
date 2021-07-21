#include "waiting.h"
#include "ui_waiting.h"

int Waiting::numberOfOnlinePlayers = 0;

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


void Waiting::on_Refresh_clicked()
{
    ClientSocket socket;
    QString request("GetNumberOfOnlinePlayers");
    QString response = socket.Connect("127.0.0.1", 1234, request);

    Waiting::numberOfOnlinePlayers = response.toInt();

    ui->ConnectedNUM->setText(response);

}


void Waiting::on_StartButton_clicked()
{
    // get gamemode from server
    ClientSocket socket;
    QString request("GetGameMode");
    int gameMode = socket.Connect("127.0.0.1", 1234, request).toInt();

    // set number of online players
    request = "GetNumberOfOnlinePlayers";
    QString response = socket.Connect("127.0.0.1", 1234, request);
    Waiting::numberOfOnlinePlayers = response.toInt();

    if (Waiting::numberOfOnlinePlayers >= gameMode) {
        // hide current windows
        this->hide();

        // setup next window
        MainWindow *w = new MainWindow();
        w->show();
        ClientSocket socket;
        qInfo() << socket.Connect("127.0.0.1", 1234, "GetName");
    } else {
        QMessageBox info;
        info.setText("Not enough players has joined to start the match!");
        info.exec();

    }
}

