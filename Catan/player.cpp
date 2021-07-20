#include "player.h"
#include "clientsocket.h"

Player::Player(QString _name):point(0), name(_name){
    QString color = clientSocket.Connect("127.0.0.1", 1234, "GetColor");

    if (color == "Red") {
        playerColor = Red;

    } else if (color == "Green") {
        playerColor = Green;

    } else if (color == "Blue") {
        playerColor = Blue;

    } else if (color == "Yellow") {
        playerColor = Yellow;

    }

}

void Player::addPiece(QPushButton *_button) {

}

QString Player::sendToServer(QString _str)
{
    return clientSocket.Connect("127.0.0.1", 1234,_str);
}

int Player::diceButton() {
    QString request("Dice:");
    QString recieved = clientSocket.Connect("127.0.0.1", 1234, request);

    return recieved.toInt();
}
