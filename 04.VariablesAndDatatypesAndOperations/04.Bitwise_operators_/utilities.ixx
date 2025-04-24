module;
#include <fmt/format.h>
export module utilities; 

export void print_ints_binary(){
   //Printing integers in binary
    unsigned short int data{15};
    
    fmt::println("The value of data as a decimal is: {0:d}", data);     //decimal
    fmt::println("The value of data as a binary is: {0:b}", data);      //binary
    fmt::println("The value of data as a hexadecimal is: {0:x}", data); //hexadecimal
    fmt::println("The value of data as a binary is: {:016b}", data);    //binary with leading zeros
    fmt::println("The value of data as a octal is: {0:o}", data);   //octal

}

export void bitwise_shift(){
 //print_ints_binary();

 unsigned short int value{0xff0u};


 fmt::println("Size of short int {0}", sizeof(short int));
 fmt::println("(0)bin value : {:016b}, decimal value {}", value,value);

 //Shift left by one bit
 value=static_cast<unsigned short int>(value<<1);
 fmt::println("(1)bin value : {:016b}, decimal value {}", value,value);
 //Shift left by one bit
 value=static_cast<unsigned short int>(value<<1);
 fmt::println("(2)bin value : {:016b}, decimal value {}", value,value);
 //Shift left by one bit
 value=static_cast<unsigned short int>(value<<1);
 fmt::println("(3)bin value : {:016b}, decimal value {}", value,value);
 //Shift left by one bit
 value=static_cast<unsigned short int>(value<<1);
 fmt::println("(4)bin value : {:016b}, decimal value {}", value,value);
 //Shift left by one bit
 value=static_cast<unsigned short int>(value<<1);
 fmt::println("(5)bin value : {:016b}, decimal value {}", value,value);
 //Shift right by one bit
 value=static_cast<unsigned short int>(value>>1);
 fmt::println("(6)bin value : {:016b}, decimal value {}", value,value);
 //Shift right by four bits
 value=static_cast<unsigned short int>(value>>4);
 fmt::println("(7)bin value : {:016b}, decimal value {}", value,value);

}

export void logical_bitwise_operators(){
//Logical Bitwise operators
unsigned int value1 {0x3};
unsigned int value2 {0x5};

fmt::println("value1: {:032b}", value1);
fmt::println("value2: {:032b}", value2);

//Bitwise AND operator
fmt::println("Bitwise AND");
fmt::println("Value 1 AND value 2 is {:032b} ",(value1&value2));

//Bitwose OR operator
fmt::println("Bitwise OR");
fmt::println("Value 1 OR value 2 is {:032b} ",(value1|value2));
//Bitwise XOR operator
fmt::println("Bitwise XOR");
fmt::println("Value 1 XOR value 2 is {:032b} ",(value1^value2));
//Bitwise NOT operator
fmt::println("Bitwise NOT");
fmt::println("Value 1 NOT is {:032b} ",(~value1));
fmt::println("Value 2 NOT is {:032b} ",(~value2));

}

export void compound_bitwise_operators(){
//Compound Bitwise Operators

unsigned int sandbox_var{0b00110100};
//Print out initial value
fmt::println("Intiial value : ");
fmt::println("Value : {:032b}",sandbox_var);

//Compound left shift
fmt::println("Shift left 2 bit positions in place:");
sandbox_var <<=2;
fmt::println("Value : {:032b}",sandbox_var);

//Compound right shift
fmt::println("Shift right 4 bit positions in place:");
sandbox_var >>=4;
fmt::println("Value : {:032b}",sandbox_var);
//Compound OR
fmt::println("Compound OR with 00000010: ");
sandbox_var |=0b00001111;
fmt::println("Value : {:032b}",sandbox_var);

//Compound AND
fmt::println("Compound AND with 000001100: ");
sandbox_var &=0b00001100;
fmt::println("Value : {:032b}",sandbox_var);

//Compound XOR
fmt::println("Compound XOR with 000000011: ");
sandbox_var ^=0b00000011;
fmt::println("Value : {:032b}",sandbox_var);
}

export void masks(){
//working with masks

unsigned int mask_bit_0{0b00000001};//mask for bit 0
unsigned int mask_bit_1{0b00000010};//mask for bit 1
unsigned int mask_bit_2{0b00000100};//mask for bit 2
unsigned int mask_bit_3{0b00001000};//mask for bit 3
unsigned int mask_bit_4{0b00010000};//mask for bit 4
unsigned int mask_bit_5{0b00100000};//mask for bit 5
unsigned int mask_bit_6{0b01000000};//mask for bit 6
unsigned int mask_bit_7{0b10000000};//mask for bit 7

unsigned int var{0b00000000};
fmt::println("var: {:032b}", var);
//Setting bit 0 to 1
var=var | mask_bit_0;
fmt::println("var: {:032b}", var);
//Clearing bit 0 with the bitwise AND operator ~mask_bit_0

var= var& ~mask_bit_0;
fmt::println("var: {:032b}", var);
//setting bit 1 to 1
var |= mask_bit_1;
fmt::println("var: {:032b}", var);
//clearing bit 1 with the bitwise AND operator ~mask_bit_1
var&= ~mask_bit_1;
fmt::println("var: {:032b}", var);
//setting bit 7 to 1
var=var|mask_bit_7;
fmt::println("var: {:032b}", var);
//clearing bit 7 with the bitwise AND operator ~mask_bit_7
var &= ~mask_bit_7;
fmt::println("var: {:032b}", var);
//setting bit 0,1 and 2  to a 1
var^= mask_bit_0;
var^= mask_bit_1;
var^= mask_bit_2;

fmt::println("var: {:032b}", var);

//clearing bit 0,1 and 2 with the ^ operator

var^= mask_bit_0;
var^= mask_bit_1;
var^= mask_bit_2;
fmt::println("var: {:032b}", var);

//setting all bits to 1

var |=(mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
fmt::println("var: {:032b}", var);
//clearing all bits to 0
var &= ~(mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
fmt::println("var: {:032b}", var);

var |=(mask_bit_0|mask_bit_2|mask_bit_4|mask_bit_6);
fmt::println("var: {:032b}", var);

//checking status of all bits with static cast bool
fmt::println("Checking the status of each bit on or off:");
fmt::println("bit 0 is : {}", static_cast<bool>(var & mask_bit_0));
fmt::println("bit 1 is : {}", static_cast<bool>(var & mask_bit_1));
fmt::println("bit 2 is : {}", static_cast<bool>(var & mask_bit_2));
fmt::println("bit 3 is : {}", static_cast<bool>(var & mask_bit_3));
fmt::println("bit 4 is : {}", static_cast<bool>(var & mask_bit_4));
fmt::println("bit 5 is : {}", static_cast<bool>(var & mask_bit_5));
fmt::println("bit 6 is : {}", static_cast<bool>(var & mask_bit_6));
fmt::println("bit 6 is {}", (var&mask_bit_6)>>6);
fmt::println("bit 7 is : {}", static_cast<bool>(var & mask_bit_7));
fmt::println("bit 7 is {}", (var&mask_bit_7)>>7);

}