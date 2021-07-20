#include "match.h"

Match::Match() {
    // get player name
    ClientSocket socket;
    QString name = socket.Connect("127.0.0.1", 1234, "");
    player = new Player(name);

}
