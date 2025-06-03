/*
    . Topic Random Number Generation
        . Generating random numbers using a seed timer (C++17)
        . Generating random numbers the modern way with different libraries for generating numbers
*/

#include <fmt/format.h>
#include <climits>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include<random>
#include <string>
import utilities;

int main(){

//THis is a program that enables 3 games based on user selection and utilizes the random number generator.
std::string name{};
int game{0};
fmt::println("Welcolme!! What's your name?");
std::getline(std::cin,name);
fmt::println("{} , ..... Welcome to Cogs Casino!!!",name);
fmt::println("Would you like to play a game. We have three now. Fotune telling, Craps and Roulette. Press 1 for craps. Press 2 for Roulette. Press 3 for Fortune Telling");
std::cin>>game;
if(game==1){
cogs_casino_craps();
}
else if(game==2){
cogs_casino_roulette();}
else if (game==3){
fortune_teller_good();
}
else{
    fmt::print("please enter a 1 for craps or a 2 for Roulette or a 3 for Fortune Telling!");
}
    return 0;
}
