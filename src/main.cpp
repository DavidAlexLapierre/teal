#include "framework/core/game.h"

int main() {

    Teal::Game *game = new Teal::Game();
    game->run();

    delete game;

    return 0;
}
