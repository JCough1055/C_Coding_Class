module;
#include <string>
#include <fmt/format.h>

export module string_literals;

namespace string_literals{

export void escape_sequences(){

for( size_t i{0};i<10;++i){
    fmt::print("Hello \n");
}
fmt::println("He said, \"Get out of here immediately\"");

std::string todo_list{"\tClean the house\n\tWalk the dog\n\tDo the laundrt\n\tPick up grocieries"};
std::string windows_path{"D:\\sandbox\\trstProject\\hello.txt"};
std::string linux_path{"/home/username/files/hello.txt"};
std::string hint{"\"\\\\\"escapes a backslash character like\\."};

fmt::println("to do list :");
fmt::println("{}",todo_list);
fmt::println("windows path : {}",windows_path);
fmt::println("linux path : {}",linux_path);
fmt::println("hint : {}",hint);
}
export void raw_string_literals(){
/*std::string to_do_list{R"(
Clean the House
Walk the dog
Do Laundry
Pick up groceries)"};
fmt::println("to_do_lsit : ");
fmt::println("{}", to_do_list);
*/
/*
const char * c_string{R"(
        Clean the House
        Walk the dog
        Do Laundry
        Pick up groceries)"};
fmt::println("to_do_lsit : ");
fmt::println("{}", c_string);
*/
/*
std::string windows_path1{R"(D:\\sandbox\\trstProject\\hello.txt)"};
std::string linux_path1{R"(/home/username/files/hello.txt)"};
std::string hint1{R"("\" escapes a backslash character like\.)"};


fmt::println("windows path1 : {}",windows_path1);
fmt::println("linux path1 : {}",linux_path1);
fmt::println("hint1 : {}",hint1);
*/

std::string pro_literals{R"--(THis is a way to uses "( to get around compiler errors)" with string literals using quotes and parenthesees)--"};
fmt::println("This is : {}", pro_literals);
}

}
