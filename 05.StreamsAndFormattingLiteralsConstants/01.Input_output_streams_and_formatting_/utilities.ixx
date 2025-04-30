module;
#include <iostream>
#include <string>
#include <iomanip>
export module utilities; 
export void input_output_iostream(){

//=======================================================================
//this will explore the iostream , stream and other topics
 //data output
 //=======================================================================
 std::cout<<"This is the print command for the standard library in C++23!"<<std::endl;

 int age{21};
 std::cout<<"If you want to print the age it will be displayed here. THe age of the individual is : "<<age<<std::endl;

 std::cerr<<"ERROR MESSAGE: This is the error stream. It is used to print errors and warnings."<<std::endl;
 std::clog<<"LOG MESSAGE: This is the log stream. It is used to print logs and other information."<<std::endl;

//data input
std::string name{};
std::cout<<"Please enter your name: "<< std::endl;
std::getline(std::cin, name);
std::cout<<"Your name is: "<<name<<std::endl;
std::cout<<"Please enter a new age: "<< std::endl;
std::cin>>age;
std::cout<<"The new age is: "<<age<<std::endl;

//Data formatting with endl and \n to make code look good

std::cout<<"Hello";
std::cout<<" Everyone!!\n";
std::cout<<"---------------------"<<std::endl;
std::cout<<"Hello\n";
std::cout<<"everyone\n";
std::cout<<"---------------------"<<std::endl;

std::cout<<"Hello Everyone!!!"<<std::endl;
std::cout<<"Hello Everyone!!!\n";
std::cout<<"I said....Hello Everyone!!!"<<std::endl;   


}

