#include "Point.h"

vec2 Point::GetPosition() {
    return this->_position;
}

Point::Point(vec2 position) {
    this->_position = position;
}

Point::Point() {}
