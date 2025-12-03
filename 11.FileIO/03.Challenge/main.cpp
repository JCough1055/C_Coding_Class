/*
    . Project description
        . Topic #1
        . Topic #2

#include <memory>  // for allocator, __shared_ptr_access
#include <string>  // for char_traits, operator+, string, basic_string
 
#include "ftxui/component/captured_mouse.hpp"  // for ftxui
#include "ftxui/component/component.hpp"       // for Input, Renderer, Vertical
#include "ftxui/component/component_base.hpp"  // for ComponentBase
#include "ftxui/component/component_options.hpp"  // for InputOption
#include "ftxui/component/screen_interactive.hpp"  // for Component, ScreenInteractive
#include "ftxui/dom/elements.hpp"  // for text, hbox, separator, Element, operator|, vbox, border
#include "ftxui/util/ref.hpp"  // for Ref
#include<iostream>
#include<filesystem>
#include<fstream>
*/
import utilities;
 
int main() {


it_1::app();



/*
  using namespace ftxui;
  
  
 
  // The data:
  std::string first_name;
  std::string last_name;
  std::string phoneNumber;
 
  // The basic input components:
  Component input_first_name = Input(&first_name, "first name");
  Component input_last_name = Input(&last_name, "last name");
 

 
  // The phone number input component:
  // We are using `CatchEvent` to filter out non-digit characters.
  Component input_phone_number = Input(&phoneNumber, "phone number");
  input_phone_number |= CatchEvent([&](Event event) {
    return event.is_character() && !std::isdigit(event.character()[0]);
  });
  input_phone_number |= CatchEvent([&](Event event) {
    return event.is_character() && phoneNumber.size() > 10;
  });
 
  // The component tree:
  auto component = Container::Vertical({
      input_first_name,
      input_last_name,
      input_phone_number,
  });
 
  // Tweak how the component tree is rendered:
  auto renderer = Renderer(component, [&] {
    return vbox({
               hbox(text(" First name : "), input_first_name->Render()),
               hbox(text(" Last name  : "), input_last_name->Render()),
               hbox(text(" Phone num  : "), input_phone_number->Render()),
               separator(),
               text("Name " + first_name + " " + last_name),
               text("Your phone number is " + phoneNumber),
           }) |
           border;
  });
 
  auto screen = ScreenInteractive::TerminalOutput();
  screen.Loop(renderer);
  */
}