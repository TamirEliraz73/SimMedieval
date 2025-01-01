//
// Created by Tamir Eliraz on 02/01/2025.
//

#include "Vector2F.h"
#include <cmath>

namespace world::geo {
    Vector2F::Vector2F() : Vector2F(0.0f) { }

    Vector2F::Vector2F(scalar xy) : Vector2F(xy, xy) { }

    Vector2F::Vector2F(scalar x, scalar y) : x(x), y(y) { }

    scalar Vector2F::getX() const {
        return this->x;
    }

    scalar Vector2F::getY() const {
        return this->y;
    }

    Vector2F &Vector2F::setX(scalar newX) {
        this->x = newX;
        return *this;
    }

    Vector2F &Vector2F::setY(scalar newY) {
        this->y = newY;;
        return *this;
    }

    Vector2F &Vector2F::reset() {
        return this->set(0.0f);
    }

    Vector2F &Vector2F::set(scalar newXY) {
        return this->set(newXY, newXY);
    }

    Vector2F &Vector2F::set(scalar newX, scalar newY) {
        return this->setX(newX).setY(newY);
    }

    std::ostream &operator<<(std::ostream &out, const Vector2F &rhs) {
        out << std::fixed << std::setprecision(2) << "(" << rhs.getX() << ", " << rhs.getY() << ")";
        return out;
    }

    Vector2F operator+(const Vector2F &lhs, const Vector2F &rhs) {
        return std::move(Vector2F(lhs.getX() + rhs.getX(), lhs.getY() + rhs.getY()));
    }

    Vector2F operator-(const Vector2F &lhs, const Vector2F &rhs) {
        return std::move(Vector2F(lhs.getX() - rhs.getX(), lhs.getY() - rhs.getY()));
    }

    scalar operator*(const Vector2F &lhs, const Vector2F &rhs) {
        return lhs.getX() * rhs.getX() + lhs.getY() * rhs.getY();
    }

    Vector2F operator*(const Vector2F &lhs, scalar rhs) {
        return std::move(Vector2F(lhs.getX() * rhs, lhs.getY() * rhs));
    }

    Vector2F &Vector2F::operator+=(const Vector2F &rhs) {
        return this->set(this->getX() + rhs.getX(), this->getY() + rhs.getY());
    }

    Vector2F &Vector2F::operator-=(const Vector2F &rhs) {
        return this->set(this->getX() - rhs.getX(), this->getY() - rhs.getY());
    }

    Vector2F &Vector2F::operator*=(scalar rhs) {
        return this->set(this->getX() * rhs, this->getY() * rhs);
    }

    bool Vector2F::operator==(const Vector2F &rhs) const {
        return this->getX() == rhs.getX() && this->getY() == rhs.getY();
    }

    bool Vector2F::operator!=(const Vector2F &rhs) const {
        return !((*this) == rhs);
    }

    scalar Vector2F::size() const {
        return sqrt((*this) * (*this));
    }

    scalar Vector2F::distance(const Vector2F &rhs) const {
        return sqrt(
            (this->getY() - rhs.getY()) * (this->getY() - rhs.getY())
            + (this->getX() - rhs.getX()) * (this->getX() - rhs.getX())
        );
    }

    bool Vector2F::isCloseTo(const Vector2F &rhs, scalar distance) const {
        return this->distance(rhs) <= distance;
    }

    Vector2F Vector2F::createVectorUsingAngleAndRadiusRad(scalar angle, scalar radius) {
        return std::move(Vector2F(radius * cos(angle), radius * sin(angle)));
    }

    Vector2F Vector2F::createVectorUsingAngleAndRadiusDeg(scalar angle, scalar radius) {
        return createVectorUsingAngleAndRadiusRad(angle*180/M_PI,radius);
    }

} // world