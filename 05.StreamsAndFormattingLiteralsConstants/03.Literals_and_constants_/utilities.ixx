module;
#include <fmt/format.h>
export module utilities; 

export constexpr int add(int a ,int b){
  return a+b;
  }
consteval int mult(int a, int b){
  return a*b;
}
export void literals(){

    short  short_unsigned_int{44};
    short backup_short_unsigned_int=short_unsigned_int;
    short short_var{-32768};
    short int short_int{455};
    signed short signed_short{122};
    signed short int signed_short_int{-456};
    unsigned short int unsigned_short_int{5678U};
    
    fmt::println("The value of unsigned_int is {}",short_unsigned_int);
    fmt::println("The ranged of unsigned int is from: {} to {}",std::numeric_limits<short>::min(), std::numeric_limits<short>::max());
    
    short_unsigned_int= 255;
    fmt::println("The value of unsigned_int is {}",short_unsigned_int);
    short_unsigned_int=256;
    fmt::println("The value of unsigned_int is {}",short_unsigned_int);
    
    fmt::println("the original value of short_unsigned_int is: {}",backup_short_unsigned_int);
        // 4 Bytes
        const int int_var{ 55 };//
        signed signed_var{ 66 };//
        signed int signed_int{ 77 };//
        unsigned int unsigned_int{ 555U };//
    
      // 4 or 8 Bytes
        long long_var{ 88L };// 4 OR 8 Bytes
        long int long_int{ 33L };
        signed long signed_long{ 44l };
        signed long int signed_long_int{ 44l };
        unsigned long int unsigned_long_int{ 555ul };
    
        long long long_long{ 888ll };// 8 Bytes
        long long int long_long_int{ 999ll };
        signed long long signed_long_long{ 444ll };
        signed long long int signed_long_long_int{ 1234ll };
    
        // Grouping Numbers : C++14 and onwards
        unsigned int prize{ 1'500'00'0u }; 
      fmt::println("The prize is : {}", prize);
      fmt::println(" signed_long_long_int : {}", signed_long_long_int);
    
      // Narrowing errors
        // Possible narrowing errors are cought by the braced initializer method.
        // Assignment and functional don't catch that.
        //unsigned char distance {555u}; //Error [0~255]
        // unsigned int game_score {-20}; //Error
      //fmt::println("game_score : {}", game_score);
    
        // With number systems - Hex : prefix with 0x
        unsigned int hex_number{ 0x22BU };// Dec 555
        int hex_number2{ 0x400 };// Dec 1024
      fmt::println("The hex number is : {:x}", hex_number);
      fmt::println("The hex number2 is : {}", hex_number2);
    
        // Representing colors with hex
        int black_color{ 0xffffff };
      fmt::println("Black color is : {}", black_color);
    
      // Octal literals : prefix with 0
        int octal_number{ 0777u };// 511 Dec
      fmt::println("The octal number is : {}", octal_number);
        //!!BE CAREFUL NOT TO PREFIX YOUR INTEGERS WITH 0 IF YOU MEAN DEC
        int error_octal{ 055 };// This is not 55 in memory , it is 45 dec
      fmt::println("The erronous octal number is : {}", error_octal);
    
        // Binary literals
        unsigned int binary_literal{ 0b11111111u };// 255 dec
      fmt::println("The binary literal is : {}", binary_literal);
    
      // Other literals. This is just an example and we will learn
        // more about  strings as we progress in the course.
        char char_literal{ 'c' };
        int number_literal{ 15 };
        float fractional_literal{ 1.5f };
        std::string string_literal{ "Hit the road" };
    
      //Print the literals with fmt
      fmt::println("The char literal is : {}", char_literal);	
      fmt::println("The number literal is : {}", number_literal);
      fmt::println("The fractional literal is : {}", fractional_literal);
      fmt::println("The string literal is : {}", string_literal);
    
        

}

export void constants(){
    const int age{21};
    const float height{6.17563f};


    fmt::println("the perfect age for living the rest of your life is {}", age);
    fmt::println("the perfect height is: {}", height);
 // age=22; //COMPILER ERROR
//fmt::println("the perfect age for living the rest of your life is {}", age);

}

export void constexpr_variables(){
  constexpr int SOME_LIB_MAJOR_VERSION{1237};
  constexpr int eye_count {2};
  constexpr double PI{3.14};

 // eye_count=4; ERROR -- cannot change a variable that has been declared constant
  fmt::println("The eye count is {}", eye_count);
  fmt::println("THe value of PI is : {}", PI);

  //int leg_count{5};
  //constexpr int total_leg_count{leg_count+10}; ERROR- COmpile time error because constexpr cant use the compile int leg_count

  constexpr int room_count{10};
  constexpr int door_count{room_count + 2};

  fmt::println("Room count is: {}",room_count);
  fmt::println("Door count is: {}",door_count);

  const int table_count{10};
  constexpr int chair_count{table_count*10};//this will work because compiler is smart enough to know table_count is castant
  fmt::println("the total chair count is {}",chair_count);

static_assert(SOME_LIB_MAJOR_VERSION ==1237);

const int age{5};
static_assert(age==5);
}

export constexpr void constexpr_functions(){

     //constexpr_variables();
//constexpr functionns are functions that are evaluated at compile time

constexpr int value1{60};
constexpr int value2{20};



auto result{add(value1,value2)};//compile time evaluation
  
int factor{29};
auto result2{add(value1,factor)};//run time evaluation

/*
fmt::println("The result is : {}", result);
fmt::println("The result2 is : {}", result2);
*/



}
export consteval void consteval_functions(){
//consteval functions

int value{22};
constexpr int value2{33};
auto result3{mult(value,value2)};
int factor{29};
auto result4{mult(value,factor)};//run time evaluation

}