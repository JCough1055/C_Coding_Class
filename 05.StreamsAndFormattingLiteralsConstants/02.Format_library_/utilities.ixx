module;
#include <fmt/format.h>
#include <format> 
#include <iostream>
#include <print>
#include <chrono>
#include <fmt/chrono.h>

export module utilities; 

export void standard_format_facilities(){

// The C++23 library adds the std::print and std::println functions, which are similar to fmt::print and fmt::println.
// The std::print function is used to print formatted output to the standard output stream (std::cout).
// The std::println function is used to print formatted output to the standard output stream (std::cout) and adds a newline character at the end of the output.
// The std::print function is similar to the fmt::print function, but it uses the new C++23 format library instead of the fmt library.

auto value= std::format("Hello, {}!", "World");
std::cout<<value<<"\n";

std::println("Using std::print:Hello, {}!", "World");


std::println("{}", value);
std::println("Hello {}", "World");
std::println("Hello {}", "World\n");

std::println("Unformatted table: ");
std::println( "{} {} {}","Daniel", "Aguia","28");
std::println("{} {} {}","Jay","Coughlin","59");
std::println("{} {} {}","Stanley","Woods","33");
std::println("{} {} {}","Jordan","Parker","21");
std::println("{} {} {}","Joe","Ball","27");
std::cout<<"\n";

std::println("Formatted table: ");
std::println( "{:<10} {:<10} {:<5}","Daniel", "Aguia","28");// :< left justifyt with 10 spaces :> right justify with 10 spaces
std::println("{:<10} {:<10} {:<5}","Jay","Coughlin","59");
std::println("{:<10} {:<10} {:<5}","Stanley","Woods","33");
std::println("{:<10} {:<10} {:<5}","Jordan","Parker","21");
std::println("{:<10} {:<10} {:<5}","Joe","Ball","27");
   

}

