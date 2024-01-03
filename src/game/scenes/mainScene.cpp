#include "mainScene.h"

#include "framework/api/sceneApi.h"
#include "game/entities/testEntity.h"

namespace Game {
    void MainScene::init() {
        Teal::createEntity(0, 0, std::make_shared<TestEntity>());
    }
}