#ifndef __GEOMETRY_H
#define __GEOMETRY_H

class Vector {
public:
    float x;
    float y;
    float z;

    Vector(float x, float y, float z);
    Vector(const Vector &v);
    Vector operator + (const Vector &v) {
        return Vector(x + v.x, y + v.y, z + v.z);
    }
    Vector operator - (const Vector &v) {
        return Vector(x - v.x, y - v.y, z - v.z);
    }

    float norm();
    float snorm();
    float distance_to(const Vector &v);
    float sdistance_to(const Vector &v);
};

class Rect {
public:
    Vector pos;
    Vector bounds;

    Rect(Vector p, Vector b);
    /* NOTE: this includes the edges */
    bool contains(const Vector &v);
};

#endif
