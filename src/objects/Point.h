#include "../utils/vec2.h"

class Point {
public:
    vec2 GetPosition();
    Point(vec2 position);

    Point();

private:
    vec2 _position = vec2(0, 0);
};
