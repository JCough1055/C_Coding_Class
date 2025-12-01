module;

#include <string>
#include <iostream>
#include<fmt/format.h>

export module Domain_Password;

namespace Domain_Password{

export void check_valid_Domain(){
std::string email{};
fmt::println("Enter your email address :");
std::getline(std::cin,email);

if(email.find("@")== email.npos){
    fmt::println("The email address is invalid. Please retype it correctly.");
}else{
    fmt::println("The email is valid and is {} ",email);
    std::string domain= email.substr(email.find("@")+1);
    fmt::println(" The domain name is : {}", domain);
}
    }

export void check_valid_password(){
std::string password{};
bool is_valid= false;
while(is_valid==false){
fmt::print("Enter password.\n ");
fmt::print("It must be at least 8 characters long.\n");
fmt::print("It must contain at least one uppercase letter.\n");
fmt::print("It must contain at least one lowercase letter.\n");
fmt::print("It must contain at least one digit (0-9).\n");
fmt::print("It must contain at least one special character from the set !@#$%^&*.  :");
std::getline(std::cin,password);
auto temppass=password;

if (temppass.size()<8){
 fmt::println("The password is too short. Please make it 8 or more characters");
}else if (password.find_first_of("!@#$%^&*") == std::string::npos) {
 fmt::println("The password must contain at least one special character from the set !@#$%^&*.");
}else if (password.find_first_of("0123456789") == std::string::npos) {
 fmt::println("The password must contain at least one digit (0-9).");
}else if (password.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == std::string::npos) {
 fmt::println("The password must contain at least one uppercase letter.");
}else if (password.find_first_of("abcdefghijklmnopqrstuvwxyz") == std::string::npos) {
 fmt::println("The password must contain at least one lowercase letter.");
}else{
    is_valid=true;
    fmt::println("The password is valid.");
    fmt::println("The password is : {}", temppass);
}
}}
}
