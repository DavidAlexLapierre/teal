#pragma once

#include "component.h"
#include "framework/interfaces/IDisposable.h"
#include "framework/data/uuid.h"

#include <memory>
#include <unordered_map>
#include <typeindex>

namespace Teal {
    class Entity : public IDisposable {
        public:
            Entity();
            /// @brief Gets the ID of the entity
            /// @return ID of the entity
            std::string id() const {
                return _id.toString();
            }
            /// @brief Dispose of the entity and its references
            void dispose();
            /// @brief Update function for the entity
            /// @param deltaT Time between each game fraem
            virtual void update(double deltaT) {}
            /// @brief Draw function for the entity
            virtual void draw() {}

        protected:
            UUID _id;
            std::unordered_map<std::type_index, std::shared_ptr<Component>> _components;
    };
}