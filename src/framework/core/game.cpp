#include "game.h"

namespace FW::Core {
    Game::Game() {
        _displayManager = std::make_shared<DisplayManager>(
            std::make_shared<Graphics::GraphicDevice>()
        );
    }

    Game::~Game() {

    }

    void Game::run() {
        while (true) {

        }
    }
}