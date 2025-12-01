module;
#include <fmt/format.h>
export module utilities; 
//Declaring and using  Lamdas

export void declare_and_use_lamda_func(){
/*

Lambda Functions
    . Anonymous functions that can capture variables from their surrounding scope.
    . Syntax: [capture](parameters) -> return_type { body }
    . Capture:
        . By value: [=]
        . By reference: [&]
        . Mixed: [x, &y]
    . Example:
        . auto add = [](int a, int b) { return a + b; };
        . fmt::print("Sum: {}\n", add(3, 4));
*/
/*
// Example of a lambda function that prints "Hello World"
auto func=[](){fmt::println("Hello World");};

func();
func();
func();
*/
/*
//Example of calling lamda directly
[](){fmt::println("Hello World!");}();
*/
/*
//Example of Lamda function that takes parameters and retruns a value
[](double a,double b){
    fmt::println("a+b is : {}", a+b);}(5.343,9.921);
*/
//Example of Lamda function that takes parameters and retruns a value through a name
/*
auto func1=[](double a,double b){
    fmt::println("a+b is : {}", a+b);};

    func1(1002.22,45.82839);
    func1(10.789,9665);
*/
/*
    //Example of Lamda function that takes retruns a value through a name
auto result=[](double a,double b){
    return a+b;};

    auto func1=result(4443.223,22333.3546);
    fmt::println("The value of the func1 a+b is {}",func1);
    fmt::println("the value of a +b is {}",result(1002.22,45.82839));
    
    fmt::println("the value of a +b is {}",result(10.789,9665));
    */

    //Example of Lamda function and expicitly defining the return type
    auto result3=[](double a,double b) -> int{return a+b;};
    auto result4=[](double a,double b) {return a+b;};

    auto func3= result3(10.222,30.111);
    auto func4=result4(10.222,30.111);
    fmt::println("The value of func3 is : {}" ,func3);
    fmt::println("The value of func4 is : {}" ,func4);

}

export void capture_lists(){

    double a{20.4};
    double b{30.2};

    //Capture by value
    auto func5=[a,b](){
        return a+b;

    };
    auto result5=func5();
    fmt::println("The value of a + b captured by value is : {}",result5);


}

export void capture_by_value_modification(){

     int x {10};
     auto lamda =[x]()mutable{
        x+= 5;
        fmt::println("Inside the lamda function, x is : {}",x);
     };
     fmt ::println("Before calling the lamda function, x is : {}",x);
     lamda();
     fmt ::println("After calling the lamda function, x is : {}",x);

}

export void capture_by_reference_modification(){

     int x {10};
     auto lamda =[&x](){
        x+= 5;
        fmt::println("Inside the lamda function, x is : {}",x);
     };
     fmt ::println("Before calling the lamda function, x is : {}",x);
     lamda();
     fmt ::println("After calling the lamda function, x is : {}",x);

}

export void capture_all_by_value(){
    int x {10};
    int y {20};


    auto lamda =[=](){
        int x_copy=x+5;
        int y_copy=y+10;
        fmt::println("Inside the lamda function, x copy is : {} and y copyis : {}",x_copy,y_copy);
    };

    fmt ::println("Before calling the lamda function, x is : {} and y is : {}",x,y);
    lamda();
    fmt ::println("After calling the lamda function, x is : {} and y is : {}",x,y);


}
export void capture_all_by_reference(){
    int x {10};
    int y {20};


    auto lamda =[&](){
       x += 5;
       y +=10;
        fmt::println("Inside the lamda function, x copy is : {} and y copyis : {}",x,y);
    };

    fmt ::println("Before calling the lamda function, x is : {} and y is : {}",x,y);
    lamda();
    fmt ::println("After calling the lamda function, x is : {} and y is : {}",x,y);


}