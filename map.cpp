#include "map.h"

Vector::Vector(float x, float y, float z): x(x), y(y), z(z) {}
Vector::Vector(const Vector &v): x(v.x), y(v.y), z(v.y) {}


Rect::Rect(Vector p, Vector b): pos(p), bounds(b) {}
