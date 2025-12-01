module;
#include <fmt/format.h>
export module utilities; 

export void process_arguments(int argc,char* argv[]){
   fmt::println("Number of arguments: {}",argc);
    for (size_t i{0};i<argc;++i){

        fmt::println("number of argumnets[{}]: {}", i,argv[i]);
    }

}

export void calculator(int argc,char* argv[]){
    //Check number of arguments
    if (argc != 4) {
        fmt::println("Program can only be called with 3 argumnets like: ");
        fmt::println("Rocket a+b");
        fmt::println("You called with : ");
        for (int i{0};i<argc;++i){
            fmt::println("{}", argv[i]);

        }
        return;
    }

    //Grab the operands
    double firs_number{atof(argv[1])};
    double second_number{atof(argv[3])};

    if((firs_number==0.0)||(second_number==0.0)){

        fmt::println("You need to provide two valid numbers that are not 0");
        return;
    }

    const char*operation{argv[2]};
char c;

if ((std::strlen(operation)==1)
&&(         (operation[0] == '+')
       ||   (operation[0] == '-')
        ||  (operation[0] == '*')
        ||  (operation[0] == '/'))
    ){
    c = operation[0];
    } else {
        fmt::println("{} is not a valid operation. Please use +,-,* or /! Thank you!",operation);
        return;
    }

    //Do the operation
    switch (c) {
        case '+':
            fmt::println("{} + {} = {}",firs_number,second_number,firs_number+second_number);
            break;
        case '-':
            fmt::println("{} - {} = {}",firs_number,second_number,firs_number-second_number);
            break;
        case '*':
            fmt::println("{} * {} = {}",firs_number,second_number,firs_number*second_number);
            break;
        case '/':
            if (second_number == 0.0) {
                fmt::println("You can not divide by 0!");
                return;
            }
            fmt::println("{} / {} = {}",firs_number,second_number,firs_number/second_number);
            break;
        default:
            fmt::println("Unknown error has occurred!");
            break;
    }
}