#include "game.h"

#include "game/scenes/mainScene.h"

namespace Game {
    void Game::initScenes() {
        _sceneManager->registerScene<MainScene>(std::make_shared<MainScene>());
    }
}