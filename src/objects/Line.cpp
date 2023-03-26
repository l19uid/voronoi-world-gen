//
// Created by Liquid on 3/26/2023.
//

#include "Line.h"

Point Line::GetPointA() {
    return _pointA;
}

Point Line::GetPointB() {
    return _pointB;
}

Line::Line(Point pointA,Point pointB)
{
    _pointA = pointA;
    _pointB = pointB;
}