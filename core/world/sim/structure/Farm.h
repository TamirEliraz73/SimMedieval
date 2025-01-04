//
// Created by Tamir Eliraz on 04/01/2025.
//

#ifndef SIMMEDIEVAL_FARM_H
#define SIMMEDIEVAL_FARM_H

#include "Structure.h"

namespace world::sim::structure {

    class Farm : public Structure {
        private:
            const float updateInventory;
            [[nodiscard]] std::string getClassName() const override;
        public:
            explicit Farm(std::string name, float x, float y, float initialInventory, float updateInventory);

            ~Farm() override = default;

            void update(float dt) override;
    };

} // structure

#endif //SIMMEDIEVAL_FARM_H
