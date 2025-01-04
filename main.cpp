#include <iostream>
#include "core/world/geo/Vector2F.h"
#include "core/world/sim/structure/Farm.h"
#include "core/world/sim/structure/Castle.h"
#include <cmath>

using namespace std;
using namespace world::geo;
using namespace world::sim::structure;

int main() {
    auto farm = Farm("Campbell", 20.0f, 20.0f, 10.0f, 4.0f);
    auto castle = Castle("Rivendale", 20.0f, 10.0f, 100.f);
    cout << farm << endl;
    cout << castle << endl;
    farm.update(1);
    castle.update(1);
    cout << farm << endl;
    cout << castle << endl;
    farm.update(1);
    castle.update(1);
    cout << farm << endl;
    cout << castle << endl;
    farm.update(1);
    castle.update(1);
    cout << farm << endl;
    cout << castle << endl;
    farm.update(1);
    castle.update(1);
    return 0;
}
