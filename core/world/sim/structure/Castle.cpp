//
// Created by Tamir Eliraz on 04/01/2025.
//

#include "Castle.h"

namespace world::sim::structure {
    Castle::Castle(std::string name, float x, float y, float initialInventory)
        : Structure(std::move(name), x, y,
                    initialInventory) { }

    std::string Castle::getClassName() const {
        return "Castle";
    }

    void Castle::update(float dt) { }
} // structure