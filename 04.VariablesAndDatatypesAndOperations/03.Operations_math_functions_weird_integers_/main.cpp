/*
    . Project description
        . Topic #1
        . Topic #2
*/
#include <iostream>
#include <fmt/format.h>
#include <limits>
#include<typeinfo>
import utilities;
int main(){
    
//basic_functions();
//presedence_and_associativity();
//postfix_increment_and_decrement();
//compound_assignments();
//relational_operators();
//logical_operators();
//logical_relations_ops_combnined();
//math_functions();
//weird_integer_types();
//conversions();
//overflow_underflow();

// Claculating if a number is even or odd
int number;
    std::cout<<"Enter a number: ";
    std::cin>>number;
    std::cout<<"You entered: "<<number<<std::endl;
        if (number%2 ==0){std::cout<<" Your number is even"<<std::endl;}
            else
            {std::cout<<"Your number is odd"<<std::endl;}

// Claculating the distance between two points
// The distance between two points (x1, y1) and (x2, y2) is given by the formula:
// distance = sqrt((x2 - x1)^2 + (y2 - y1)^2)
// where sqrt is the square root function and ^ is the exponentiation operator.
// The distance formula is derived from the Pythagorean theorem, which states that in a right triangle, the square of the length of the hypotenuse (the side opposite the right angle) is equal to the sum of the squares of the lengths of the other two sides.
// In this case, the two points (x1, y1) and (x2, y2) form the two legs of a right triangle, and the distance between them is the hypotenuse.
    // The formula can be derived by applying the Pythagorean theorem to the triangle formed by the two points and the x-axis and y-axis.
    // The distance formula is used in many applications, including geometry, physics, and computer graphics.
    // It is also used in machine learning algorithms for clustering and classification tasks.
// The distance formula is a mathematical formula used to calculate the distance between two points in a Cartesian coordinate system.

double distance{0};
double distance2{0};
double horizontal{0};
double vertical{0};
double x1=1.0;
double x2=2.0;
double y1=4.0;
double y2=6.0;

    horizontal= (x2-x1)*(x2-x1);
    vertical= (y2-y1)*(y2-y1);
    
    distance= std::sqrt(horizontal+vertical);
    distance2=std::sqrt(std::pow((x2-x1),2)+std::pow((y2-y1),2));
    std::cout<<"The distance2 is : "<<distance<<std::endl;
    
    std::cout<<"The distance is :" <<distance<<std::endl;
return 0;
}