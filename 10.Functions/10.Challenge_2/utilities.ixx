module;

#include<vector>
#include<string>
#include "ftxui/screen/screen.hpp"  // for ftxui
#include "ftxui/component/component.hpp"  // for Button, Horizontal, Renderer
#include "ftxui/component/screen_interactive.hpp"  // for ScreenInteractive
#include "ftxui/dom/elements.hpp"  // for separator, gauge, text, Element, operator|, vbox, border
#include<SFML/Graphics.hpp>



export module utilities; 
//FTXUI based Calculator
namespace it_1{
    using namespace ftxui;
    double add(double a ,double b){return a+b;}
    double subtract(double a ,double b){return a-b;}
    double multiply(double a ,double b){return a*b;}
    double divide(double a ,double b){return b!=0? a/b : 0;}

    export void app(){
//UI state variables
double num1=0;
double num2=0;
double result =0;
bool is_calculated=false;

//Input nboxes for numbers
std::string num1_str="0";
std::string num2_str ="0";
auto input1=Input(&num1_str,"Enter first number");
auto input2=Input(&num2_str,"Enter second number");

//Operator Selection menu
std::vector<std::string> operations={"Add","Subtract","Multiply","Divide"};
int operation_index {0};
auto operation_menu = Menu(&operations,&operation_index);

//Calculate Button
auto button = Button("Calculate", [&] {
    num1=std::stod(num1_str);
    num2=std::stod(num2_str);
    switch(operation_index){
        case 0:
            result=add(num1,num2);
            break;
        case 1:
            result=subtract(num1,num2);
            break;
        case 2:
            result=multiply(num1,num2);
            break;
        case 3:
            result=divide(num1,num2);
            break; 
    } 
            is_calculated=true;

    });
//Result Display
auto container=Container::Vertical({
    input1,
    input2,
    operation_menu,
    button
});

 auto renderer = Renderer(container, [&] {
    return vbox({
        text("Basic Calculator")|bold|center,
           separator(),
               hbox(text(" First Number : "), input1->Render())|center,
               hbox(text(" Second Number  : "), input2->Render())|center,
               hbox(text(" Operation "), operation_menu->Render())|center,
               button->Render()|center,
               separator(),
               is_calculated ? text("Result: " + std::to_string(result))|bold|center : text(""),
           }) |
           border;
  });

  //Launch UI
  auto screen=ScreenInteractive::TerminalOutput();
  screen.Loop(renderer);
}
}//nammespace it_1

namespace it_2{

    double calculate_distance(const double origin[2], const double mouse_position[2]){
        double dx= mouse_position[0]-origin[0];
        double dy=mouse_position[1]-origin[1];
    return std::sqrt(dx*dx+dy*dy);}


