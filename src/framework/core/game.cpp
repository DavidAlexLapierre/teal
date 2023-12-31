#include "game.h"

namespace FW::Core {
    Game::Game() {
        _graphicsDevice = std::make_shared<Graphics::GraphgicDevice>();
    }

    Game::~Game() {

    }

    void Game::run() {
        while (true) {

        }
    }
}