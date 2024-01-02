#pragma once

#include "entity.h"
#include "framework/interfaces/IDisposable.h"
#include "framework/data/uuid.h"

#include <memory>
#include <string>
#include <unordered_map>

namespace Teal {
    class Scene : public IDisposable {
        public:
            virtual void init() = 0;
            void reset();
            void dispose() override;
            void update(double detlaT);
            void draw();

        private:
            std::unordered_map<std::string, std::shared_ptr<Entity>> _entities; 
    };
}