module;
#include <fmt/format.h>
export module utilities; 


// Braced Initialization
export void braced_initialization(){
    
    
    int elephant_count; //Not explicitly initalized so CPU will put in junk number
    int lion_count{}; //This is intialized to 0
    int dog_count{10}; //This is intialized to 10
    int cat_count{15};  //This is intialized to 15
    int domesticated_animals{dog_count+cat_count}; //This is intialized to 25. It is the sum of dog_count and cat_count.
// int new_number{lion_cout} //This is not allowed. The compiler will throw an error because lion_count is not initialized.
int narrowing_conversion(2.9); //This is intialized to 2.9. It is a narrowing conversion. The compiler will place a 2 in narrowing_conversion.
// With {} .This is not allowed. The compiler will throw an error because narrowing conversion is not allowed in C++20.
    fmt::println("this is braced initialization");
    fmt::println(" ");
    fmt::println("the value of elephant_count is: {}",elephant_count);
    fmt::println("the value of lion_count is: {}",lion_count);
    fmt::println("the value of dog_count is: {}",dog_count);
    fmt::println("the value of cat_count is: {}",cat_count);
    fmt::println("the value of domesticated_animals is: {}",domesticated_animals);
    fmt::println("the value of narrowing_conversion is: {}",narrowing_conversion);

}

export void functional_initialization(){
  // function_style_initialization uses parentheses();
  
  int apple_count(5);
  int orange_count(10);
  int fruit_count(apple_count+orange_count);

  int narrowing_conversion_functional(2.9);// this is not good because the compiler will turn this into a 2

  fmt::println(" ");
  fmt::println("this is functional initialization");
  fmt::println(" ");
  fmt::println("the value of apple_count is: {}",apple_count);
  fmt::println("the value of orange_count is: {}",orange_count);
  fmt::println("the value of fruit_count is: {}",fruit_count);
  fmt::println("the value of narrowing_conversion_functional is: {}",narrowing_conversion_functional);

}

export void assignment_initialization(){
  // assignment_initialization uses = sign
      // assignment_initialization();
      int bike_count= 2;
      int truck_count =7;
      int vehicle_count= bike_count+truck_count;
      int narrowing_conversion= 2.9;
  
      fmt::println(" ");
      fmt::println("this is assignment initialization");
      fmt::println(" ");
      fmt::println("the value of bike_count is: {}",bike_count);
      fmt::println("the value of truck_count is: {}",truck_count);
      fmt::println("the value of vehicle_count is: {}",vehicle_count);
      fmt::println("the value of narrowing_conversion is: {}",narrowing_conversion);
      fmt::println(" ");
      fmt::println("sizeof int: {}", sizeof(int));
      fmt::println("sizeof truck_count: {}", sizeof(truck_count));
 
}

export void integer_modifiers(){
    
  //Signed and unsigned modifiers
    
    signed int value1{10};
    signed int value2{-20};
    //  unsigned int value3{-200}; compiler error..only positive integers allowed in unsigned
    unsigned int value4{200};
    fmt::println(" ");
    fmt::print("Unsigned and signed modifiers\n");
    fmt::println(" ");
    fmt::print("value1 is : {} \n", value1);
    fmt::print("value2 is : {} \n", value2);
    fmt::print("value4 is : {} \n", value4);
    fmt::println(" ");

    //Short and long
    short short_var{-32768}; //2 bytes
    short int short_int{455};
    signed short signed_short{122};
    signed short int signed_short_int{-456};
    unsigned short int unsigned_short_int{456};
    fmt::println("Short var : {}, size {} bytes",short_var, sizeof(short_var));
    fmt::println("Short int : {}, size {} bytes",short_int, sizeof(short_int));
    fmt::println("Signed short : {}, size {} bytes",signed_short, sizeof(signed_short));
    fmt::println("Signed short int : {}, size {} bytes",signed_short_int, sizeof(signed_short_int));
    fmt::println("Unsigned short int : {}, size {} bytes",unsigned_short_int, sizeof(unsigned_short_int));
    fmt::println(" ");
    //Long
    long long_var{123456789}; //4 bytes
    long int long_int{123456789};
    signed long signed_long{123456789};
    signed long int signed_long_int{123456789};
    unsigned long int unsigned_long_int{123456789};
    fmt::println("Long var : {}, size {} bytes",long_var, sizeof(long_var));
    fmt::println("Long int : {}, size {} bytes",long_int, sizeof(long_int));
    fmt::println("Signed long : {}, size {} bytes",signed_long, sizeof(signed_long));
    fmt::println("Signed long int : {}, size {} bytes",signed_long_int, sizeof(signed_long_int));
    fmt::println("Unsigned long int : {}, size {} bytes",unsigned_long_int, sizeof(unsigned_long_int));
    fmt::println(" ");
    //Long long
    long long long_long_var{1234567890123456789}; //8 bytes
    long long int long_long_int{1234567890123456789};
    signed long long signed_long_long{1234567890123456789};
    signed long long int signed_long_long_int{1234567890123456789};
    unsigned long long int unsigned_long_long_int{1234567890123456789};
    fmt::println("Long long var : {}, size {} bytes",long_long_var, sizeof(long_long_var));
    fmt::println("Long long int : {}, size {} bytes",long_long_int, sizeof(long_long_int));
    fmt::println("Signed long long : {}, size {} bytes",signed_long_long, sizeof(signed_long_long));
    fmt::println("Signed long long int : {}, size {} bytes",signed_long_long_int, sizeof(signed_long_long_int));
    fmt::println("Unsigned long long int : {}, size {} bytes",unsigned_long_long_int, sizeof(unsigned_long_long_int));
    fmt::println(" ");

}