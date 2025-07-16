module;
#include<string>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/Text.hpp>
#include <iostream>
#include <vector>
#include <array>
#include <random>
#include <memory>

export module utilities; 
//Managing memory through std::vector..The best way to go!
namespace dm_1
{
export void app(){
        constexpr int width{600};
        constexpr int height{600};
        constexpr float circle_radius{40.f};
        constexpr float clock_period{1.f};
        const std::string title{"SFML Shape Animator!"};
        sf::Color shape_color{sf::Color::White};
        sf::Color background_color{sf::Color::Black};
        sf::Clock clock; //Timer starts ticking the moment the clock is created
        unsigned int counter{0};
        constexpr float move_interval {.05f};
        
    

 sf::RenderWindow window(sf::VideoMode(width, height), title);
        //sf::CircleShape shape(circle_radius);
        //shape.setFillColor(shape_color);

std::vector<sf::CircleShape> shapes; //setup of vector to contain circles in vector shapes
std::vector<sf::Vector2f> directions;// Vector to store movement direction in x and y coordinates
sf::Color color[4] {sf::Color::Red,sf::Color::White,sf::Color::Blue,sf::Color::Magenta};


       //set up the different circles
    for(size_t i{0};i<5;++i){
     sf::CircleShape shape(circle_radius);
     shape.setPosition(100.f*(i+1),100.f);
     shape.setFillColor(sf::Color((50*i),(100+30*i),200-(40*i)));
     shapes.push_back(shape);

     directions.push_back(sf::Vector2f(20.f,20.f));
    }
        while (window.isOpen())
        {
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
            }
            
        }
        
 /*
   if (event.type== sf::Event::KeyPressed){
   
                if (event.key.code==sf::Keyboard::Space){
                   for(size_t i{0};i<shapes.size();++i){
                    auto direction= directions[i];
                    shapes[i].move(direction);
                   }
                std::cout<<"Space key pressed- Something should happen"<<std::endl;
                }
          

        }
                 */ 
                //timer based movements
        if(clock.getElapsedTime().asSeconds()>move_interval){
            for (size_t i{0};i<shapes.size();++i){
                auto& shape= shapes[i];
                auto& direction=directions[i];
                //Get the current position of the shape
                sf::Vector2f position =shape.getPosition();
                //Check for collisions with window edges and reverse directions
                if(position.x<=0.f||position.x+ circle_radius*2>=width){
                        direction.x=-direction.x; }//reverse horizontal directions
                if(position.y<=0.f||position.y+ circle_radius*2>=height){
                        direction.y=-direction.y; //reverse vertical directions
                        }
               shape.move(direction);
                }
             clock.restart();    
        }
        
        
    
            window.clear(background_color);
            //window.draw(shape);
            for(size_t i{0};i<shapes.size();++i){
                window.draw(shapes[i]);
               
    }
            window.display();
    }
    }

}
//Managing the dynamic memory utilizing the new and delete operators with raw pointers. The worst way to go!
namespace dm_2
{
export void app(){
        constexpr int width{600};
        constexpr int height{600};
        constexpr float circle_radius{40.f};
        constexpr float clock_period{1.f};
        constexpr size_t shape_count{5};
        const std::string title{"SFML Shape Animator!"};
        sf::Color shape_color{sf::Color::White};
        sf::Color background_color{sf::Color::Black};
        sf::Clock clock; //Timer starts ticking the moment the clock is created
        unsigned int counter{0};
        constexpr float move_interval {.05f};
        
    

 sf::RenderWindow window(sf::VideoMode(width, height), title);
        //sf::CircleShape shape(circle_radius);
        //shape.setFillColor(shape_color);
/*
std::vector<sf::CircleShape> shapes; //setup of vector to contain circles in vector shapes
std::vector<sf::Vector2f> directions;// Vector to store movement direction in x and y coordinates
*/
sf::CircleShape* shapes= new sf::CircleShape[shape_count];
sf::Vector2f* directions= new sf::Vector2f[shape_count];
sf::Color color[4] {sf::Color::Red,sf::Color::White,sf::Color::Blue,sf::Color::Magenta};


       //set up the different circles
    for(size_t i{0};i<shape_count;++i){
        /*
     sf::CircleShape shape(circle_radius);
     shape.setPosition(100.f*(i+1),100.f);
     shape.setFillColor(sf::Color((50*i),(100+30*i),200-(40*i)));
     shapes.push_back(shape);
     directions.push_back(sf::Vector2f(20.f,20.f));
     */

     shapes[i]=sf::CircleShape(circle_radius);
     shapes[i].setPosition(100.f*(i+1),100.f);
     shapes[i].setFillColor(sf::Color(50*i,(30*i),200-(40*1)));

     directions[i]=sf::Vector2(20.f,20.f);
    }
        while (window.isOpen())
        {
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
            }
            
        }
        
