/*
    . Project description
        . Topic #1
        . Topic #2
*/

#include <fmt/format.h>
#include<iostream>
import utilities;

int main(){
    fmt::print("Hello, World!\n");
    fmt::print("One\n");
    fmt::print("Two\n");
    fmt::print("Three\n");
    fmt::print("This has been absolutely exhausting\n");
    fmt::print("This is a test to make sure the container is working\n");

    int val1=22;
    int val2=44;
    int val3{0};
    auto mult=val1*val2;
    fmt::print("The product of {} and {} is {}\n", val1, val2, mult);
    fmt::print("Please enter a new value :\n");
    std::cin>>val3;
    fmt::print("The value of val3 is {}\n", val3);
    return 0;
}