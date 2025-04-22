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
int number;
std::cout<<"Enter a number: ";
std::cin>>number;
std::cout<<"You entered: "<<number<<std::endl;
if (number%2 ==0){std::cout<<" Your number is even"<<std::endl;}
else{std::cout<<"Your number is odd"<<std::endl;}

double distance{0};
    double horizontal{0};
    double vertical{0};
   double x1=1.0;
   double x2=2.0;
   double y1=4.0;
    double y2=6.0;
    horizontal= (x2-x1)*(x2-x1);
    vertical= (y2-y1)*(y2-y1);
    
    distance= std::sqrt(horizontal+vertical);
    
    std::cout<<"The distance is :" <<distance<<std::endl;
return 0;
}