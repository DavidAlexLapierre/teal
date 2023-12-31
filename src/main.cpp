#include "framework/core/game.h"

int main() {

    Framework::Core::Game *game = new Framework::Core::Game();
    game->run();

    delete game;

    return 0;
}
