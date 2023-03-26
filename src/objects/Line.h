#ifndef VORONOI_WORLD_GEN_LINE_H
#define VORONOI_WORLD_GEN_LINE_H

#include "Point.h"


class Line {
private:
    Point _pointA;
    Point _pointB;
public:
    Line(Point PointA,Point PointB);
    Point GetPointA();
    Point GetPointB();
};


#endif //VORONOI_WORLD_GEN_LINE_H
