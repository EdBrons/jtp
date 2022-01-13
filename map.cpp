#include "map.h"
#include <math.h>

Vector::Vector(float x, float y, float z): x(x), y(y), z(z) {}
Vector::Vector(const Vector &v): x(v.x), y(v.y), z(v.y) {}

float Vector::norm() {
    return sqrt( (x * x) + (y * y) + (z * z) );
}

Rect::Rect(Vector p, Vector b): pos(p), bounds(b) {}
