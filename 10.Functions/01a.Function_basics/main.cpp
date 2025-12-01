/*
    . Project description
        . Topic #1
        . Topic #2
*/

#include <fmt/format.h>
import utilities;
import math;
import compare;


int main(){
    using namespace it_2;
    int x {5};
    int y{20};

    maximum(x,y);
    fmt::print("The maximum between {} and {} is {}\n",x,y,maximum(x,y));

    add(x,y);
    fmt::print("The sum between {} and {} is {}\n",x,y,add(x,y));

    mult(x,y);
    fmt::print("The multiplication between {} and {} is {}\n",x,y,mult(x,y));

    x=30;
    maximum(x,y);
    fmt::print("The maximum between {} and {} is {}\n",x,y,maximum(x,y));
    
    add(x,y);
    fmt::print("The sum between {} and {} is {}\n",x,y,add(x,y));

    mult(x,y);
    fmt::print("The multiplication between {} and {} is {}\n",x,y,mult(x,y));

    print_number(x);
    hello();
    return 0;
}

