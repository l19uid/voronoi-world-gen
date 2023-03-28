#ifndef RANDOM_H
#define RANDOM_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <SFML/Graphics.hpp>

class random {
public:
    static int randomInt(int min, int max)
    {
        std::srand(std::time(nullptr)); // set seed to current time
        return rand() % max + min; // returns random int between min and max
    }

    static float randomFloat(float min, float max)
    {
        std::srand(std::time(nullptr)); // set seed to current time
        return min + static_cast <float> (rand()) /( static_cast <float> (RAND_MAX/(max-min))); // returns random float between min and max
    }

    static sf::Color randomColor()
    {
        std::srand(std::time(nullptr)); // set seed to current time
        return sf::Color(randomInt(0, 255), randomInt(0, 255), randomInt(0, 255)); // returns random color
    }

    static sf::Vector2f randomVector2f(int min, int max)
    {
        std::srand(std::time(nullptr)); // set seed to current time
        return sf::Vector2f(randomInt(min, max), randomInt(min, max)); // returns random vector2 float
    }
};
#endif //RANDOM_H
