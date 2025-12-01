module;

#include<SFML/Graphics.hpp>

export module utilities; 

namespace it_1{
    export void app(){

        //Initialization
sf::RenderWindow window(sf::VideoMode(200,200), "SFML works");
sf::CircleShape shape(100.f);
shape.setFillColor(sf::Color::Green);
//Event Processing
while((window.isOpen())){
    sf::Event event;
    while(window.pollEvent(event)){
        if(event.type == sf::Event::Closed)
            window.close();
    }
//Rendering
window.clear();
window.draw(shape);
window.display();   
}
    }   

}// namespace it_1

namespace it_2{
    //Initialization function
void init(sf::RenderWindow& window, sf::CircleShape& circle){
    window.create(sf::VideoMode(800,600), "SFML at work!");

    //Configure the circle
    circle.setRadius(100.f);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition(300.f,200.f);



}

//Event Processing

void process_events(sf::RenderWindow& window){
    sf::Event event;
    while(window.pollEvent(event)){
        if(event.type == sf::Event::Closed)
            window.close();
    }
}
//Rendering function
void render(sf::RenderWindow& window, sf::CircleShape& circle){
    window.clear(sf::Color::Black);
    window.draw(circle);
    window.display();
}
export void app(){
    sf::RenderWindow window;
    sf::CircleShape circle;

    init(window, circle);

    while(window.isOpen()){
        process_events(window);
        render(window, circle);
    }

}
}// namespace it_2