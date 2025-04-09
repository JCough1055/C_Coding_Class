
module;
#include <fmt/format.h>
#include <atomic>
#include <limits>
export module utilities; 

export void number_system()
{
int number1 = 15;    //Decimal
int number2 = 017;   //Octal
int number3 = 0x0F;  //Hexadecimal
int number4 = 0b1111;//Binary

fmt::println("The value of number1 is: {}", number1);
fmt::println("The value of number2 is: {}", number2);
fmt::println("The value of number3 is: {}", number3);
 fmt::println("The value of number4 is: {}", number4);
}
export void floating_point_types(){
/* Floating Point types
  floats offers 7 digits of precision while double offers 15 digits of precision
  long double offers 18 digits of precision
  The range of float is 1.17549e-38 to 3.40282e+38
  The range of double is 2.22507 e -308 to 1.79769 e+308
  The range of long double is 3.3621e-4932 to 1.18973e+4932
  */
  //Single precision (float)
  float single_precision=1.123456789123456789f;
    //Double precision (double)
  double double_precision=1.123456789123456789;

  //Extended precision (long double)
  long double long_double_precision = 1.123456789123456789L;

//Print results with 30 decimal spaces for comparison
  fmt::println("Float (single precision- 30 characters): {:.30f}", single_precision);
  fmt::println("Float (single precision- based on compiler): {}", single_precision);
  fmt::println("Double (double precision- 30 characters): {:.30f}", double_precision);
  fmt::println("Double (double precision- based on compiler): {}", double_precision);
    fmt::println("Long double (extended precision- 30 characters): {:.30Lf}", long_double_precision);
    fmt::println( " ");
    fmt::println("Size of float :{} bytes", sizeof(float));
    fmt::println("Size of double :{} bytes", sizeof(double));
    fmt::println("Size of long double :{} bytes", sizeof(long double));

}
export void print_type_ranges(){
    fmt::println("The range for short is from{} to {}", std::numeric_limits<short>::min(),std::numeric_limits<short>::max());
    fmt::println("The range for int is from {} to {}", std::numeric_limits<int>::min(), std::numeric_limits<int>::max());
    fmt::println("The range for unsigned int is from {} to {}", std::numeric_limits<unsigned int>::min(), std::numeric_limits<unsigned int>::max());
    fmt::println("The range for signed int is from {} to {}", std::numeric_limits<signed int>::min(), std::numeric_limits<signed int>::max());
    
    fmt::println("The range for short is from {} to {}", std::numeric_limits<short>::min(), std::numeric_limits<short>::max());
    fmt::println("The range for unsigned short is from {} to {}", std::numeric_limits<unsigned short>::min(), std::numeric_limits<unsigned short>::max());
    fmt::println("The range for signed short is from {} to {}", std::numeric_limits<signed short>::min(), std::numeric_limits<signed short>::max());
    fmt::println("The range for long long is from {} to {}", std::numeric_limits<long long>::min(), std::numeric_limits<long long>::max());
    fmt::println("The range for unsigned long long is from {} to {}", std::numeric_limits<unsigned long long>::min(), std::numeric_limits<unsigned long long>::max());
    fmt::println("The range for signed long long is from {} to {}", std::numeric_limits<signed long long>::min(), std::numeric_limits<signed long long>::max());
    fmt::println("The range for long is from {} to {}", std::numeric_limits<long>::min(), std::numeric_limits<long>::max());
    fmt::println("The range of float is: {} to {}", std::numeric_limits<float>::min(), std::numeric_limits<float>::max());
    fmt::println("The range of double is: {} to {}", std::numeric_limits<double>::min(), std::numeric_limits<double>::max());
    fmt::println("The range of long double is: {} to {}", std::numeric_limits<long double>::min(), std::numeric_limits<long double>::max());
}