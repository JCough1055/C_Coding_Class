module;

#include <fmt/format.h>
#include <climits>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <random>
#include <vector>

export module utilities; 

export void fortune_teller_good(){
 
    std::vector<std::string> predictions { 
            "You will live long and prosper!!!! ",
            "A scratch off may provide unforseen luck!!!",
            "When in bed stay there , if not get there!!",
            "You are running away from something really scary. Stop and face it. It may be nothing at all!!!",
            "A chance encounter may be bring a new outlook on life!!",
            "One bird in the hand, is worth two in the bush!!",
            "When you hit a fork in the road, take it!!",
            "If you are really hungery and are ordering pizza, ask the cook to cut it in more slices!!!",
            "Never pick up a lucky rasbbits foot off the side of the road!!",
            "You cant change the past, you cant tell the future, LIVE in the moment.!!!",
            "Dont worry, BE HAPPY!!",
            "When you are buying booze at a liquor store and you think you have enough, double it!"
    };

    //Use the marsenne twister to generate a random number and store that in a variable named index.
    std::random_device rd;  // Provides seeds with less predictability
    std::mt19937 gen{ rd() };  // Initialize our marsenne twister with a random seed
    const int size(predictions.size()-1); // The distribution expects constant expressions in it's initializer.
    std::uniform_int_distribution distr{ 0, size };  // We want uniform distribution.
    auto index = distr(gen);

    bool end{false};
   std::string name;
   // std::getline(std::cin,name);
    fmt::println("Welcome to our fortune teller {} . ",name);
    
    while (!end)
    {

    size_t rand_num= distr(gen);

    fmt::println("Your fortune is: {}",predictions[rand_num]);

    fmt::println("Do you want me to try again?. Type in Y for Yes and N for no");
   
    char go_on;
    std::cin>> go_on;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    end =!(go_on =='Y' || go_on == 'y');
}

fmt::println("Thats it for today. Thank you for letting me predict your fortune!!");


}

export void cogs_casino_craps(){

    std::random_device rd;  // Provides seeds with less predictability
    std::mt19937 gen{ rd() };  // Initialize our marsenne twister with a random seed
    //const int size(predictions.size()-1); // The distribution expects constant expressions in it's initializer.
    std::uniform_int_distribution die1{ 1, 6 };  // We want uniform distribution.
    std::uniform_int_distribution die2{ 1, 6 };  
    
    bool end{false};
char playAgain;
int point{};
   
do {
    size_t roll_die1= die1(gen);
    size_t roll_die2= die2(gen);
    int enter;
    fmt::println("Die one is {} and die 2 is {} .",roll_die1,roll_die2);
    auto total=roll_die1+roll_die2;
    fmt::println("Your total roll is {}",total);

    if((total)== 7||(total)==11){
    fmt::println("you Win!!!");

    
    }
    else 
    if((total)== 2||(total)==3||(total)==12){
    fmt::println("Craps!!!! You lose");
    fmt::println("Do you want me to try again?. Type in Y for Yes and N for no");
        break;
   }
   else {  point =total;
        fmt::println("Point is set to {}.Rolling until you match or roll a 7 and crap out...\n", point);}
    
            do {
                roll_die1 = die1(gen);
                roll_die2= die2(gen);
                total= roll_die1+roll_die2;
                fmt::println("Your total roll is {}" , total);
              
               

                  if (total == point) {
                    std::cout << "You win!\n";
                  

                    break;
                } else if (total == 7) {
                    std::cout << "You lose!\n";
                    break;
                }
                    std::cout << "Press Enter to continue...\n";
                  std::cin.get();  // Waits for the user to press Enter
                  fmt::println("Here comes the roll!!!...");
            } while (true);
            
            fmt::println( "Play again? (y/n): \n");
            std::cin >> playAgain;
    } 
    

        while (playAgain == 'y' || playAgain == 'Y');

     fmt::println("Thanks for playing Cogs Casino Craps. Hope to see you soon!");

}

export void cogs_casino_roulette(){

       std::vector<int> numbers { 00,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32
        
    };

    std::random_device rd;  // Provides seeds with less predictability
    std::mt19937 gen{ rd() };  // Initialize our marsenne twister with a random seed
    const int size(numbers.size()-1);//const int size(predictions.size()-1); // The distribution expects constant expressions in it's initializer.
       std::uniform_int_distribution number_player{ 0, size };  // We want uniform distribution.
     std::uniform_int_distribution number_dealer{ 0, size };  // We want uniform distribution.
    


    bool end{false};
char playAgain;
int point{};
  

/*
   else {  point =total;
        fmt::println("Point is set to {}.Rolling until you match or roll a 7...\n", point);}
    
            do {
                roll_die1 = die1(gen);
                roll_die2= die2(gen);
                total= roll_die1+roll_die2;
                fmt::println("Your total roll is {}" , total);
                if (total == point) {
                    std::cout << "You win!\n";
                    break;
                } else if (total == 7) {
                    std::cout << "You lose!\n";
                    break;
                }
            } while (true);
            
        std::cout << "Play again? (y/n): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
*/
  while (!end)
    {       
        int roll_number{0};
        size_t roll_dealer= number_dealer (gen);
    fmt::println("Please enter your numbers from 0,00,1 to 36");
    std::cin>>roll_number;
        fmt::println("You number is {} .",roll_number);
       std::cout << "Hit D and then enter to see dealers number: ";
       std::cin >>playAgain;
    fmt::println("The dealer rolled a  {}",roll_dealer);
    if(roll_number == roll_dealer){
    fmt::println("You Win!!! 36-1!!! Let it Ride");
    fmt::println("Do you want me to try again?. Type in Y for Yes and N for no");}
    else 
    if(!(roll_number == roll_dealer)){
    fmt::println("Too bad!!!! You lose");
    fmt::println("Do you want me to try again?. Type in Y for Yes and N for no");
   }
    
   
    char go_on;
    std::cin>> go_on;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

    end =!(go_on =='Y' || go_on == 'y');
}


     fmt::println("Thanks for playing Cogs Casino Roullette. Hope to see you soon!");

}