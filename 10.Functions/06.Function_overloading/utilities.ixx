module;
#include <iostream>
#include<fmt/format.h>


export module utilities; 

import overloading_1;
import overloading_2;
import overloading_4;


export void overloading_1_demo(){

    using namespace overloading_1;
    print(78);
}

export void overloading_2_demo(){

    using namespace overloading_2;
    int arr[] = {1,2,3,4,5};
    process(arr, 5);
    process(42);
}

export void overloading_demo_3() {

    std::string line;
    fmt::println("This is a demonstration of overloading functions.");
    fmt::println("Please enter a line of text:");
    std::getline(std::cin, line);
    fmt::println("You entered: {}", line);
    fmt::println("Thank you for participating in the overloading demonstration.");
fmt::println("Please enter a line of seperated by commas");
    std::getline(std::cin, line, ',' );
    fmt::println("You entered: {}", line);

}

export void overloading_4_demo() {

    using namespace overloading_4;
    respond();
    respond("What is the meaning of life?");
    fmt::println("Rolling a 6-sided die: {}", roll());
    fmt::println("Rolling a 20-sided die: {}", roll(20));
    fmt::println("Rolling three 8-sided dice: {}", roll(8, 3));
    fmt::println("Area of square with side 4: {}", area(4.0));
    fmt::println("Area of rectangle 4x5: {}", area(4.0, 5.0));
    fmt::println("Area of circle with radius 3: {}", area(3.0, true));
}   