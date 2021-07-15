#include "player.h"

Player::Player():point(0){

}

void Player::addPiece(QPushButton *_button) {
    pieces.push_back(_button);

}
