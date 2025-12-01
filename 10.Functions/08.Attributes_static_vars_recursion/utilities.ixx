module;
#include <fmt/format.h>
export module utilities; 

import attributes;
import static_vars;
import recursion;

export void attributes_demo(){
/*
//[[noreturn]]
fmt::println("Exiting the programm");
attributes::exit_program();
fmt::println("program ends properly");
*/
/*
attributes::old_function();
attributes::new_function();
*/
/*
//attributes::calculate_value();
int result=attributes::calculate_value();
fmt::println("Calculated value is {}",result);
*/
/* 

//[[fallthrough]]
attributes::handle_switch(1);
*/

/*
//[[likely]] and [[unlikely]]
auto value1=attributes::process_value(42);
auto value2=attributes::process_value(43);
fmt::println("Value1 {}, Value2 {}",value1,value2);
*/
/*
//[[assume]]
attributes::process_data(5);
*/

//auto value3= attributes::compute_important_value();
//fmt::println("Important computed value: {}",value3);


}
export void static_vars_demo(){
static_vars::user_login();
static_vars::user_login();
static_vars::user_login();
static_vars::user_login();
}

export void recursion_demo(){
    auto value=recursion::fibonacci(7);
    fmt::println("The value of the Fibbacci sequence at position 7 is {}",value);

}
export void fibonacci_memo_demo(){
    auto value=recursion::fibonacci_memo(99);
    fmt::println("The value of the Fibbacci sequence at position 99 using memoization is {}",value);
}
export void fibonacci_iterative_demo(){
    auto value=recursion::fibonacci_iterative(99);
    fmt::println("The value of the Fibbacci sequence at position 99 using iterative method is {}",value);  
         //Try to set a lambda function
/*
    auto fibonacci_lambda=[](int n){
        if(n<2) return n;
        return fibonacci_lambda(n-1)+fibonacci_lambda(n-2);};//Compiler error 'recursion::fibonacci_lambda': cannot appear in its own initializer [C:\Users\mjcog\Documents\CogsCoding\cpp23m-main\10.Functions\08.Attributes_static_vars_recursion\build\cl\Rocket.vcxproj]
    }
   */
  //Needs to not use the function name inside its own body
        auto fibonacci_lambda=[](this auto& self, int n){
            if(n<2) return n;
            return self(n-1)+self(n-2);};

      auto value1 = fibonacci_lambda(10);
        fmt::print("The value of the Fibbacci sequence at position 10 using lambda is {}\n", value1); 

}