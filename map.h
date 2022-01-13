#ifndef __MAP_H
#define __MAP_H

class Vector {
public:
    int x;
    int y;
    int z;
    Vector(int x, int y, int z);
    Vector(const Vector &v);
    Vector operator + (const Vector &v) {
        return Vector(x + v.x, y + v.y, z + v.z);
    }
    Vector operator - (const Vector &v) {
        return Vector(x - v.x, y - v.y, z - v.z);
    }
};

class World {
};

#endif
