//
// Created by Tamir Eliraz on 04/01/2025.
//

#include "SimObject.h"
#include "../geo/Vector2F.h"

namespace world::sim {

    SimObject::SimObject(std::string name, float x, float y)
        : name(std::move(name)), position(std::make_unique<geo::Vector2F>(x, y)) { }

    bool SimObject::operator==(const SimObject &rhs) const {
        return this->getClassName() == rhs.getClassName() &&
               this->getName() == rhs.getName() &&
               *this->getPosition() == *rhs.getPosition();
    }

    bool SimObject::operator!=(const SimObject &rhs) const {
        return !(*this == rhs);
    }

    const std::string &SimObject::getName() const {
        return this->name;
    }

    const std::shared_ptr<geo::Vector2F> &SimObject::getPosition() const {
        return this->position;
    }

    std::ostream &operator<<(std::ostream &out, const SimObject &rhs) {
        rhs.print(out);
        return out;
    }

    void SimObject::print(std::ostream &out) const {
        out << this->getClassName() << " " << this->getName() << " at " << *this->getPosition();
    }
} // sim