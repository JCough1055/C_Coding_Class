module;
#include<string>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/Text.hpp>
#include <iostream>
export module utilities; 
export void app(){
    constexpr int width{200};
    constexpr int height{200};
    constexpr float circle_radius{100.f};
    constexpr float clock_period{1.f};
    const std::string title{"This is text in title bar!"};
    sf::Color shape_color{sf::Color::Magenta};
    sf::Color background_color{sf::Color::Red};
    sf::Clock clock; //Timer starts ticking the moment the clock is created
    unsigned int counter{0};


    sf::RenderWindow window(sf::VideoMode(width, height), title);
    sf::CircleShape shape(circle_radius);
    shape.setFillColor(shape_color);


    while (window.isOpen())
    {
        //Timing
        sf::Time elapsed=clock.getElapsedTime();
        if (elapsed.asSeconds()> clock_period){
                     counter++;
                     if (counter%2==0){
                        shape.setFillColor(sf::Color::Green);
                        std::cout<<"Shape color is green"<<std::endl;
                     }
                     else{
                        shape.setFillColor(sf::Color::Magenta);
                        std::cout<<"Shape color is magenta"<<std::endl;
                     }
                     clock.restart(); //Restart the clock
            std::cout<<"Counter is "<<counter<<std::endl;
        }
        
        
        
        sf::Event event;
       while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed){
                window.close();
        }

        //Key events
       if (event.type== sf::Event::KeyPressed){
            if (event.key.code==sf::Keyboard::Escape){
                window.close();
               std::cout<<"Escape key pressed- Application has ended"<<std::endl;
            }
            //CHeck for keys A and B which will change the color of the shape
            if (event.key.code==sf::Keyboard::A){
                
               std::cout<<"A key pressed!!! Color should be green"<<std::endl;
               shape.setFillColor(sf::Color::Green);
            }
            if (event.key.code==sf::Keyboard::B){
                
                std::cout<<"B key pressed!!!Color should be Yellow"<<std::endl;
                shape.setFillColor(sf::Color::Yellow);
             }
             //Check for keys C and D which will increase and decrease the radius of the shape
             if (event.key.code==sf::Keyboard::C){
                shape.setRadius(shape.getRadius()+10.f);
                std::cout<<"C key pressed!!!Radius should increase"<<std::endl;
             std::cout<<"The new radius is "<<shape.getRadius()<<std::endl;
             }
             if (event.key.code==sf::Keyboard::D){
                shape.setRadius(shape.getRadius()-10.f);
                std::cout<<"D key pressed!!!Radius should increase"<<std::endl;
                std::cout<<"The new radius is "<<shape.getRadius()<<std::endl;
             }
        }
    //Mouse events
    //Check for mouse button pressed
    if(event.type==sf::Event::MouseButtonPressed){
        if (event.mouseButton.button==sf::Mouse::Left){
            std::cout<<"Left mouse button pressed"<<std::endl;
            shape.setFillColor(sf::Color::Blue);
        }
        if (event.mouseButton.button==sf::Mouse::Right){
            std::cout<<"Right mouse button pressed"<<std::endl;
            shape.setFillColor(sf::Color::White);
        }
    }
}
        window.clear(background_color);
        window.draw(shape);
        window.display();
}
}