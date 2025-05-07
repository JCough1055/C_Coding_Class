module;
#include<string>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <iostream>
export module utilities; 
export void app(){
    constexpr int width{350};
    constexpr int height{350};
    constexpr float circle_radius{150.f};
    const std::string title{"This is text in title bar!"};
    sf::Color shape_color{sf::Color::White};
    sf::Color background_color{sf::Color::Red};


    sf::RenderWindow window(sf::VideoMode(width, height), title);
    sf::CircleShape shape(circle_radius);
    shape.setFillColor(shape_color);

    while (window.isOpen())
    {sf::Event event;
       while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed){
                window.close();
        }
       if (event.type== sf::Event::KeyPressed){
            if (event.key.code==sf::Keyboard::Escape){
                window.close();
               std::cout<<"Escape key pressed- Application has ended"<<std::endl;
            }
            if (event.key.code==sf::Keyboard::A){
                
               std::cout<<"A key pressed!!! Color should be green"<<std::endl;
               shape.setFillColor(sf::Color::Green);
            }
            if (event.key.code==sf::Keyboard::B){
                
                std::cout<<"B key pressed!!!Color should be Yellow"<<std::endl;
                shape.setFillColor(sf::Color::Yellow);
             }

        }
    
}
        window.clear(background_color);
        window.draw(shape);
        window.display();
}
}