module;
#include <SFML/Graphics.hpp>
export module newcolor;

export void app2(){

    sf::RenderWindow window(sf::VideoMode(300, 300), "This circle is blue!!");
    sf::CircleShape shape(150.f);
    shape.setFillColor(sf::Color::Yellow);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
}