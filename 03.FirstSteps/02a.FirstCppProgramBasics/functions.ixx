module;

#include <fmt/format.h>
export module functions;
export int mult_numbers(int a,int b){
    return a*b;    
    }
    
    export float divide_numbers(float a,float b){
        if(b==0){
            fmt::println("Error: Division by zero is not allowed.");
            return 0; // or handle the error as needed
        }else 
            return a/b;    
        
    }