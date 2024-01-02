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
            UUID id() const {
                return _id;
            }
            /// @brief Dispose of the entity and its references
            void dispose() = 0;

        protected:
            UUID _id;
            std::unordered_map<std::type_index, std::shared_ptr<Component>> _components;
    };
}