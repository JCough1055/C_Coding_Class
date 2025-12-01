/*
    . Project description
        . Topic #1
        . Topic #2
*/

#ifdef HAVE_FMT
#include <fmt/format.h>
#else
#include <iostream>
#endif

#ifdef USE_MODULES
import utilities;
#else
#include "utilities.h"
#endif

int main(){
#ifdef HAVE_FMT
    fmt::print("Hello, World!\n");
    fmt::print("One\n");
    fmt::print("Two\n");
    fmt::print("Three\n");
    int a=44;
    int b=22;
    int sum=a+b;
    fmt::print("Sum of {} and {} is {}\n", a, b, sum);
#else
    std::cout << "Hello, World!\n";
    std::cout << "One\n";
    std::cout << "Two\n";
    std::cout << "Three\n";
    int a=44;
    int b=22;
    int sum=a+b;
    std::cout << "Sum of " << a << " and " << b << " is " << sum << "\n";
#endif
    
    return 0;
}