export void external_format_facilities(){

    auto value= fmt::format("Hello, {}!", "World");
fmt::println("{}",value);
std::cout<<value<<"\n";

fmt::println("Using fmt::print:Hello, {}!", "World");


fmt::println("{}", value);
fmt::println("Hello {}", "World");
fmt::println("Hello {}", "World\n");

fmt::println("Unformatted table: ");
fmt::println( "{} {} {}","Daniel", "Aguia","28");
fmt::println("{} {} {}","Jay","Coughlin","59");
fmt::println("{} {} {}","Stanley","Woods","33");
fmt::println("{} {} {}","Jordan","Parker","21");
fmt::println("{} {} {}","Joe","Ball","27");
std::cout<<"\n";

fmt::println("Formatted table: ");
fmt::println( "{:<10} {:<10} {:<5}","Daniel", "Aguia","28");// :< left justifyt with 10 spaces. if you wnat right justify then use :> right justify with 10 spaces
fmt::println("{:<10} {:<10} {:<5}","Jay","Coughlin","59");
fmt::println("{:<10} {:<10} {:<5}","Stanley","Woods","33");
fmt::println("{:<10} {:<10} {:<5}","Jordan","Parker","21");
fmt::println("{:<10} {:<10} {:<5}","Joe","Ball","27");
std::cout<<"\n";
int col_width{10};
fmt::println("{:<{}} {:<{}} {:<{}}","Daniel", col_width, "Aguia", col_width, "28", col_width/2);
fmt::println("{:<{}} {:<{}} {:<{}}","Jay", col_width, "Coughlin", col_width, "59", col_width/2);
fmt::println("{:<{}} {:<{}} {:<{}}","Stanley", col_width, "Woods", col_width, "33", col_width/2);
fmt::println("{:<{}} {:<{}} {:<{}}","Jordan", col_width, "Parker", col_width, "21", col_width/2);
fmt::println("{:<{}} {:<{}} {:<{}}","Joe", col_width, "Ball", col_width, "27", col_width/2);
std::cout<<"\n";
col_width=20;
fmt::println("the column width is set to 20");
fmt::println("{:<{}} {:<{}} {:<{}}","Daniel", col_width, "Aguia", col_width, "28", col_width/2);
fmt::println("{:<{}} {:<{}} {:<{}}","Jay", col_width, "Coughlin", col_width, "59", col_width/2);
fmt::println("{:<{}} {:<{}} {:<{}}","Stanley", col_width, "Woods", col_width, "33", col_width/2);
fmt::println("{:<{}} {:<{}} {:<{}}","Jordan", col_width, "Parker", col_width, "21", col_width/2);
fmt::println("{:<{}} {:<{}} {:<{}}","Joe", col_width, "Ball", col_width, "27", col_width/2);
std::cout<<"\n";
//Internal Justified
fmt::println("the data is internal justified");
fmt::println("{:^{}} {:^{}} {:^{}}","Daniel", col_width, "Aguia", col_width, "28", col_width/2);
fmt::println("{:^{}} {:^{}} {:^{}}","Jay", col_width, "Coughlin", col_width, "59", col_width/2);
fmt::println("{:^{}} {:^{}} {:^{}}","Stanley", col_width, "Woods", col_width, "33", col_width/2);
fmt::println("{:^{}} {:^{}} {:^{}}","Jordan", col_width, "Parker", col_width, "21", col_width/2);
fmt::println("{:^{}} {:^{}} {:^{}}","Joe", col_width, "Ball", col_width, "27", col_width/2);


fmt::println("{:^10}",-123.456);
fmt::println("{:<10}",-123.456);
fmt::println("{:>10}",-123.456);

fmt::println("{:*<{}} {:*<{}} {:*<{}}","Daniel", col_width, "Aguia", col_width, "28", col_width/2);
fmt::println("{:*<{}} {:*<{}} {:*<{}}","Jay", col_width, "Coughlin", col_width, "59", col_width/2);
fmt::println("{:*<{}} {:*<{}} {:*<{}}","Stanley", col_width, "Woods", col_width, "33", col_width/2);
fmt::println("{:*<{}} {:*<{}} {:*<{}}","Jordan", col_width, "Parker", col_width, "21", col_width/2);
fmt::println("{:*<{}} {:*<{}} {:*<{}}","Joe", col_width, "Ball", col_width, "27", col_width/2);
std::cout<<"\n";

auto now = std::chrono::system_clock::now();
std::cout << fmt::format("Current date and time: {:%Y-%m-%d %H:%M:%S}\n", now);

 fmt::print(" ");

 bool condition{true};
 bool condition2{false};
    fmt::print("Condition is {} and condition2 is {}\n", condition, condition2);

    fmt::println(" condition is {:d} and condition2 is {:d}", condition, condition2);

    int pos_num{45};
    int neg_num{-35};
    fmt::println("Positive number is {} ", pos_num);

    fmt::println(" ");
    fmt::println("Negative number is {}",  neg_num);
    fmt::println("Positive number is {:+} ", pos_num);
    fmt::println("Negative number is {:-}",  neg_num);
    int pos_num2{717171};
    int neg_num2{-53289};
    double double_var{432.98};
    fmt::println("Positive number is {:+} ", pos_num2);
    fmt::println("Negative number is {:-}",  neg_num2);
    fmt::println("Value of double is : {:+}", double_var);
    fmt::println("numbers in different numbering systems:");
    fmt::println("this is an example if decimal number: {}", pos_num2);//decimal is default
    fmt::println("this is an example of hex number: {:x}", pos_num2);
    fmt::println("this is an example of capitolnhex number: {:X}", pos_num2);
    fmt::println("this is an example of octal number: {:o}", pos_num2);
    fmt::println("this is an example of binary number: {:b}", pos_num2);

    fmt::println("this is an example if decimal number: {}", neg_num2);//decimal is default
    fmt::println("this is an example of hex number: {:x}", neg_num2);
    fmt::println("this is an example of capitolnhex number: {:X}", neg_num2);
    fmt::println("this is an example of octal number: {:o}", neg_num2);
    fmt::println("this is an example of binary number: {:b}", neg_num2);
    fmt::println("this is an example of binary number: {:032b}", neg_num2);

    fmt::println("double var in different formats:");
    fmt::println("double_var (default): {}", double_var);//decimal is default
    fmt::println("double_var (fixed): {:f}", double_var);
    fmt::println("double_var (scientific): {:e}", double_var);
    fmt::println("double_var (scientific): {:E}", double_var);

    double a{3.1415926535897932384626433832795};
    double b{2006.8};
    double c{1.34e-10};

    fmt::println("double values(default):use scientific when necessary ");
    fmt::println("double a: {}",a);
    fmt::println("double b: {}",b);
    fmt::println("double c: {}", c);

    fmt::println("double values with precision ");
    fmt::println("double a: {:.6}",a);
    fmt::println("double b: {:.6}",b);
    fmt::println("double c: {:.6}", c);

    fmt::println("double values fixed ");
    fmt::println("double a: {:.6f}",a);
    fmt::println("double b: {:.6f}",b);
    fmt::println("double c: {:.6f}", c);

    fmt::println("double values scientific ");
    fmt::println("double a: {:.6e}",a);
    fmt::println("double b: {:.6e}",b);
    fmt::println("double c: {:.6e}", c);

    fmt::println("this is about agrgument indexes:");
    fmt::println("It is {} degrees out and it is {}",45.3,"sunny");
    fmt::println("this is about agrgument indexes:");
    fmt::println("It is {1} degrees out and it is {0:.2f}",45.3,"sunny");

}