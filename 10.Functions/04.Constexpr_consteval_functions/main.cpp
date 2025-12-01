/*
    . Project description
        . Constexper
        . Consteval
*/

#include <fmt/format.h>
#include <array>

constexpr int get_value(int multiplier){

    return 3*multiplier;
}

int main() {
constexpr int result= get_value(4);
    fmt::println("The result is {} ",result);
    return 0;
}