/*
    . Project description
        . Topic #1
        . Topic #2
*/

#include <fmt/format.h>
#include <string_view>
#include<iostream>
import utilities;
//creates a function to add to numbers
int f_add(int a, int b){
    return a + b;
}
void print_msg(std::string_view msg){
   fmt::println("{}",msg);
}
int main(){
    int a= 10;
    int b= 5;
    int c;
    print_msg("This is the first statement we print");
    print_msg("This is the second statement we print");
    c = f_add(a,b);
    fmt::println("The sum of {} and {} is {}", a, b, c);
    print_msg("This is the third statement we print");
    print_msg("This is the fourth statement we print");
    
    return 0;
}