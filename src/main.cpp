#include "framework/core/game.h"

int main() {

    FW::Core::Game *game = new FW::Core::Game();
    game->run();

    delete game;

    return 0;
}
