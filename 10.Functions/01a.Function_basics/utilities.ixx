module;
#include <fmt/format.h>

export module utilities; 

export void print_number(auto number){
    fmt::println("number is {}",number);

}
export void hello(){
    fmt::println("Hello there from utilities!!");

}