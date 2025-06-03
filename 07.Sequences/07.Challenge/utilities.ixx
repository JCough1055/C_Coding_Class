module;

#include<string>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/Text.hpp>
#include <iostream>
#include <vector>
#include <array>
#include <random>

export module utilities; 
namespace it_1{
    export void app(){
        constexpr int width{250};
        constexpr int height{250};
        float circle_radius{10.f};
        constexpr float clock_period{1.f};
        const std::string title{"SFML title bar!"};
        sf::Color shape_color{sf::Color::White};
        sf::Color background_color{sf::Color::Red};
        sf::Clock clock; //Timer starts ticking the moment the clock is created
        unsigned int counter{0};


        sf::RenderWindow window(sf::VideoMode(width, height), title);
        //sf::CircleShape shape(circle_radius);
        //shape.setFillColor(shape_color);

        std::vector<sf::CircleShape> shapes; //setup of vector to contain circles in vector shapes
        
    for(size_t i{0};i<5;++i){
        sf::CircleShape shape(circle_radius+i*5);
        shape.setFillColor(sf::Color::Blue);
        shape.setPosition(i*45.f,50.f);
        shapes.push_back(shape);
    }
        while (window.isOpen())
        {
            //Timing
        
            
            
            
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
                    std::cout<<"A was pressed. Color should change to green!"<<std::endl;
                    for (auto&shape: shapes){
                        shape.setFillColor(sf::Color::Green);
                    }
            
                }
                if (event.key.code==sf::Keyboard::B){
                    std::cout<<"B was pressed. Color should change to green!"<<std::endl;
                    for (auto&shape: shapes){
                        shape.setFillColor(sf::Color::Yellow);;
                    }
                }
                //Check for keys C and D which will increase and decrease the radius of the shape
                if (event.key.code==sf::Keyboard::C){
                 std::cout<<"C was pressed. Radius increase!"<<std::endl;
                    for (auto&shape: shapes){
                        shape.setRadius(shape.getRadius()
                            +10);
                }
            }
                if (event.key.code==sf::Keyboard::D){
                std::cout<<"D was pressed. Radius decrease!"<<std::endl;
                    for (auto&shape: shapes){
                        if(shape.getRadius()>10.f)
                        {
                        shape.setRadius(shape.getRadius()
                            -10);
                        }
                }
            }
        }
        //Mouse events
        
        
    }
            window.clear(background_color);
            //window.draw(shape);
            for(size_t i{0};i<5;++i){
                window.draw(shapes[i]);
    }
            window.display();
    }
    }


}// Namespace It_1

 namespace it_2{
 export void app(){
        constexpr int width{250};
        constexpr int height{250};
        float circle_radius{10.f};
        constexpr float clock_period{1.f};
        const std::string title{"SFML title bar!"};
        sf::Color shape_color{sf::Color::White};
        sf::Color background_color{sf::Color::Red};
        sf::Clock clock; //Timer starts ticking the moment the clock is created
        unsigned int counter{0};


        sf::RenderWindow window(sf::VideoMode(width, height), title);
        //sf::CircleShape shape(circle_radius);
        //shape.setFillColor(shape_color);

        std::vector<sf::CircleShape> shapes; //setup of vector to contain circles in vector shapes
        std::array<char,5> key_history{' ',' ',' ',' ',' '};
        size_t key_index{0};
        
    for(size_t i{0};i<5;++i){
        sf::CircleShape shape(circle_radius+i*5);
        shape.setFillColor(sf::Color::Blue);
        shape.setPosition(i*45.f,50.f);
        shapes.push_back(shape);
    }
        while (window.isOpen())
        {
            //Timing
        
            
            
            
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
                char pressed_key{' '};
                if (event.key.code==sf::Keyboard::A){
                    std::cout<<"A was pressed. Color should change to green!"<<std::endl;
                    pressed_key='A';
                    for (auto&shape: shapes){
                        shape.setFillColor(sf::Color::Green);
                    }
            
                }
                if (event.key.code==sf::Keyboard::B){
                    std::cout<<"B was pressed. Color should change to yellow!"<<std::endl;
                    pressed_key='B';
                    for (auto&shape: shapes){
                        shape.setFillColor(sf::Color::Yellow);;
                    }
                }
                //Check for keys C and D which will increase and decrease the radius of the shape
                if (event.key.code==sf::Keyboard::C){
                 std::cout<<"C was pressed. Radius increase!"<<std::endl;
                 pressed_key='C';
                    for (auto&shape: shapes){
                        shape.setRadius(shape.getRadius()
                            +10);
                }
            }
                if (event.key.code==sf::Keyboard::D){
                std::cout<<"D was pressed. Radius decrease!"<<std::endl;
                pressed_key='D';
                    for (auto&shape: shapes){
                        if(shape.getRadius()>10.f)
                        {
                        shape.setRadius(shape.getRadius()
                            -10);
                        }
                }
            }
            if(pressed_key != ' '){
                /*
                //Not ideal because this places most recent key at the most circular index
                key_history[key_index]=pressed_key;
                key_index=(key_index+1) % key_history.size();
                */
               //We want the most recent recent key to be at index 0
               for( size_t i=key_history.size()-1;i>0;--i){
                key_history[i]=key_history[i-1];
               }
               //Store the most recent key at index 0
               key_history[0]=pressed_key;
               //Print the last key pressed
                std::cout<<"Key history:";
                for( char key: key_history){
                    std::cout<<key<<' ';
                }
                std::cout<<"\n";
            }
        }
        //Mouse events
        
        
    }
            window.clear(background_color);
            //window.draw(shape);
            for(size_t i{0};i<5;++i){
                window.draw(shapes[i]);
    }
            window.display();
    }
    }

 }
