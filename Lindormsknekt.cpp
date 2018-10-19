#include <iostream>
#include "lib/SFML-2.5.1/include/SFML/Window.hpp"
using namespace std;

int main()
{
    cout << "Hello, World!";

    sf::Window window(sf::VideoMode(800, 600), "My window");
    
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}