//
// Created by Tamir Eliraz on 02/01/2025.
//

#ifndef SIMMEDIEVAL_VECTOR2F_H
#define SIMMEDIEVAL_VECTOR2F_H

#include "../../Core.h"

/**
 * Represents a 2D vector with floating-point components (x, y).
 * Provides operations for vector arithmetic, scaling, distance calculation,
 * and creating vectors using polar coordinates.
 */
namespace world::geo {
    /**
     * A scalar type representing the components of the vector.
     */
    typedef float scalar;

    /**
     * A 2D vector class for performing mathematical operations in a 2D space.
     */
    class Vector2F {
        private:
            scalar x; ///< The x-coordinate of the vector.
            scalar y; ///< The y-coordinate of the vector.

        public:
            /**
             * Default constructor. Initializes the vector to (0, 0).
             */
            explicit Vector2F();

            /**
             * Constructor that initializes both x and y to the same scalar value.
             * @param xy The value for both x and y components.
             */
            explicit Vector2F(scalar xy);

            /**
             * Constructor that initializes the vector with specific x and y values.
             * @param x The x-coordinate.
             * @param y The y-coordinate.
             */
            explicit Vector2F(scalar x, scalar y);

            /**
             * Creates a vector from a polar representation using an angle in radians.
             * @param angle The angle in radians.
             * @param radius The magnitude of the vector.
             * @return A new vector corresponding to the given angle and radius.
             */
            static Vector2F createVectorUsingAngleAndRadiusRad(scalar angle, scalar radius);

            /**
             * Creates a vector from a polar representation using an angle in degrees.
             * @param angle The angle in degrees.
             * @param radius The magnitude of the vector.
             * @return A new vector corresponding to the given angle and radius.
             */
            static Vector2F createVectorUsingAngleAndRadiusDeg(scalar angle, scalar radius);

            /**
             * Destructor for the Vector2F class.
             */
            ~Vector2F() = default;

            /**
             * Gets the x-coordinate of the vector.
             * @return The x-coordinate.
             */
            scalar getX() const;

            /**
             * Gets the y-coordinate of the vector.
             * @return The y-coordinate.
             */
            scalar getY() const;

            /**
             * Sets a new x-coordinate for the vector.
             * @param newX The new x-coordinate.
             * @return A reference to the updated vector.
             */
            Vector2F &setX(scalar newX);

            /**
             * Sets a new y-coordinate for the vector.
             * @param newY The new y-coordinate.
             * @return A reference to the updated vector.
             */
            Vector2F &setY(scalar newY);

            /**
             * Resets the vector to (0, 0).
             * @return A reference to the reset vector.
             */
            Vector2F &reset();

            /**
             * Sets both components of the vector to the same value.
             * @param newXY The new value for both x and y.
             * @return A reference to the updated vector.
             */
            Vector2F &set(scalar newXY);

            /**
             * Sets the x and y components of the vector to specific values.
             * @param newX The new x-coordinate.
             * @param newY The new y-coordinate.
             * @return A reference to the updated vector.
             */
            Vector2F &set(scalar newX, scalar newY);

            /**
             * Adds two vectors and returns the result.
             * @param lhs The left-hand side vector.
             * @param rhs The right-hand side vector.
             * @return The resulting vector.
             */
            friend Vector2F operator+(const Vector2F &lhs, const Vector2F &rhs);

            /**
             * Subtracts one vector from another and returns the result.
             * @param lhs The left-hand side vector.
             * @param rhs The right-hand side vector.
             * @return The resulting vector.
             */
            friend Vector2F operator-(const Vector2F &lhs, const Vector2F &rhs);

            /**
             * Computes the dot product of two vectors.
             * @param lhs The left-hand side vector.
             * @param rhs The right-hand side vector.
             * @return The dot product as a scalar.
             */
            friend scalar operator*(const Vector2F &lhs, const Vector2F &rhs);

            /**
             * Multiplies the vector by a scalar value.
             * @param lhs The vector to scale.
             * @param rhs The scalar value.
             * @return The scaled vector.
             */
            friend Vector2F operator*(const Vector2F &lhs, scalar rhs);

            /**
             * Adds another vector to this vector in-place.
             * @param rhs The vector to add.
             * @return A reference to the updated vector.
             */
            Vector2F &operator+=(const Vector2F &rhs);

            /**
             * Subtracts another vector from this vector in-place.
             * @param rhs The vector to subtract.
             * @return A reference to the updated vector.
             */
            Vector2F &operator-=(const Vector2F &rhs);

            /**
             * Scales this vector by a scalar value in-place.
             * @param rhs The scalar value.
             * @return A reference to the updated vector.
             */
            Vector2F &operator*=(scalar rhs);

            /**
             * Checks if two vectors are equal.
             * @param rhs The vector to compare with.
             * @return True if the vectors are equal; otherwise, false.
             */
            bool operator==(const Vector2F &rhs) const;

            /**
             * Checks if two vectors are not equal.
             * @param rhs The vector to compare with.
             * @return True if the vectors are not equal; otherwise, false.
             */
            bool operator!=(const Vector2F &rhs) const;

            /**
             * Computes the magnitude (length) of the vector.
             * @return The magnitude as a scalar.
             */
            scalar size() const;

            /**
             * Computes the distance between this vector and another vector.
             * @param rhs The other vector.
             * @return The distance as a scalar.
             */
            scalar distance(const Vector2F &rhs) const;

            /**
             * Checks if this vector is close to another vector within a specified distance.
             * @param rhs The other vector.
             * @param distance The maximum allowed distance.
             * @return True if the vectors are close; otherwise, false.
             */
            bool isCloseTo(const Vector2F &rhs, scalar distance) const;

            /**
             * Outputs the vector components to a stream in the format "(x, y)".
             * @param out The output stream.
             * @param rhs The vector to output.
             * @return The output stream.
             */
            friend std::ostream &operator<<(std::ostream &out, const Vector2F &rhs);
    };
}

#endif //SIMMEDIEVAL_VECTOR2F_H
