#pragma once

namespace Teal {
    class IDisposable {
        public:
            virtual void dispose() = 0;
    };
}