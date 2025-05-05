/*
    . Project description
        . Literals
        . Constants
        . Constexpr
        . Constants
        . Constinit
        . Consteval
        
*/

#include <fmt/format.h>
import utilities;
constinit int age{24};
constinit double height{6.123};
constinit int car_count{add(55,7)};

int main(){
    //literals();
    //constants();
    //constexpr_functions();
    //constinit double size{10.123}; ERROR-cant use in error C2554: 'size': 'constinit' only allowed on a variable declaration with static or thread storage duration
    fmt::println("just checking code...");
    double result= height*10;
    fmt::println("the height is {:<6}", result);
    fmt::println("the age is {:<6}", age);
    age=50;
    fmt::println("the age is {:<6}", age);
    fmt::println("the car count is {:<6}", car_count);
    consteval_functions();
    return 0;
}