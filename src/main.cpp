#include "game/core/game.h"

int main() {

    Game::Game *game = new Game::Game();
    game->init();
    game->run();

    delete game;

    return 0;
}
