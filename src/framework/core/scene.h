#pragma once

#include "entity.h"
#include "framework/interfaces/IDisposable.h"
#include "framework/data/uuid.h"

#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

namespace Teal {
    class Scene : public IDisposable {
        public:
            virtual void init() = 0;
            void dispose() override;
            void update(double detlaT);
            void draw();
            void createEntity(int x, int y, std::shared_ptr<Entity> entity);
            void deleteEntity(UUID id);

        private:
            void mergeEntities();
            std::vector<std::shared_ptr<Entity>> toCreateEntities;
            std::vector<std::string> toDeleteEntities;
            std::unordered_map<std::string, std::shared_ptr<Entity>> _entities; 
    };
}