    void init(sf::RenderWindow &window,sf::Font &font,sf::Text &origin_text,sf::Text &mouse_text,sf::Text &distance_text,const double origin[2]){
        window.create(sf::VideoMode(800,600),"Distance from Origin to Mouse Position");

        if(!font.loadFromFile("arial.ttf")){
            std::cerr<<"Failed to load font. Make sure the font file is in the same directory as the binary.\n";
            return;
        }   

        origin_text.setFont(font);
        origin_text.setCharacterSize(24);
        origin_text.setFillColor(sf::Color::White);
        origin_text.setPosition(50,50);

        mouse_text.setFont(font);
        mouse_text.setCharacterSize(24);
        mouse_text.setFillColor(sf::Color::White);
        mouse_text.setPosition(50,100);

        distance_text.setFont(font);
        distance_text.setCharacterSize(24);
        distance_text.setFillColor(sf::Color::White);
        distance_text.setPosition(50,150);
    }
    void process_events(sf::RenderWindow &window){
        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type==sf::Event::Closed)
                window.close();
        }
    }
    void render(sf::RenderWindow &window,sf::Text &origin_text,sf::Text &mouse_text,sf::Text &distance_text){


        window.clear(sf::Color::Black);
        window.draw(origin_text);
        window.draw(mouse_text);
        window.draw(distance_text);
        window.display();
    }

    export void app(){
        sf::RenderWindow window;
        sf::Font font;
        sf::Text origin_text;
        sf::Text mouse_text;
        sf::Text distance_text;

       double origin[2]={0.0,0.0};
        double mouse_position[2]={0.0,0.0};
        double distance=0.0;

        init(window,font,origin_text,mouse_text,distance_text,origin);

        while(window.isOpen()){
            process_events(window);

            sf::Vector2i mouse_pos=sf::Mouse::getPosition(window);
            double mouse_position[2]={static_cast<double>(mouse_pos.x),static_cast<double>(mouse_pos.y)};
            double distance=calculate_distance(origin,mouse_position);

            origin_text.setString("Origin: (" + std::to_string(static_cast<int>(origin[0])) + ", " + std::to_string(static_cast<int>(origin[1])) + ")");
            mouse_text.setString("Mouse Position: (" + std::to_string(mouse_pos.x) + ", " + std::to_string(mouse_pos.y) + ")");
            distance_text.setString("Distance to Origin: " + std::to_string(distance));

            render(window,origin_text,mouse_text,distance_text);
        }
    }   
}//namespace it_2

namespace it_3{

    void init(sf::RenderWindow &window,sf::Font &font,sf::Text &distance_text){
        window.create(sf::VideoMode(800,600),"Distance form origin to Mouse Position");

        if(!font.loadFromFile("arial.ttf")){
            std::cerr<<"Failed to load font. Make sure the font file is in the same directory as the binary.\n";
            return;
        }   

        distance_text.setFont(font);
        distance_text.setString("Hello, SFML!");
        distance_text.setCharacterSize(24);
        distance_text.setFillColor(sf::Color::White);
        distance_text.setPosition(50,550);
    }

    void process_events(sf::RenderWindow &window, bool &running){
        sf::Event event;
        while(window.pollEvent(event)){
            if(event.type==sf::Event::Closed){
                running=false;  
            }
         }
    }

    void render(sf::RenderWindow &window,const double origin[2], const double mouse_position[2], double distance,sf::Text &distance_text){
        window.clear(sf::Color::Black);
sf::CircleShape origin_point(5);
        origin_point.setFillColor(sf::Color::Red);
        origin_point.setPosition(origin[0]-origin_point.getRadius(),origin[1]-origin_point.getRadius());

        sf::CircleShape mouse_point(5);
        mouse_point.setFillColor(sf::Color::Green);
        mouse_point.setPosition(mouse_position[0]-mouse_point.getRadius(),mouse_position[1]-mouse_point.getRadius());

        std::ostringstream oss;
        oss<<"Distance to Origin: "<<distance;
        distance_text.setString(oss.str());

        window.draw(origin_point);
        window.draw(mouse_point);   
        window.draw(distance_text);
        window.display();
    }

    export void app(int argc,char*argv[]){
        if(argc<3){
            std::cerr<<"Usage: "<<argv[0]<<" <origin_x> <origin_y>\n";
            return;
        }
        double origin[2];
        origin[0] = std::stod(argv[1]);
        origin[1] = std::stod(argv[2]);

        sf::RenderWindow window;
        sf::Font font;
        sf::Text distance_text;
        init(window,font,distance_text);
double mouse_position[2]={0.0,0.0};
        double distance=0.0;
        bool running=true;
        while(running ){
            process_events(window,running);

            sf::Vector2i mouse_pos=sf::Mouse::getPosition(window);
            mouse_position[0]=static_cast<double>(mouse_pos.x);
            mouse_position[1]=static_cast<double>(mouse_pos.y);
            distance=it_2::calculate_distance(origin,mouse_position);

            render(window,origin,mouse_position,distance,distance_text);
        }
    }
}
  