/*
    . Project description
        . Topic #1
        . Topic #2
*/

#include <fmt/format.h>
import utilities;
 /*
//Pass by value
void say_age(int age){
    ++age;
    fmt::println("Hello!! You are {} years old &age :{} ", age, fmt::ptr(&age));
}
     */
//Pass by const value
/*
void say_age(const int age){
   // ++age; cant modify const value. compiler error
    fmt::println("Hello!! You are {} years old &age :{} ", age, fmt::ptr(&age));
}
*/

//Pass by Pointer
/*
void say_age(int *age){
    ++(*age); 
    fmt::println("Hello!! You are {} years old &age :{} ", *age, fmt::ptr(&age));
}
*/
/*
//Pass by pointer to const
int dog_count{10};
void say_age(const int *age)
{
   fmt::println("Hello!! You are {} years old &age :{} ", *age, fmt::ptr(&age));
   age=&dog_count;  
}
   */

   //Pass by reference

   /*
void say_age(int &age)
{
    ++age;
   fmt::println("Hello!! You are {} years old &age :{} ", age, fmt::ptr(&age));
   
}
*/
/*
void compute(int age =27, float height =6.1, std::string name= "Jay Coughlin"){
    fmt::println("Name: {}, Age: {}, Height: {}", name,age,height);
}

void greet_teacher(std::string name= "teacher", int homeworks= 12,int exams= 4, double pass_rate=.8,std::string dept="electrical enginneering"){
    fmt::println("Hello {}, you have {} homeworks and {} exams to grade. Your pass rate is {}. You are in the {} department.",name,homeworks,exams,pass_rate,dept);
}
    */

 #include <iostream>
#include <string>

void reverse_iterative(std::string input,std::string output)
{
    std::cout<<"Enter a string"<<input<<std::endl;
    std::getline (std::cin,input);
    std::copy(input.crbegin(), input.crend(), std::back_inserter(output));
    std::cout << output << '\n'; //
} 
int main(){

    reverse_iterative("","");

 /*
//Pass by value
    int age{23};
    fmt::println("Age before call: {} &age: {}",age,fmt::ptr(&age));
    say_age(age);
    fmt::println("Age afeter call: {} &age: {}",age,fmt::ptr(&age));
    */
   //Pass by const value
   /*
     int age{23};
    fmt::println("Age before call: {} &age: {}",age,fmt::ptr(&age));
    say_age(age);
    fmt::println("Age afeter call: {} &age: {}",age,fmt::ptr(&age));
    */
   //Pass by pointer
   /*
   int age{23};
    fmt::println("Age before call: {} &age: {}",age,fmt::ptr(&age));
    say_age(&age);
    fmt::println("Age afeter call: {} &age: {}",age,fmt::ptr(&age));
    */
/*
    int age{23};
    fmt::println("Age before call: {} &age: {}",age,fmt::ptr(&age));
    say_age(age);
    fmt::println("Age afeter call: {} &age: {}",age,fmt::ptr(&age));

    */
/*
    compute();
    compute(30,5.5,"john Smith");
    greet_teacher();
    greet_teacher("John Smith");
    greet_teacher("John Smith",20);
    greet_teacher("John Smith",20,5);
    greet_teacher("John Smith",20,5,.9);
    greet_teacher("John Smith",20,5,.9,"Computer Science");
    */
    return 0;
}