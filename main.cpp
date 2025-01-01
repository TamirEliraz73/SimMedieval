#include <iostream>
#include "core/world/geo/Vector2F.h"
#include <cmath>
using namespace std;
using namespace world::geo;

int main() {
    auto vec = Vector2F();
    cout << vec << endl;
    vec.set(12.0f);
    cout << vec << endl;
    vec.set(3.5f, M_PI);
    cout << vec << endl;
    return 0;
}
