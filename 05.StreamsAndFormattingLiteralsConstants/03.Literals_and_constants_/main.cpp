/*
    . Project description
        . Topic #1
        . Topic #2
*/

#include <fmt/format.h>
import utilities;

int main(){
    fmt::print("Hello, World!\n");
    fmt::print("One\n");
    fmt::print("Two\n");
    fmt::print("Three\n");
    int a=44;
    int b=22;
    int sum=a+b;
    fmt::print("Sum of {} and {} is {}\n", a, b, sum);

    
    return 0;
}