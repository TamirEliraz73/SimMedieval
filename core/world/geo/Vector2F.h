//
// Created by Tamir Eliraz on 02/01/2025.
//

#ifndef SIMMEDIEVAL_VECTOR2F_H
#define SIMMEDIEVAL_VECTOR2F_H

#include "../../Core.h"

namespace world::geo {
    typedef float scalar;

    class Vector2F {
        private:
            scalar x;
            scalar y;
        public:
            explicit Vector2F();

            explicit Vector2F(scalar xy);

            explicit Vector2F(scalar x, scalar y);

            static Vector2F createVectorUsingAngleAndRadiusRad(scalar angle, scalar radius);

            static Vector2F createVectorUsingAngleAndRadiusDeg(scalar angle, scalar radius);

            ~Vector2F() = default;

            scalar getX() const;

            scalar getY() const;

            Vector2F &setX(scalar newX);

            Vector2F &setY(scalar newY);

            Vector2F &reset();

            Vector2F &set(scalar newXY);

            Vector2F &set(scalar newX, scalar newY);

            friend Vector2F operator+(const Vector2F &lhs, const Vector2F &rhs);

            friend Vector2F operator-(const Vector2F &lhs, const Vector2F &rhs);

            friend scalar operator*(const Vector2F &lhs, const Vector2F &rhs);

            friend Vector2F operator*(const Vector2F &lhs, scalar rhs);

            Vector2F &operator+=(const Vector2F &rhs);

            Vector2F &operator-=(const Vector2F &rhs);

            Vector2F &operator*=(scalar rhs);

            bool operator==(const Vector2F &rhs) const;

            bool operator!=(const Vector2F &rhs) const;

            scalar size() const;

            scalar distance(const Vector2F &rhs) const;

            bool isCloseTo(const Vector2F &rhs, scalar distance) const;

            friend std::ostream &operator<<(std::ostream &out, const Vector2F &rhs);
    };
} // world

#endif //SIMMEDIEVAL_VECTOR2F_H