export void output_formatting(){

//=======================================================================
//this will explore the iostream , stream and other topics
//=======================================================================

std::cout<<"Unformatted Table :"<<std::endl;
std::cout<<std::endl;
std::cout<<"Daniel"<<" "<<"Gray"<<" 30"<<std::endl;
std::cout<<"Stanley"<<" " <<"Woods"<<" 33"<<std::endl;
std::cout<<"Jordan"<<" " <<"Parker"<<" 24"<<std::endl;
std::cout<<"Joe"<<" "<<"Ball"<<" 21"<<std::endl;
std::cout<<"Josh"<<" " <<"Carr"<<" 33"<<std::endl;
std::cout<<"Izaiah"<<" " <<"Robinson"<<" 29"<<std::endl;
std::cout<<std::endl;
std::cout<<"Formatted Table :"<<std::endl;
std::cout<<std::endl;
std::cout<<std::setw(10)<< "First Name"<<std::setw(10)<<"Last Name"<<std::setw(10/2)<<" Age"<<std::endl;
std::cout<<std::left;
std::cout<<std::setw(10)<<"Daniel"<<std::setw(10)<<"Gray"<<std::setw(10/2)<<" 210/2"<<std::endl;
std::cout<<std::setw(10)<<"Stanley"<<std::setw(10)<<"Woods"<<std::setw(10/2)<<" 33"<<std::endl;
std::cout<<std::setw(10)<<"Jordan"<<std::setw(10)<<"Parker"<<std::setw(10/2)<<" 410/2"<<std::endl;
std::cout<<std::setw(10)<<"Joe"<<std::setw(10)<<"Ball"<<std::setw(10/2)<<" 21"<<std::endl;
std::cout<<std::setw(10)<<"Josh"<<std::setw(10)<<"Carr"<<std::setw(10/2)<<" 33"<<std::endl;
std::cout<<std::setw(10)<<"Izaiah"<<std::setw(10) <<"Robinson"<<std::setw(10/2)<<" 29"<<std::endl;


int col_width{10};

std::cout<<"Formatted Table :"<<std::endl;
std::cout<<std::endl;
std::cout<<std::setw(col_width)<< "First Name"<<std::setw(col_width)<<"Last Name"<<std::setw(col_width/2)<<" Age"<<std::endl;
std::cout<<std::left;
std::cout<<std::setw(col_width)<<"Daniel"<<std::setw(col_width)<<"Gray"<<std::setw(col_width/2)<<" 30"<<std::endl;
std::cout<<std::setw(col_width)<<"Stanley"<<std::setw(col_width)<<"Woods"<<std::setw(col_width/2)<<" 33"<<std::endl;
std::cout<<std::setw(col_width)<<"Jordan"<<std::setw(col_width)<<"Parker"<<std::setw(col_width/2)<<" 24"<<std::endl;
std::cout<<std::setw(col_width)<<"Joe"<<std::setw(col_width)<<"Ball"<<std::setw(col_width/2)<<" 21"<<std::endl;
std::cout<<std::setw(col_width)<<"Josh"<<std::setw(col_width)<<"Carr"<<std::setw(col_width/2)<<" 33"<<std::endl;
std::cout<<std::setw(col_width)<<"Izaiah"<<std::setw(col_width) <<"Robinson"<<std::setw(col_width/2)<<" 29"<<std::endl;


std::cout<<std::endl;
std::cout<<std::left;
std::cout<<std::setw(10)<<-123.45<<std::endl;
std::cout<<std::internal;
std::cout<<std::setw(10)<<-123.45<<std::endl;
std::cout<<std::right;
std::cout<<std::setw(10)<<-123.45<<std::endl;
std::cout<<std::endl;


//=======================================================================
//this will set fill with whatever charachter you want intead of blanks
//=======================================================================

col_width = 10;


std::cout<<"Formatted Table :"<<std::endl;
std::cout<<std::endl;
std::cout<<std::setw(col_width)<< "First Name"<<std::setw(col_width)<<"Last Name"<<std::setw(col_width/2)<<" Age"<<std::endl;
std::cout<<std::left;
std::cout<<std::setfill('~');
std::cout<<std::setw(col_width)<<"Daniel"<<std::setw(col_width)<<"Gray"<<std::setw(col_width/2)<<" 30"<<std::endl;
std::cout<<std::setw(col_width)<<"Stanley"<<std::setw(col_width)<<"Woods"<<std::setw(col_width/2)<<" 33"<<std::endl;
std::cout<<std::setw(col_width)<<"Jordan"<<std::setw(col_width)<<"Parker"<<std::setw(col_width/2)<<" 24"<<std::endl;
std::cout<<std::setw(col_width)<<"Joe"<<std::setw(col_width)<<"Ball"<<std::setw(col_width/2)<<" 21"<<std::endl;
std::cout<<std::setw(col_width)<<"Josh"<<std::setw(col_width)<<"Carr"<<std::setw(col_width/2)<<" 33"<<std::endl;
std::cout<<std::setw(col_width)<<"Izaiah"<<std::setw(col_width) <<"Robinson"<<std::setw(col_width/2)<<" 29"<<std::endl;

//=======================================================================
//boolalpha and noboolalpha
//=======================================================================

bool condition{true};
bool other_condition{false};

std::cout<<std::endl;
std::cout<<" THe value of condition is : "<<condition<<std::endl;
std::cout<<" THe value of other_condition is : "<<other_condition<<std::endl;
std::cout<<std::endl;
std::cout<<"The value of condition is : "<<std::boolalpha<<condition<<std::endl;
std::cout<<"The value of other_condition is : "<<std::boolalpha<<other_condition<<std::endl;
std::cout<<std::endl;
std::cout<<"The value of condition is : "<<std::noboolalpha<<condition<<std::endl;
std::cout<<"The value of other_condition is : "<<std::noboolalpha<<other_condition<<std::endl;

//=======================================================================
//showpos and noshowpos
//=======================================================================

int pos_num{45};
int neg_num{-30};

std::cout<<"the value of the positive number is : "<<pos_num<<std::endl;
std::cout<<"the value of the negative number is : "<<neg_num<<std::endl;

std::cout<<std::showpos;
std::cout<<"the value of the positive number is : "<<pos_num<<std::endl;
std::cout<<"the value of the negative number is : "<<neg_num<<std::endl;
std::cout<<std::noshowpos;
std::cout<<"the value of the positive number is : "<<pos_num<<std::endl;
std::cout<<"the value of the negative number is : "<<neg_num<<std::endl;


//======================================================================='
//

#include<cctype>
int pos_int{717171};

std::cout<<"the value of the positive integer is : "<<pos_int<<std::endl;

std::cout<<" THe vale of positive integer in hex is : "<<std::hex<<pos_int<<std::endl;
std::cout<<" THe vale of positive integer in octal is : "<<std
::oct<<pos_int<<std::endl;
std::cout<<" THe vale of positive integer in decimal is : "<<std::dec<<pos_int<<std::endl;
std::cout<<"the value in bbinary is :"<<std::bitset<16>(pos_int)<<std::endl;



//=======================================================================
//uppercase and no uppercase
//=======================================================================



char ch{'a'};
std::string s{"The dog ate my homework"};

std::cout<<"pos_int( nouppercase: default) : "<<std::endl;
std::cout<<"pos_int (dec) : " <<std::dec<<pos_int<<std::endl;
std::cout<<"pos_int (hex) : " <<std::hex<<pos_int<<std::endl;
std::cout<<"pos_int (oct) : " <<std::oct<<pos_int<<std::endl;

std::cout<<"pos_int( Uppercase) : "<<std::endl;
std::cout<<std::uppercase;
std::cout<<"pos_int (dec) : " <<std::dec<<pos_int<<std::endl;
std::cout<<"pos_int (hex) : " <<std::hex<<pos_int<<std::endl;
std::cout<<"pos_int (oct) : " <<std::oct<<pos_int<<std::endl;
std::cout<<s<< std::endl;
std::cout<<static_cast<char>(std::toupper(ch))<< std::endl;


//=======================================================================
//Scientific or fixed notation
//=======================================================================

double a{3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342};
double b{2006.0};
double c{1.34e-10};

std::cout<<std::endl;
std::cout<<"double values (default : use scientific where necessary) :"<<std::endl;
std::cout<<"a : "<<a<<std::endl;
std::cout<<"b : "<<b<<std::endl;
std::cout<<"c : "<<c<<std::endl;
std::cout<<std::endl;
std::cout<<"double values (fixed) :"<<std::endl;
std::cout<<std::fixed;
std::cout<<"a : "<<a<<std::endl;
std::cout<<"b : "<<b<<std::endl;
std::cout<<"c : "<<c<<std::endl;
std::cout<<std::endl;
std::cout<<"double values (scientific) :"<<std::endl;
std::cout<<std::scientific;
std::cout<<"a : "<<a<<std::endl;
std::cout<<"b : "<<b<<std::endl;
std::cout<<"c : "<<c<<std::endl;
std::cout<<std::endl;
std::cout<<"double values (back to defaults) :"<<std::endl;
std::cout.unsetf(std::ios::scientific|std::ios::fixed);
std::cout<<"a : "<<a<<std::endl;
std::cout<<"b : "<<b<<std::endl;
std::cout<<"c : "<<c<<std::endl;
std::cout<<std::endl;



//=======================================================================
//this will explore set precision. std::setprecision(): the number of digits for a floating point number. Default is 6.
//=======================================================================



std::cout<<"\n";
std::cout<<"a (default precion : 6) : "<<a<<"\n";
std::cout<<std::setprecision(10);
std::cout<<"a (precision : 10) : "<<a<<"\n";
std::cout<<std::setprecision(20);
std::cout<<"a (precision : 20) : "<<a<<"\n";

//=======================================================================
//this will uswe showpoint or noshowpoint: show training zerps and Force output of the decimal point.
//=======================================================================
double d{34.1};
double e{101.99};
double f{12.0};
int g{45};

std::cout<<"\n";
std::cout<<"noshowpoint (default) : "<<std::endl;
std::cout<<"d : "<<d<<std::endl;
std::cout<<"e : "<<e<<std::endl;
std::cout<<"f : "<<f<<std::endl;
std::cout<<"g : "<<g<<std::endl;
std::cout<<std::showpoint;
std::cout<<"showpoint : "<<std::endl;
std::cout<<"d : "<<d<<std::endl;
std::cout<<"e : "<<e<<std::endl;
std::cout<<"f : "<<f<<std::endl;
std::cout<<"g : "<<g<<std::endl;

}