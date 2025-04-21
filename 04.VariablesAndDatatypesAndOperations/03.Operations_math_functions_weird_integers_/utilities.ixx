module;
#include <fmt/format.h>
#include<typeinfo>
export module utilities; 

export void basic_functions(){

    int number1{230};
    int number2{100};
    
    int result_addition= number1+number2;
    int result_subtraction= number1-number2;
    int result_multiplication= number1*number2;
    int result_division= number1/number2;
    int result_modulus= number1%number2;
    int result_increment= ++number1;
    int result_decrement= --number2;
    
    fmt::print("Addition: {}\n", result_addition);
    fmt::print("Subtraction: {}\n", result_subtraction);
    fmt::print("Multiplication: {}\n", result_multiplication);
    fmt::print("Division: {}\n", result_division);
    fmt::print("Modulus: {}\n", result_modulus);
    fmt::print("Increment: {}\n", result_increment);
    fmt::print("Decrement: {}\n", result_decrement);

}
export void presedence_and_associativity(){
 // Presedence and Associativity

int a{6};
int b{3};
int c{8};
int d{9};
int e{3};
int f{2};
int g{5};
int result = a + b * c-d/e-f+g; // Multiplication first, then addition if we put brackets, result changes to (a + b) * c-d/e-f+g = 72
    fmt::print("Result: {}\n", result); // Result: 6 + 3 * 8 - 9 / 3 - 2 + 5 = 6 + 24 - 3 - 2 + 5 = 30
    result=a/b*c+d-e+f;
    fmt::print("New Result: {}\n", result); // Result: 6 / 3 * 8 + 9 - 3 + 2 = 2 * 8 + 9 - 3 + 2 = 16 + 9 - 3 + 2 = 24 
}
export void postfix_increment_and_decrement(){

// Postfix increment and decrement

int value{5};

value= value +1; // Value after prefix increment: 6
fmt::print("Value after postfix increment: {}\n", value); // Value after postfix increment: 6
value= value -1;
fmt::print("Value after postfix decrement: {}\n", value); // Value after postfix decrement: 5

value =10;//resets value to 10
fmt::println("the value is {}", value); // the value is 10
value++; // Value after postfix increment: 11
fmt::println("Value after postfix increment: {}\n", value); // Value after postfix increment: 11
fmt::println("The value of post increment is {}", value++); // The value of post increment is 11
fmt::println(" "); // prints a new line
fmt::println("Now the value post increment is : {}", value); // Now the value post increment is : 12
fmt::println(" the value of post decrement is {}", value--); // the value of post decrement is 12
fmt::println("Now the value post decrement is : {}", value); // Now the value post decrement is : 11
value--;
fmt::println("Now the value post decrement is : {}", value); // Now the value post decrement is : 10
++value;
fmt::println("Now the value post increment is : {}", value); // Now the value post increment is : 11
value--;
fmt::println("Now the value post decrement is : {}", value); // Now the value post decrement is : 10
fmt::println("The value of pre increment is {}", ++value); // The value of pre increment is 11
fmt::println("Now the value pre increment is : {}", value); // Now the value pre increment is : 11
fmt::println("The value of pre decrement is {}", --value); // The value of pre decrement is 10
fmt::println("Now the value pre decrement is : {}", value); // Now the value pre decrement is : 10



}

export void compound_assignments(){

//Compound Assignment Operators
int value_cmpd{45};
value_cmpd=value_cmpd+5;
fmt::print("Value after compound assignment: {}\n", value_cmpd); // Value after compound assignment: 50
value_cmpd+=5;
fmt::print("Value after compound assignment: {}\n", value_cmpd); // Value after compound assignment: 55
fmt::print("Value after compound assignment: {}\n", value_cmpd+=5); // Value after compound assignment: 60
value_cmpd-=5;
fmt::print("Value after compound assignment: {}\n", value_cmpd); // Value after compound assignment: 55
value_cmpd*=5;
fmt::print("Value after compound assignment: {}\n", value_cmpd); // Value after compound assignment: 275
value_cmpd/=5;
fmt::print("Value after compound assignment: {}\n", value_cmpd); // Value after compound assignment: 55
value_cmpd%=5;
fmt::print("Value after compound assignment: {}\n", value_cmpd); // Value after compound assignment: 0
value_cmpd=5;
value_cmpd<<=5;
fmt::print("Value after compound assignment: {}\n", value_cmpd); // Value after compound assignment this is shifting bits 2 tot h 5th power which is 32*5: 160
value_cmpd=5;
value_cmpd>>=5;
fmt::print("Value after compound assignment: {}\n", value_cmpd); // Value after compound assignment: 0
value_cmpd=5;
value_cmpd&=5;
fmt::print("Value after compound assignment: {}\n", value_cmpd); // Value after compound assignment: 5
value_cmpd=5;
value_cmpd|=5;
fmt::print("Value after compound assignment: {}\n", value_cmpd); // Value after compound assignment: 5
value_cmpd=5;
value_cmpd^=5;
fmt::print("Value after compound assignment: {}\n", value_cmpd); // Value after compound assignment: 0
value_cmpd=5;
value_cmpd=~5;
fmt::print("Value after compound assignment: {}\n", value_cmpd); // Value after compound assignment: -6
value_cmpd=5;
value_cmpd=5;

}
export void relational_operators(){

    //Relational Operators

int number1{20};
int number2{20};

fmt::println("The value of number1 is {}", number1);
fmt::println("The value of number2 is {}", number2);

fmt::println("number1 <number2: {}",(number1<number2));
fmt::println("number1 >number2: {}",(number1>number2));
fmt::println("number1 <=number2: {}",(number1<=number2));
fmt::println("number1 >=number2: {}",(number1>=number2));
fmt::println("number1 !=number2: {}",(number1!=number2));
fmt::println("number1 ==number2: {}",(number1==number2));



}    

