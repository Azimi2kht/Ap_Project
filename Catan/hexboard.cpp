#include "hexboard.h"
#include "game.h"

extern Game* game;

HexBoard::HexBoard() {

}

QList<Hex *> HexBoard::getHexes() {
    return hexes;
}

void HexBoard::placeHexes(int x, int y, int numberOfRows, int numberOfColumns) {
    int Y_SHIFT = 82;
    int X_SHIFT = 42;
    for (size_t i = 0, n = numberOfRows ; i < n ; i ++) {
        if (i % 2 == 0)
            X_SHIFT = 0;
        else
            X_SHIFT = 42;
        createHexRow(x + X_SHIFT, y + Y_SHIFT * i, numberOfColumns);
    }

    //    createHexRow(100, 300 , 5);
}

Hex *HexBoard::createSetHex(int x, int y, hexType type) {

    Hex* hex = new Hex(type);



    // set position
    hex->setPos(x, y);

    // add to hexes
    hexes.append(hex);

    // set picture
    QImage image(getPicture(type));
    image = image.scaled(150, 120, Qt::KeepAspectRatio);
    QBrush* brush = new QBrush(image);
    brush->setStyle(Qt::TexturePattern);

    hex->setBrush(*brush);

    // add poly to scene
    game->scene->addItem(hex);
}

void HexBoard::createHexRow(int x, int y, int numOfColumns) {
    // creates a column of hexes at the specified location with the specified
    // number of rows
    for (size_t i = 0, n = numOfColumns ; i < n ; i++) {
        createSetHex(x + 84 * i, y, wood);
    }
}

QString HexBoard::getPicture(hexType type) {
    if (type == wood) {
        return QString(":/images/Resources/wood.jpg");

    } else if (type == brick) {
        return QString(":/images/Resources/brick.jpg");

    } else if (type == wheat) {
        return QString(":/images/Resources/wheat.jpg");

    } else if (type == sheep) {
        return QString(":/images/Resources/sheep.jpg");

    } else if (type == rock) {
        return QString(":/images/Resources/rock.jpg");

    } else if (1){
        return NULL;
    }
}

