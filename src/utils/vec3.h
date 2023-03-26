#ifndef VORONOI_WORLD_GEN_VEC2_H
#define VORONOI_WORLD_GEN_VEC2_H
#include <cmath>
#include <iostream>

class vec3{
public:
    float x;
    float y;
    float z;
    vec3(float x, float y, float z);
    vec3 normalize(vec3 vec)
    {
        float length = sqrt((vec.x*vec.x) + (vec.y*vec.y) + (vec.z*vec.z));
        return vec3(vec.x/length,vec.y/length,vec.z/length);
    }
};

#endif //VORONOI_WORLD_GEN_VEC2_H