namespace it_3{
export void app(){
        constexpr int width{250};
        constexpr int height{250};
        float circle_radius{10.f};
        constexpr float clock_period{1.f};
        const std::string title{"SFML title bar!"};
        sf::Color shape_color{sf::Color::White};
        sf::Color background_color{sf::Color::Green};
        sf::Clock clock; //Timer starts ticking the moment the clock is created
        unsigned int counter{0};


        sf::RenderWindow window(sf::VideoMode(width, height), title);
        //sf::CircleShape shape(circle_radius);
        //shape.setFillColor(shape_color);

        std::vector<sf::CircleShape> shapes; //setup of vector to contain circles in vector shapes
        
sf::Color color[4] {sf::Color::Red,sf::Color::White,sf::Color::Blue,sf::Color::Magenta};

int color_index{0};
        
    for(size_t i{0};i<5;++i){
        sf::CircleShape shape(circle_radius+i*5);
        shape.setFillColor(color[color_index]);
        shape.setPosition(i*45.f,50.f);
        shapes.push_back(shape);
    }
        while (window.isOpen())
        {
            //Timing
        
            
            
            
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
           
                if (event.key.code==sf::Keyboard::Space){
                    std::cout<<"Space bar was pressed. Color should change !"<<std::endl;
                 color_index=(color_index+1)%4; //Putting the code here changes the color of all the circles at once
                    for (auto&shape: shapes){
                       // color_index=(color_index+1)%4; If you have code here , each of the circles will change and rotate through the colors
                        shape.setFillColor(color[color_index]);
                    }
               
                
            }

        }
        //Mouse events
        
        
    }
            window.clear(background_color);
            //window.draw(shape);
            for(size_t i{0};i<5;++i){
                window.draw(shapes[i]);
    }
            window.display();
    }
    }


}

namespace it_4{
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


    namespace it_5{
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
            std::random_device rd;  // Provides seeds with less predictability
     std::mt19937 gen{ rd() };  // Initialize our marsenne twister with a random seed
    //const int size(predictions.size()-1); // The distribution expects constant expressions in it's initializer.
        std::uniform_int_distribution ran_color{ 0, 255 };  // We want uniform distribution.

    

        sf::RenderWindow window(sf::VideoMode(width, height), title);
        //sf::CircleShape shape(circle_radius);
        //shape.setFillColor(shape_color);

std::vector<sf::RectangleShape> shapes; //setup of vector to contain circles in vector shapes
std::vector<sf::Vector2f> directions;// Vector to store movement direction in x and y coordinates
sf::Color color[4] {sf::Color::Red,sf::Color::White,sf::Color::Blue,sf::Color::Magenta};


