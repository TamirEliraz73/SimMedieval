//
// Created by Tamir Eliraz on 02/01/2025.
//

#include "Vector2F.h"

namespace world::geo {
    Vector2F::Vector2F() : Vector2F(0.0f) { }

    Vector2F::Vector2F(float xy) : Vector2F(xy, xy) { }

    Vector2F::Vector2F(float x, float y) : x(x), y(y) { }

    float Vector2F::getX() const {
        return this->x;
    }

    float Vector2F::getY() const {
        return this->y;
    }

    Vector2F &Vector2F::setX(float newX) {
        this->x = newX;
        return *this;
    }

    Vector2F &Vector2F::setY(float newY) {
        this->y = newY;;
        return *this;
    }

    Vector2F &Vector2F::reset() {
        return this->set(0.0f);
    }

    Vector2F &Vector2F::set(float newXY) {
        return this->set(newXY, newXY);
    }

    Vector2F &Vector2F::set(float newX, float newY) {
        return this->setX(newX).setY(newY);
    }

    std::ostream &operator<<(std::ostream &out, const Vector2F &rhs) {
        out << std::fixed << std::setprecision(2) << "(" << rhs.getX() << ", " << rhs.getY() << ")";
        return out;
    }

} // world