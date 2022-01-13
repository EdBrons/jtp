#ifndef __MAP_H
#define __MAP_H

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
};

class Rect {
public:
    Vector pos;
    Vector bounds;

    Rect(Vector p, Vector b);
};

class World {
};

#endif
