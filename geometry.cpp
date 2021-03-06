#include "geometry.h"
#include <math.h>

Vector::Vector(float x, float y, float z): x(x), y(y), z(z) {}
Vector::Vector(const Vector &v): x(v.x), y(v.y), z(v.y) {}

float Vector::norm() {
    return sqrt( (x * x) + (y * y) + (z * z) );
}
float Vector::snorm() {
    return (x * x) + (y * y) + (z * z);
}
float Vector::distance_to(const Vector &v) {
    return (*this - v).norm();
}
float Vector::sdistance_to(const Vector &v) {
    return (*this - v).snorm();
}

Rect::Rect(Vector p, Vector b): pos(p), bounds(b) {}

bool Rect::contains(const Vector &v) {
    return v.x >= pos.x 
        && v.y >= pos.y 
        && v.z >= pos.z
        && v.x <= pos.x + bounds.x
        && v.y <= pos.y + bounds.y
        && v.z <= pos.z + bounds.z;
}
