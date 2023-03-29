#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include "objects/World.h"

using namespace sf;
using namespace std;

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");

    World world = World(20, 0);
    world.Generate();

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        world.Render(window);
        window.display();
    }
}