export void logical_operators(){
//logical_operators();

bool a{true};
bool b{false};
bool c{true};

fmt::println("The value of a is {}", a); // The value of a is true
fmt::println("The value of b is {}", b); // The value of b is false
fmt::println("The value of c is {}", c); // The value of c is true

fmt::println("the value of a and b is {}",a&&b); // the value of a and b is false
fmt::println("the value of a and c is {}",a&&c); // the value of a and c is true
fmt::println("the value of a and b and c is {}",a&&b&&c);

fmt::println("The vale of a or b is {}",a||b); // The vale of a or b is true
fmt::println("The vale of a or c is {}",a||c); // The vale of a or c is true
fmt::println("The value of a or b or c is {}",a||b||c); // The value of a or b or c is true

fmt::println("The value of a is {}", !a); // The value of a is true
fmt::println("The value of b is {}", !b); // The value of b is false
fmt::println("The value of c is {}", !c); // The value of c is true

fmt::println("Combining logical operators");
fmt::println("The value of a and b or c is {}", (a && b) || c); // The value of a and b or c is true

}

export void logical_relations_ops_combnined(){
    int d{45};
    int e{20};
    int f{11};
    bool a{true};
    
    fmt::println("The value of d is {}", d); // The value of d is 45
    fmt::println("The value of e is {}", e); // The value of e is 20
    fmt::println("The value of f is {}", f); // The value of f is 11
    
    fmt::println("The value of (d >e) && (d>f) is {}", (d>e)&&(e>f)); // The value of d is true
    fmt::println("The value of (d =e) || (e>=f) is {}", (d==e)&&(e>=f)); // The answer is false
    fmt::println("The value of (d >e) && (d>f) is {}", (d>e)&&(d>f)); // The value of d is true
    fmt::println("The value of (d =e) || (e>=f) is {}", (d==e)||(e>=f)); // The answer is false
    fmt::println("The value of (d >e) && (d>f) is {}", (d>e)&&(d>f)); // The value of d is true
    fmt::println("The value of (d =e) || (e>=f) is {}", (d==e)||(e>=f)); // The answer is false
    fmt::println("The value of (d >e) && (d>f) is {}", (d>e)&&(d>f)); // The value of d is true
    fmt::println("The value of (d =e) || (e>=f) is {}", (d==e)||(e>=f)); // The answer is false
    fmt::println("The value of (d >e) && (d>f) is {}", (d>e)&&(d>f)); // The value of d is true
    fmt::println("The value of  d=e or e>=f is {}", (d==e)||(e>=f)); // The answer is true
    fmt::println("the value of !a ||(e>=f) is {}", ((!a)||(e>=f))); // The answer is false


}
export void math_functions(){

//Math Functions

double weight{7.7};

fmt::println("the weightis rounded to floor is : {}",std::floor(weight));
fmt::println("the weightis rounded to ceil is : {}",std::ceil(weight));

//abs

double savings{-5000};
fmt::println("the absolute value of weight is : {}",std::abs(weight));
fmt::println("the absolute value of savings is : {}",std::abs(savings));

fmt::println("3.654 rounded to : {}", std::round(3.654));
fmt::println("2.5 is rounded to : {}", std::round(2.5));
fmt::println("2.4 is rounded to : {}", std::round(2.4));
fmt::println("-2.4 is rounded to : {}", std::round(-2.4));

auto result = std::round(-2.45);
fmt::println("The result of rounding -2.45 is : {}", result);
fmt::println("Type of rounded -2.4: {}", typeid(result).name());

//exp : f(x)= e^x, where e = 2.71828. test the result here against a calculator
double exponetial = std:: exp(10);
fmt::println("The exponetial of 10 is : {}", exponetial);

//power
fmt::println("3^4 is {}", pow(3,4));
fmt::println("9^3 is : {}", pow(9,3));

//log reverse function of power . if 2^3=8 , log 8 in base 2= 3. Log is like asking 
//to which exponent should we elevate 2 to get eight. Log , by default computes the log
//in base e . There is also another function which uses base 10 called log10

//Try the reverse operation of e^4 =54.59, it will be log 54.59 in base e+?
fmt::println("The log of 54.59 is : {}", std::log(54.59));
//Try the reverse operation of 10^4 =10000, it will be log 10000 in base 10
fmt::println("The log of 10000 is : {}", std::log10(10000));
//Try the reverse operation of 2^3 =8, it will be log 8 in base 2
fmt::println("The log of 8 in base 2 is : {}", std::log(8)/std::log(2));
//sqrt
fmt::println("The square root of 81 is : {}", std::sqrt(81));

}

