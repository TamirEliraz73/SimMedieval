//
// Created by Tamir Eliraz on 02/01/2025.
//

#ifndef SIMMEDIEVAL_CORE_H
#define SIMMEDIEVAL_CORE_H

#include <ostream>
#include <iomanip>
#include <memory>
#include <algorithm>

namespace world {
    namespace geo {
        class Vector2F;

        class Movement;
    }
    namespace sim {
        class SimObject;
        namespace agent {
            class Agent;

            class Peasant;

            class Knight;

            class Thug;
        }
        namespace structure {
            class Structure;

            class Castle;

            class Farm;
        }
    }
    namespace mvc {
        namespace model {
            class Model;

            class Stage;
        }
        namespace view {
            class View;
        }
        namespace controller {
            class Controller;
        }
    }
}

#endif //SIMMEDIEVAL_CORE_H