 /*
   if (event.type== sf::Event::KeyPressed){
   
                if (event.key.code==sf::Keyboard::Space){
                   for(size_t i{0};i<shapes.size();++i){
                    auto direction= directions[i];
                    shapes[i].move(direction);
                   }
                std::cout<<"Space key pressed- Something should happen"<<std::endl;
                }
          

        }
                 */ 
                //timer based movements
        if(clock.getElapsedTime().asSeconds()>move_interval){
            for (size_t i{0};i<shape_count;++i){
                auto& shape= shapes[i];
                auto& direction=directions[i];
                //Get the current position of the shape
                sf::Vector2f position =shape.getPosition();
                //Check for collisions with window edges and reverse directions
                if(position.x<=0.f||position.x+ circle_radius*2>=width){
                        direction.x=-direction.x; }//reverse horizontal directions
                if(position.y<=0.f||position.y+ circle_radius*2>=height){
                        direction.y=-direction.y; //reverse vertical directions
                        }
               shape.move(direction);
                }
             clock.restart();    
        }
        
        
    
            window.clear(background_color);
            //window.draw(shape);
            for(size_t i{0};i<shape_count;++i){
                window.draw(shapes[i]);
               
    }
            window.display();
    }
//Release memory
delete[] shapes;
delete[] directions;
}
}
namespace dm_3
{
export void app(){
 constexpr int width{600};
        constexpr int height{600};
        constexpr float circle_radius{40.f};
        constexpr float clock_period{1.f};
        constexpr size_t shape_count{5};
        const std::string title{"SFML Shape Animator!"};
        sf::Color shape_color{sf::Color::White};
        sf::Color background_color{sf::Color::Black};
        sf::Clock clock; //Timer starts ticking the moment the clock is created
        unsigned int counter{0};
        constexpr float move_interval {.05f};
        
    

 sf::RenderWindow window(sf::VideoMode(width, height), title);


//Use smart pointers

auto shapes=std::make_unique<sf::CircleShape[]>(shape_count);
auto directions=std::make_unique<sf::Vector2f[]>(shape_count);

sf::Color color[4] {sf::Color::Red,sf::Color::White,sf::Color::Blue,sf::Color::Magenta};


       //set up the different circles
    for(size_t i{0};i<shape_count;++i){
 

     shapes[i]=sf::CircleShape(circle_radius);
     shapes[i].setPosition(100.f*(i+1),100.f);
     shapes[i].setFillColor(sf::Color(50*i,(30*i),200-(40*i)));

     directions[i]=sf::Vector2(20.f,20.f);
    }
        while (window.isOpen())
        {
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
            }
            
        }
        
 /*
   if (event.type== sf::Event::KeyPressed){
   
                if (event.key.code==sf::Keyboard::Space){
                   for(size_t i{0};i<shapes.size();++i){
                    auto direction= directions[i];
                    shapes[i].move(direction);
                   }
                std::cout<<"Space key pressed- Something should happen"<<std::endl;
                }
          

        }
                 */ 
                //timer based movements
        if(clock.getElapsedTime().asSeconds()>move_interval){
            for (size_t i{0};i<shape_count;++i){
                auto& shape= shapes[i];
                auto& direction=directions[i];
                //Get the current position of the shape
                sf::Vector2f position =shape.getPosition();
                //Check for collisions with window edges and reverse directions
                if(position.x<=0.f||position.x+ circle_radius*2>=width){
                        direction.x=-direction.x; }//reverse horizontal directions
                if(position.y<=0.f||position.y+ circle_radius*2>=height){
                        direction.y=-direction.y; //reverse vertical directions
                        }
               shape.move(direction);
                }
             clock.restart();    
        }
        
        
    
            window.clear(background_color);
            //window.draw(shape);
            for(size_t i{0};i<shape_count;++i){
                window.draw(shapes[i]);
               
    }
            window.display();
    }

}

}

