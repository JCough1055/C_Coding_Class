module;
#include<string>
#include <SFML/Graphics.hpp>
export module utilities; 
export void app(){
    int width{350};
    int height{350};
    float circle_radius{150.f};
    std::string title{"The circle is blue!"};
    sf::Color shape_color{sf::Color::White};
    sf::Color background_color{sf::Color::Red};


    sf::RenderWindow window(sf::VideoMode(width, height), title);
    sf::CircleShape shape(circle_radius);
    shape.setFillColor(shape_color);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(background_color);
        window.draw(shape);
        window.display();
    }
}