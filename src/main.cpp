#include "framework/core/game.h"

int main() {

    FW::Game *game = new FW::Game();
    game->run();

    delete game;

    return 0;
}
