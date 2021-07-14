#include "hexboard.h"
#include "game.h"


extern Game* game;

HexBoard::HexBoard() {

}

QList<Hex *> HexBoard::getHexes() {
    return hexes;
}

void HexBoard::placeHexes() {
//    int Y_SHIFT = 77;
//    int X_SHIFT = 38;
//    for (size_t i = 0, n = numberOfRows ; i < n ; i ++) {
//        if (i % 2 == 0)
//            X_SHIFT = 0;
//        else
//            X_SHIFT = 38;
//        createHexRow(x + X_SHIFT, y + Y_SHIFT * i, numberOfColumns);
//    }

    // Variables
    QVector<QPair<hexType, int>> resources;
    QVector<hexType> items;

    // Initilize resources
    resources.push_back(QPair<hexType, int>(wood, 5));
    resources.push_back(QPair<hexType, int>(brick, 5));
    resources.push_back(QPair<hexType, int>(rock, 7));
    resources.push_back(QPair<hexType, int>(wheat, 5));
    resources.push_back(QPair<hexType, int>(sheep, 5));
    resources.push_back(QPair<hexType, int>(desert, 1));

    // Initilize items
    QPair<hexType, int> pair;
    foreach(pair, resources)
        for(int i = 0 ; i < pair.second ; i++) {
            items.push_back(pair.first);
        }

    // Randomize elements in items
    items = randomItems(items);

    std::fstream fin("coordinates.txt", std::ios::in);

    int x, y;
    for(size_t i = 0 ; i < 90 ; i++) {
        fin >> x >> y;
        if (i < 20)
            createSetHex(x , y , items[i]);
        else
            createSetHex(x , y , sea);
    }


}

void HexBoard::createHexRow(int x, int y, int numOfColumns) {
    // creates a column of hexes at the specified location with the specified
    // number of rows
    for (size_t i = 0, n = numOfColumns ; i < n ; i++) {
        createSetHex(x + 75 * i, y, sheep);
    }
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


QString HexBoard::getPicture(hexType type) {
    if (type == wood) {
        return QString(":/images/Resources/wood.png");

    } else if (type == brick) {
        return QString(":/images/Resources/brick.png");

    } else if (type == wheat) {
        return QString(":/images/Resources/wheat.png");

    } else if (type == sheep) {
        return QString(":/images/Resources/sheep.png");

    } else if (type == rock) {
        return QString(":/images/Resources/rock.png");

    } else if (type == desert){
        return QString(":/images/Resources/Desert.png");

    } else if (type == sea) {
        return QString(":/images/Resources/sea.png");

    } else {
        return NULL;
    }
}

