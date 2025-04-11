module;
#include <fmt/format.h>
#include <vector>
#include <array>
#include <string>
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
export void floating_point_numbers(){
    //Fractional Numbers

    float number1{1.12345678901234567890f}; // 4 bytes
    double number2{1.12345678901234567890}; // 8 bytes
    long double number3{1.12345678901234567890L}; // 16 bytes
    fmt::println(" ");
    fmt::println("this is fractional numbers");
    fmt::println(" ");
    fmt::println("the value of number1 is: {}",number1);
    fmt::println("the value of number2 is: {}",number2);
    fmt::println("the value of number3 is: {}",number3);
    fmt::println(" ");
    //Scientic notation
    //The floating point numbers we have been dealing with has been in fixed notation.
    //We can also represent floating point numbers in scientific notation.
    //Scientific notation is a way of writing numbers that are too big or too small to be conveniently written in decimal form.
    //In scientific notation, numbers are written in the form of a decimal number between 1 and 10 multiplied by a power of 10.
    //For example, 12345 can be written as 1.2345 x 10^4
    //In C++, we can use the letter e to represent the power of 10.
    //For example, 1.2345e4 is equal to 1.2345 x 10^4

    fmt::println(" ");
    fmt::println("this is scientific notation");
    fmt::println(" ");
    double number5{192400023};
    double number6{1.92400023e8}; // 1.92400023 x 10^8
    double number7{1.924e8}; // 1.924 x 10^8 can elimate 00023 for simplicity if program allows
    double number8{0.0000000000003498};
    double number9{3.498e-13}; // 3.498 x 10^-13
    fmt::println("the value of number5 is: {}",number5);
    fmt::println("the value of number6 is: {}",number6);
    fmt::println("the value of number7 is: {}",number7);
    fmt::println("the value of number8 is: {}",number8);
    fmt::println("the value of number9 is: {}",number9);
    fmt::println(" ");
}

export void infinity_nan(){
  // Infinity and Nan
double number10{5.6};
double number11{};
double number12{};
double number13{-5.6};

//Infinity
double result{number10/number11}; // -5.6/0 = -inf
double result2{number13/number12}; // 0/5.6 = 0
fmt::println("{}/{} yields {}",number10,number11,result);
fmt::println("{}/{} yields {}",number13,number11,result2);
fmt::println("{} + {} yields {}", result,number10,result+number10);
fmt::println("{} + {} yields {}", result2,number13,result2+number13);

//Nan(Not a Number)
result = number11/number12; // 0/0 = nan
fmt::println("{}/{} yields {}",number11,number12,result);
}

//Booleans
export void booleans(){
     //Booleans

     bool red_light{false};
     bool green_light{true};
 
 if (red_light==true){
     fmt::println("Red light is true");
 }else{
     fmt::println("Red light is false");
 }
 if (green_light){
     fmt::println("Green light is true");
 }else{
     fmt::println("Green light is false");
 }
 fmt::println("The size of bbol is {} byte", sizeof(red_light));
 fmt::println("The size of bool is {} byte", sizeof(bool));
 
 fmt::println("The value of red_light is {}",red_light);
 fmt::println("The value of green_light is {}",green_light);
}

export void char_text(){
    //Characters and text
    char character{'a'};
    char character2{'r'};
    char character3{'r'};
    char character4{'o'};
    char character5{'w'};

    fmt::println(" ");
    fmt::println("this is characters and text");
    fmt::println(" ");
    fmt::println("{}",character);
    fmt::println("{}",character2);
    fmt::println("{}",character3);
    fmt::println("{}",character4);
    fmt::println("{}",character5);
    fmt::println(" ");
    fmt::println("The word is spelled: {}{}{}{}{} !!",character,character2,character3,character4,character5);
    char value=65;// this is the ascii value of A
    fmt::println("the value of value is: {}",value);// this will print the ascii value of A
    fmt::println("the value of value is: {}",static_cast<int>(value));// this turns the value into an int which is 65

}
export void vectors_arrays(){
 //  std::vector<char> characters{'a','r','r','o','w'};
 //std::array<char, 5> characters2{'a','r','r','o','w'};
 //fmt::println("this is the vector printout {}", charachters); - this will not work
 //fmt::println("this is the array printout {}", characters2);- this will not work
std::vector<int> numbers{10,20,200,100};
std::string message{"arrow"};
fmt::println("this is the string printout {}", message); // this will work
std::string greeting{"Hello"};
greeting.append(" World");
fmt::println("this is the string printout {}", greeting); // this will work   
}

export void auto_type(){
        //auto declaration
        auto var1{12};
        auto var2{13.0};
        auto var3{14.0f};
        auto var4{15.0L};
        auto var5{'e'};
        auto var6{123u};
        auto var7{123uL};
        auto var8{123ll};
    
        fmt::println("var1 has a value of {} and a size of {} bytes", var1, sizeof(var1));
        fmt::println("var2 has a value of {} and a size of {} bytes", var2, sizeof(var2));
        fmt::println("var3 has a value of {} and a size of {} bytes", var3, sizeof(var3));
        fmt::println("var4 has a value of {} and a size of {} bytes", var4, sizeof(var4));
        fmt::println("var5 has a value of {} and a size of {} bytes", var5, sizeof(var5));
        fmt::println("var6 has a value of {} and a size of {} bytes", var6, sizeof(var6));
        fmt::println("var7 has a value of {} and a size of {} bytes", var7, sizeof(var7));
        fmt::println("var8 has a value of {} and a size of {} bytes", var8, sizeof(var8));
    
}