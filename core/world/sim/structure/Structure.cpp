//
// Created by Tamir Eliraz on 04/01/2025.
//

#include "Structure.h"

namespace world::sim::structure {
    Structure::Structure(std::string name, float x, float y, float initialInventory)
        : SimObject(std::move(name), x, y), currentInventory(initialInventory) { }

    void Structure::print(std::ostream &out) const {
        SimObject::print(out);
        out << ", Inventory: " << std::fixed << std::setprecision(0) << this->getCurrentInventory();
    }

    float Structure::getCurrentInventory() const {
        return currentInventory;
    }
} // structure