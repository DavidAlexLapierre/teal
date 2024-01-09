#include "mainScene.h"

#include "framework/api/entityApi.h"
#include "game/entities/testEntity.h"

namespace Game {
    void MainScene::init() {
        Teal::Api::createEntity(0, 0, std::make_shared<TestEntity>());
    }
}