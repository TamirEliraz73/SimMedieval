//
// Created by Tamir Eliraz on 04/01/2025.
//

#ifndef SIMMEDIEVAL_STRUCTURE_H
#define SIMMEDIEVAL_STRUCTURE_H

#include "../SimObject.h"

namespace world::sim::structure {

    class Structure : public world::sim::SimObject {
        protected:
            float currentInventory;

            explicit Structure(std::string name, float x, float y, float initialInventory);

            void print(std::ostream &out) const override;

        public:
            ~Structure() override = default;

            [[nodiscard]] float getCurrentInventory() const;
    };

} // structure

#endif //SIMMEDIEVAL_STRUCTURE_H
