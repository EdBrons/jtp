#include "map.h"

Vector::Vector(int x, int y, int z): x(x), y(y), z(z) {}
Vector::Vector(const Vector &v): x(v.x), y(v.y), z(v.y) {}