export void weird_integer_types(){
    short int var1{10};
    short int var2{20};
    
    char var3{30};
    char var4{40};
    fmt::println("size(of) var1 :{}", sizeof(var1));
    fmt::println("size(of) var2 :{}", sizeof(var2));
    fmt::println("size(of) var3 :{}", sizeof(var3));
    fmt::println("size(of) var4 :{}", sizeof(var4));
    
    auto result= var1+var2;
    fmt::println("result :{}", result);
    auto result2 = var3-var4;
    fmt::println("result :{}", result2);
    
    fmt::println("size(of) result :{}", sizeof(result));
    fmt::println("size(of) result2 :{}", sizeof(result2));

}

export void conversions(){

    //Implicit and explicit Conversions
//Promotion- type conversion the process of converting one data type to another.The computer takes the smallest data type and converts it to the largest data type.
//Implicit conversion is done by the compiler automatically.

double price{45.6};
int units{10};

int x;
double y{45.678};

double s{12.5};
double t{34.6};

int sum=s+t;
fmt::println("The value of sum is : {}", sum); // The value of sum is : 47

 sum=static_cast<int> (s)+static_cast<int>(t); // The type of sum is int
fmt::println("The value of sum is : {}", sum); // The value of sum is : 46

sum=static_cast<int>(s+t);
fmt::println("The value of sum is : {}", sum); // The value of sum is : 47
//Old style C conversion static cast-NOT RECCOMMENDED IN MODERN C++
double PI{3.14};

int int_PI=static_cast<int>(PI);
fmt::println("The value of int_PI is : {}", int_PI); // The value of int_PI is : 3
fmt::println("The value of PI is : {}", PI); // The value of PI is : 3.14


x=y; // The type of x is int
fmt::println("The value of x is : {}", x); // The value of x is : 45
fmt::println("The type of x is : {}", typeid(x).name()); // The type of x is : int
fmt::println("The size of x is : {}", sizeof(x)); // The size of x is : 4

auto total_price = price * units; // The type of total_price is double
fmt::println("The total price is : {}", total_price); // The total price is : 456
fmt::println("The type of total_price is : {}", typeid(total_price).name()); // The type of total_price is : double
fmt::println("The size of total_price is : {}", sizeof(total_price));

}

export void overflow_underflow(){
//overflow and underflow- 

unsigned char data{250};
fmt::println("The minimum value of data is {} and the maximum is {}", std::numeric_limits<unsigned char>::min(),std::numeric_limits<unsigned char>::max()); // The value of data is 250

++data; // Increments to 251
fmt::println("The value of data is {}", data); // The value of data is 251
++data; // Increments to 252
fmt::println("The value of data is {}", data); // The value of data is 252
++data; // Increments to 253
fmt::println("The value of data is {}", data); // The value of data is 253
++data; // Increments to 254
fmt::println("The value of data is {}", data); // The value of data is 254
++data; // Increments to 255
fmt::println("The value of data is {}", data); // The value of data is 255++data; // Overflow
++data; // Overflow
fmt::println("The value of data is {}", data); // The value of data is 0
fmt::println("The value has an overflow : {}",static_cast<int>(data)); // The value has an overflow : 0
//underflow
data=1;
fmt::println("The value of data is {}", data); // The value of data is 1
--data; // Decrements to 0
fmt::println("The value of data is {}", data); // The value of data is 0
--data; //Underflow--data to 255
fmt::println("The value of data is {}", data); // The value of data is 255
fmt::println("The value has an underflow : {}",static_cast<int>(data)); // The value has an underflow : 255

}