//
// Created by Tamir Eliraz on 04/01/2025.
//

#ifndef SIMMEDIEVAL_SIMOBJECT_H
#define SIMMEDIEVAL_SIMOBJECT_H

#include "../../Core.h"

namespace world::sim {
    class SimObject {
        protected:
            const std::string name;
            const std::shared_ptr<geo::Vector2F> position;

            explicit SimObject(std::string name, float x, float y);

            [[nodiscard]] virtual std::string getClassName() const = 0;

            virtual void print(std::ostream &out) const;

        public:
            virtual ~SimObject() = default;

            virtual void update(float dt) = 0;

            virtual bool operator==(const SimObject &rhs) const;

            virtual bool operator!=(const SimObject &rhs) const;

            [[nodiscard]] const std::string &getName() const;

            [[nodiscard]] const std::shared_ptr<geo::Vector2F> &getPosition() const;

            friend std::ostream &operator<<(std::ostream &out, const SimObject &rhs);
    };

} // sim

#endif //SIMMEDIEVAL_SIMOBJECT_H
