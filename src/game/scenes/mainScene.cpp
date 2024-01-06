#include "mainScene.h"

#include "framework/api/entityApi.h"
#include "game/entities/testEntity.h"

using namespace Teal::Api;

namespace Game {
    void MainScene::init() {
        createEntity(0, 0, std::make_shared<TestEntity>());
    }
}