       //set up the different circles
    for(size_t i{0};i<5;++i){
     sf::RectangleShape rec_shape(sf::Vector2f(50.f,25.f));
     rec_shape.setPosition(100.f*(i+1),100.f);
  
     shapes.push_back(rec_shape);

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
                   shape.setFillColor(sf::Color((ran_color(gen)),(ran_color(gen)),(ran_color(gen))));
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
  namespace it_6{
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
            std::random_device rd;  // Provides seeds with less predictability
     std::mt19937 gen{ rd() };  // Initialize our marsenne twister with a random seed
    //const int size(predictions.size()-1); // The distribution expects constant expressions in it's initializer.
        std::uniform_int_distribution ran_color{ 0, 255 };  // We want uniform distribution.

    

        sf::RenderWindow window(sf::VideoMode(width, height), title);
        //sf::CircleShape shape(circle_radius);
        //shape.setFillColor(shape_color);

std::vector<sf::ConvexShape > shapes; //setup of vector to contain circles in vector shapes
std::vector<sf::Vector2f> directions;// Vector to store movement direction in x and y coordinates
sf::Color color[4] {sf::Color::Red,sf::Color::White,sf::Color::Blue,sf::Color::Magenta};


       //set up the different circles
for(size_t i{0};i<5;++i){
 sf::ConvexShape rec_shape(4); // 4 points for a quadrilateral (rectangle)
 rec_shape.setPoint(0, sf::Vector2f(35.f, 175.f));
 rec_shape.setPoint(1, sf::Vector2f(20.f,70.f));
 rec_shape.setPoint(2, sf::Vector2f(75.f, 25.f));
 rec_shape.setPoint(3, sf::Vector2f(100.f, 15.f));
 rec_shape.setPosition(100.f*(i+1),100.f);

 shapes.push_back(rec_shape);

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
                   shape.setFillColor(sf::Color((ran_color(gen)),(ran_color(gen)),(ran_color(gen))));
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

namespace it_7{
export void app(){
        constexpr int width{600};
        constexpr int height{600};
        constexpr float circle_radius{40.f};
        constexpr float clock_period{1.f};
        const std::string title{"SFML Shape Resizer!"};
        sf::Color shape_color{sf::Color::White};
        sf::Color background_color{sf::Color::Black};
        sf::Clock clock; //Timer starts ticking the moment the clock is created
        unsigned int counter{0};
        constexpr float move_interval {.05f};
        
    

        sf::RenderWindow window(sf::VideoMode(width, height), title);
        //sf::CircleShape shape(circle_radius);
        //shape.setFillColor(shape_color);

std::vector<sf::CircleShape> shapes; //setup of vector to contain circles in vector shapes
sf::Color color[4] {sf::Color::Red,sf::Color::White,sf::Color::Blue,sf::Color::Magenta};
//Random Number Generator
        std::random_device rd;  // Provides seeds with less predictability
        std::mt19937 gen{ rd() };  // Initialize our marsenne twister with a random seed
        std::uniform_real_distribution<float> radius_Dist(10.f,50.f);//Circle sizes between10 and 50
        std::uniform_int_distribution<int> color_Dist(0,255); //Changes the color in the RGB range


       //set up the different circles
       /*
    for(size_t i{0};i<5;++i){
   
    }*/
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
        if (event.type== sf::Event::MouseButtonPressed){
                if (event.key.code==sf::Mouse::Left){
                    float mouse_x=static_cast<float>(event.mouseButton.x);
                    float mouse_y= static_cast<float>(event.mouseButton.y);
                    std::cout<<"Left mouse pressed"<<std::endl;
                    std::cout<<"Position x is: "<<mouse_x<<std::endl;
                    std::cout<<"Position y is: "<<mouse_y<<std::endl;
                    float random_radius= radius_Dist(gen);
                   auto random_color=sf::Color(color_Dist(gen),color_Dist(gen),color_Dist(gen));
                 
                    sf::CircleShape shape(random_radius);
                std::cout<<"Random Radius is : "<<random_radius<<std::endl;
                if(mouse_x+random_radius>width) mouse_x= width-random_radius;
                if(mouse_x-random_radius<0) mouse_x= random_radius;
                if(mouse_y+random_radius>height) mouse_y= height-random_radius;
                if(mouse_y-random_radius<0) mouse_y= random_radius;
                sf::CircleShape new_shape(random_radius);
                new_shape.setFillColor(random_color);
                new_shape.setPosition(mouse_x-random_radius,mouse_y-random_radius);//Subtracting random_radius Centers the shape 
                shapes.push_back(new_shape);
                }else if(event.mouseButton.button ==sf::Mouse::Right){
                    shapes.pop_back();
std::cout<<"Right mouse pressed- Last shape removed"<<std::endl;
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

        
        
    
            window.clear(background_color);
            //window.draw(shape);
            for(size_t i{0};i<shapes.size();++i){
               window.draw(shapes[i]);
               
    }
            window.display();
    }
    }


}


