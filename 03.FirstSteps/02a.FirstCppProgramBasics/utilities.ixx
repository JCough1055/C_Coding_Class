module;
#include <fmt/format.h>
export module utilities; 
export int add_numbers(int a,int b){
    return a+b;    
}

    export void do_work(){
    fmt::println("Hello my friend");
    fmt::println("How are you? Jackie Robinson wore number {}\n", 42);
 
    int value1{10};
    int value2{20};

    //int result= value2+value1;
    int result= add_numbers(value1,value2);
    fmt::println("The result of value1: {} and value2: {} is {}", value1,value2,result);
    fmt::println("THis is runnning inside the do work function!\n");

}

