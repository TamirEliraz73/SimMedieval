#include <iostream>
#include "core/world/geo/Vector2F.h"
#include <cmath>

using namespace std;
using namespace world::geo;

int main() {
    auto vec = Vector2F();
    auto vec2 = Vector2F();
    cout << vec << endl;
    vec.set(12.0f);
    cout << vec << endl;
    vec.set(3.5f, M_PI);
    cout << vec << endl;
    vec.set(3.0f, 4.0f);
    cout << vec.distance(vec2) << endl;
    cout << vec2.distance(vec) << endl;
    return 0;
}
