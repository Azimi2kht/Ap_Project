#include "player.h"
#include "clientsocket.h"

Player::Player(QString _name):point(0), name(_name){

}

void Player::addPiece(QPushButton *_button) {
    pieces.push_back(_button);
    point++;
}

void Player::on_diceButton_clicked()
{
    ClientSocket w;
    QString request("Dice:");
    QString recieved = w.Connect("127.0.0.1", 1234, request);
}
