/*
    . Project description
        . Topic #1
        . Topic #2
*/




//#include <ftxui/component/screen_interactive.hpp> //For screen interactive
#include <ftxui/dom/elements.hpp> //For text , vbox, hbox
#include <ftxui/component/component.hpp> 
//using namespace ftxui;
int main(){

using namespace ftxui;
// create an application that can be run in a terminal
auto document=vbox({
    text("One"),
    text("Two"),
    text("Three"),
    text("Four")

});

  auto screen = ScreenInteractive::TerminalOutput();
  screen.Loop(Renderer([&]{ return document; })); 
    return 0;
}