//
// Created by Tamir Eliraz on 04/01/2025.
//

#ifndef SIMMEDIEVAL_CASTLE_H
#define SIMMEDIEVAL_CASTLE_H

#include "Structure.h"

namespace world::sim::structure {
    class Castle: public Structure  {
        private:
            [[nodiscard]] std::string getClassName() const override;
        public:
            explicit Castle(std::string name, float x, float y, float initialInventory);

            ~Castle() override = default;

            void update(float dt) override;
    };

} // structure


#endif //SIMMEDIEVAL_CASTLE_H
