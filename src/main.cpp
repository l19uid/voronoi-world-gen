#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

using namespace sf;
using namespace std;

int main() {
    Vector2f resolution = Vector2f(800, 600);
    RenderWindow window;
    const unsigned int FPS = 60;
    static const Time TimePerFrame;

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }
        window.clear(Color::White);
        window.display();
    }
}
