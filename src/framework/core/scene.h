#pragma once

#include "framework/interfaces/IDisposable.h"

namespace Teal {
    class Scene : public IDisposable {
        public:
            void init();
            void reset();
            void dispose() override;
            void update(double detlaT);
            void draw();
    };
}