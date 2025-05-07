module;
#include <fmt/format.h>
#include <vector>
export module utilities; 

export void for_loops(){
    //THis is the hard way to do repetitive tasks
/*
fmt::println("I love C++23!!!");
fmt::println("I love C++23!!!");
fmt::println("I love C++23!!!");
fmt::println("I love C++23!!!");
fmt::println("I love C++23!!!");
fmt::println("I love C++23!!!");
fmt::println("I love C++23!!!");
fmt::println("I love C++23!!!");
fmt::println("I love C++23!!!");
fmt::println("I love C++23!!!");
*/
//Use this "for" loop to make things easier.
/*  for(unsigned int i{0};i<10;++i){
        fmt::println("Loop:{} -I love C++23!!!",i);
    }
    fmt::println("The Loop is finished!!");
    for(size_t i{0};i<10;++i){
        fmt::println("Loop {}",i);
    }

    
    fmt::println("The Loop is finished!!");
    //fmt::println("The value of i is: {}",i); this wont work because i lives outside the for loop.
    //THis is how you access i. You need to declare it outside the for loop:
    
    size_t i{0};
    for(i;i<10;++i){
        fmt::println("Loop {}",i);
    }
    fmt::println("The Loop is finished!!");
    fmt::println("The value of i is: {}",i);
    */

    //You shouldnt hardcode any numbers that you could use variable. It makes it easier to change the code later.
/*
    constexpr size_t COUNT{100};

    for(size_t i{0};i<COUNT;++i){
        fmt::println("Loop {}",i);
    }
    fmt::println("The Loop is finished!!");
    */
   /*
    std::vector<int> values{1,2,3,4,5,6,7,8,9,10};
    for(size_t i{0};i<values.size();++i){
        fmt::println("Loop {}",values[i]);
    }
    auto result=values[8];
    fmt::println("The value of result is: {}",result);
    fmt::println("The Loop is finished!!");
//This is the same as the previous loop, but using a range-based for loop.
    for (int value : values) {
        fmt::println("Loop {}", value);
    }
    fmt::println("The Loop is finished!!");
   */  
  for (auto value:{1,2,3,4,5,6,7,8,9,10}){
    fmt::println("value : {} ",value);
    }

}
export void while_loops(){
 //While Loops
/*
size_t i{0};
constexpr int count{10};

while(i<count)
{fmt::println("This is the {} iteration of this loops",i+1);++i;}//IMPORTANT: Dont forget the iterator. If you dont have htis iterator, the loop will be infinite.
fmt::println("The loop is finished!!");
*/

//Do-While Loops

constexpr int count{10};
size_t i{0};

do{
    fmt::println("{} I love C++", i);
    ++i;
    }while (i<count);
    fmt::println("The loop is finished!!");
 
}
export void infinite_loops(){

  //Infinite Loops
//Infinite Loop: For Loop
/*
for(size_t i{};true;++i){
    fmt::println("this code is groundhog day {}",i);
}
*/
//infinte loop: while loop
/*
size_t i{};
while(true){
    fmt::println("this code is groundhog day {}",i);
    ++i;
    
}
    */
//infinte loop: do while loop
size_t i{0};
do { 
    fmt::println("this code is groundhog day {}",i);++i;
    if( i==1000){
       break;} //This is a way to kill infinite loops Add an if statement to break the loop.
}
while(true); 
fmt::println("The infinite loop is finished because we put a break at 1000 with an if statement!!");  
}

export void decrementing_loops(){

  //Decrementing Loops

constexpr size_t count{10};

for (size_t i{count};i>0;--i){
    fmt::println("This is the final countdown :::{} ",i);
}
fmt::println("ZERO!!KABOOOM!!!");

//Printing a vector
std::vector<int> numbers{1,77,3,4,5,6,23,8,66,10,11,12};
for (size_t i{numbers.size()};i>0;--i){
    fmt::println("This is vector count: {} and the number: {} ",i-1,numbers[i-1]);
}  
}

export void break_continue(){
/*
constexpr size_t COUNT{20};
for(size_t i{0};i<COUNT;++i){
    if (i==5)
    continue; //skips only the 5th iteration
    if (i==13)
    break; //breaks the loop
    fmt::print("i: {}\n", i);}


fmt::print("For Loop finished\n");
*/
/*
//Same function as the for loop with the while loop with break and continue
size_t i{0};
while (i<20){
    if (i==5){
        ++i;
        continue;

    }
    if (i==11)
    break;

    fmt::println("i: {}", i);
    ++i;
}
fmt::print("While Loop finished\n");
*/

//Same function as the for loop wand  the while loop , no with the do-while with break and continue

size_t i{0};
do{
    if (i==5){
        ++i;
        continue;

    }
    if (i==11)
    break;

    fmt::println("i: {}", i);
    ++i;
}while (i<20);
fmt::print("Do-While Loop finished\n");


}

export void end_of_loop_test(){
    std::vector<int> numbers {1,2,3,4,6,8,14,66,55,77,88,161,99,100};
    for (size_t  i{0} ;i<numbers.size();++i){
    if (numbers[i]%2==0)
        fmt::println("Loop {} is an even number. It is {}",i,numbers[i]);
    }
        
    for (size_t  i{0} ;i<numbers.size();++i){
        if (numbers[i]%7==0)
            fmt::println("The value divisible by 7 is {}",numbers[i]);
        }

    }