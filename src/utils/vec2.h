#ifndef VORONOI_WORLD_GEN_VEC2_H
#define VORONOI_WORLD_GEN_VEC2_H
#include <cmath>
#include <iostream>

class vec2{
public:
    float x;
    float y;
    vec2(float x, float y);
    vec2 normalize(vec2 vec)
    {
        float length = sqrt((vec.x*vec.x) + (vec.y*vec.y));
        return vec2(vec.x/length,vec.y/length);
    }
};

#endif //VORONOI_WORLD_GEN_VEC2_H
