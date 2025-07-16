/*
    . Explore dynamic memory with the shape animator sfml application

        . dm_1: storing the data in std::vector
        . dm_2: storing the data in dynamic arrays using new and delete
        . dm_3:storing the data in dynamic arrays utlilizing smart pointers
*/

#include <fmt/format.h>
import utilities;

int main(){
    //best way to go
//dm_1::app();

//Worst way to go 
//dm_2::app();
//2nd worst way to go
dm_3::app();

    
    return 0;
}