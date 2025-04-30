/*
    . Project description
        . Topic #1
        . Topic #2
*/

#include <fmt/format.h>
#include <format> 
#include <iostream>
#include <print>
#include <chrono>
#include <fmt/chrono.h>




import utilities;

int main(){

   auto DT_now = std::chrono::system_clock::now();
    std::cout << fmt::format("Current date and time: {:%Y-%m-%d %H:%M:%S}\n", DT_now);
    std::cout<<fmt::format("Current date: {:%D}",DT_now);
    fmt::println(" ");
    std::cout<<fmt::format("Current time with UTC offset: {:%z%r}",DT_now);
    fmt::println(" ");
    std::cout<<fmt::format("Current UTC time is: {:%r}",DT_now);
    fmt::println(" ");


    // Get current time from system clock
    auto now = std::chrono::system_clock::now();

    // Convert to time_t format
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);

    // Convert to local time (EST/EDT based on system settings)
    std::tm *localTime = std::localtime(&currentTime);

    // Format the time using fmt
    fmt::print("Current EST/EDT time: {:02}:{:02}:{:02} {}\n", 
               localTime->tm_hour, localTime->tm_min, localTime->tm_sec, 
               std::asctime(localTime));

 // standard_format_facilities();
    //external_format_facilities();
    return 0;
}