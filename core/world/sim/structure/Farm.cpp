//
// Created by Tamir Eliraz on 04/01/2025.
//

#include "Farm.h"

namespace world::sim::structure {
    Farm::Farm(std::string name, float x, float y, float initialInventory, float updateInventory)
        : Structure(std::move(name), x, y, initialInventory), updateInventory(updateInventory) { }

    std::string Farm::getClassName() const {
        return "Farm";
    }

    void Farm::update(float dt) { this->currentInventory += this->updateInventory; }
} // structure