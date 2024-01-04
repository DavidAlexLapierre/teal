#include "batchItem.h"

namespace Teal {

    BatchItem::BatchItem() {
        _TL = std::make_unique<Vertex>();
        _TR = std::make_unique<Vertex>();
        _BL = std::make_unique<Vertex>();
        _BR = std::make_unique<Vertex>();
    }

    void BatchItem::set(float x, float y, float dx, float dy, float w, float h, float sin, float cos, Color color, glm::vec2 texCoordsTL, glm::vec2 texCoordsBR, float depth) {
        _TL->position->x = x + dx * cos - dy * sin;
        _TL->position->y = y + dx * sin + dy * cos;
        _TL->position->z = depth;
        _TL->texCoords->x = texCoordsTL.x;
        _TL->texCoords->y = texCoordsTL.y;

        _TR->position->x = x + (dx + w) * cos - dy * sin;
        _TR->position->y = y + (dx + w) * sin + dy * cos;
        _TR->position->z = depth;
        _TR->texCoords->x = texCoordsBR.x;
        _TR->texCoords->y = texCoordsTL.y;

        _BL->position->x = x + dx * cos - (dy + h) * sin;
        _BL->position->y = y + dx * sin + (dy + h) * cos;
        _BL->position->z = depth;
        _BL->texCoords->x = texCoordsTL.x;
        _BL->texCoords->y = texCoordsBR.y;

        _BR->position->x = x + (dx + w) * cos - (dy + h) * sin;
        _BR->position->y = y + (dx + w) * sin + (dy + h) * cos;
        _BR->position->z = depth;
        _BR->texCoords->x = texCoordsBR.x;
        _BR->texCoords->y = texCoordsBR.y;
    }

    void BatchItem::set(float x, float y, float w, float h, Color color, glm::vec2 texCoordsTL, glm::vec2 texCoordsBR, float depth) {
        _TL->position->x = x;
        _TL->position->y = y;
        _TL->position->z = depth;
        _TL->texCoords->x = texCoordsTL.x;
        _TL->texCoords->y = texCoordsTL.y;

        _TR->position->x = x + w;
        _TR->position->y = y;
        _TR->position->z = depth;
        _TR->texCoords->x = texCoordsBR.x;
        _TR->texCoords->y = texCoordsTL.y;

        _BL->position->x = x;
        _BL->position->y = y + h;
        _BL->position->z = depth;
        _BL->texCoords->x = texCoordsTL.x;
        _BL->texCoords->y = texCoordsBR.y;

        _BR->position->x = x + w;
        _BR->position->y = y + h;
        _BR->position->z = depth;
        _BR->texCoords->x = texCoordsBR.x;
        _BR->texCoords->y = texCoordsBR.y;
    }

    Vertex BatchItem::TL() const {
        return *_TL;
    }

    Vertex BatchItem::TR() const {
        return *_TR;
    }
    Vertex BatchItem::BL() const {
        return *_BL;
    }

    Vertex BatchItem::BR() const {
        return *_BR;
    }
}