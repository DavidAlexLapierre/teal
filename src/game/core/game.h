#pragma once

#include "framework/core/game.h"

namespace Game {
    class Game : public Teal::Game {
        public:
            Game() : Teal::Game() {}
            
        protected:
            void initScenes() override;
    };
}