//
// Created by Tamir Eliraz on 02/01/2025.
//

#ifndef SIMMEDIEVAL_VECTOR2F_H
#define SIMMEDIEVAL_VECTOR2F_H

#include "../../Core.h"

namespace world::geo {
    class Vector2F {
        private:
            float x;
            float y;
        public:
            explicit Vector2F();

            explicit Vector2F(float xy);

            explicit Vector2F(float x, float y);

            ~Vector2F() = default;

            float getX() const;

            float getY() const;

            Vector2F &setX(float newX);

            Vector2F &setY(float newY);

            Vector2F &reset();

            Vector2F &set(float newXY);

            Vector2F &set(float newX, float newY);

            friend std::ostream &operator<<(std::ostream &out, const Vector2F &rhs);
    };
} // world

#endif //SIMMEDIEVAL_VECTOR2F_H
