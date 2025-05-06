module;

#include <fmt/format.h>

export module utilities; 
//Tools
constexpr int Pen{10};
constexpr int Marker{20};
constexpr int Eraser{30};
constexpr int Rectangle{40};
constexpr int Circle{50};
constexpr int Ellipse{60};
//Colors
constexpr int Red{70};
constexpr int Green{80};
constexpr int Blue{90};
//Functions
bool car()
{
    fmt::println("car function is runnning");
    return false;
}
bool house(){
    fmt::println("house function is runnning");
    return true;

}
bool job(){
    fmt::println("job function is runnning");
    return false;
}
bool spouse(){
    fmt::println("spouse function is runnning");
    return false;
}

void handle_color(int color){
    switch(color){
        case Red:
            fmt::println("Red color");
            break;
        case Green:
            fmt::println("Green color");
            break;
        case Blue:
            fmt::println("Blue color");
            break;
        default:
            //we expect all cases to be handled
            std::unreachable();
    }
}
export void if_statements(){
 //If Statements



//if (result==true) this is the older way to evaluate if result is true. New way is below.
/*if (result){
    fmt::print ("Value1 is : {} . Value2 is {}. Value1 is greater than value 2"  ,value1,value2);
}
else{
    fmt::print ("Value1 is : {} . Value2 is {}. Value2 is greater than value 1"  ,value1,value2);  
}
*/
/*
int value1{75};
int value2{10};
bool result= {value1>value2};
if (value1 > value2){
    fmt::print ("Value1 is : {} . Value2 is {}. Value1 is greater than value 2"  ,value1,value2);
}
    else{
        fmt::print ("Value1 is : {} . Value2 is {}. Value2 is greater than value 1"  ,value1,value2);  
    }
   
   if (!result){
    fmt::println ("Value1 is : {} . Value2 is {}. Value2 is greater than value 1"  ,value1,value2);
}
else{
     
    fmt::println ("Value1 is : {} . Value2 is {}. Value1 is greater than value 2"  ,value1,value2); 
}
     */
/*
fmt::println("This is nested if statements:");

bool red{false};
bool green{true};
bool yellow{false};
bool police_stop{true};
fmt::println("This is nested if statements:");
if (red){
    fmt::println("stop");
}
if (yellow){
    fmt::println("slow down");
}
if (green){
    fmt::println("Go");
}
if (green){
if (police_stop){
    fmt::println("stop");
}
else{
    fmt::println("go");
}
}

fmt::println("Police officer stops(more verbose code)");
if(green&&!police_stop){
    fmt::println("Go");
    }
    else
    {fmt::println("Stop");}
    */
   /*

   //Else if

   //If with inializer
   bool go {true};

   if (int speed{10};go) {
    fmt::println("speed : {}", speed);

    if (speed>5){
        fmt::println("Slow Down!!!");
     } 
     else{
    fmt::println("All Good! Proceed!");
            }
    }
   
   else {
    fmt::println("Speed: {}", speed);
    fmt::println("STOP");  
}
    */
    
    int tool{Circle};

    if (tool == Pen) {
        fmt::println("Active tool is Pen");
    } else if (tool == Marker) {
        fmt::println("Active tool is Marker");
    } else if (tool == Eraser) {
        fmt::println("Active tool is Eraser");
    } else if (tool == Rectangle) {
        fmt::println("Active tool is Rectangle");
    } else if (tool == Circle) {
        fmt::println("Active tool is Circle");
    } else if (tool == Ellipse) {
        fmt::println("Active tool is Ellipse");
    } else {
        fmt::println("Active tool is Unknown tool");
    }
    //Ternary operator   
}
export void switch_statement(){

     //Switch statements
int tool{Pen};

switch (double strength{3.56};tool)
{
case Pen:{
    fmt::println(" Active Tool is Pen. The strength is : {}", strength);
}  break;
case Marker:{
    fmt::println(" Active Tool is Marker");
}  break;
case Eraser:
{
    fmt::println(" Active Tool is Eraser");
}  break;

case Rectangle:
case Circle:
case Ellipse:{
    fmt::println(" Drawing Shapes");
}  break;
default:{fmt::println("Unknown tool");
} break;
}   
}

export void short_circuit_evaluations(){
 
    //SHort circuit evaluations
    bool a{false};
    bool b{true};
    bool c{true};
    bool d{true};
    bool p {false};
    bool q{false};
    bool r{false};
    bool m {true};

fmt::println("AND short circuit: ");//If the compiler finds any false value in the AND short circuit, it will not evaluate the rest of the expression.
// The result of AND short circuit is false
bool result= a&&b&&c&&d;
fmt::println("The result of AND short circuit is {}", result);
// The result of AND short circuit is true . If the compiler finds any true value in the OR short circuit, it will not evaluate the rest of the expression.
fmt::println("OR short circuit: ");
result= p||q||r||m;
fmt::println("The result of OR short circuit is {}", result);
//How to make me happy
if (car() && house() && job() && spouse()){
    fmt::println("AND-I am happy");
}
else{
    fmt::println("AND-I am not happy");
}
if (car() || house() || job() || spouse()){
    fmt::println("OR--I am happy");
}
else{
    fmt::println("OR--I am not happy");
}

}


export void ternary_operator(){
    int max{};
    int a {235};
    int b{200};
    //Evaluating if a >b and assigning the value to max
    //if a is greater than b, assign a to max, else assign b to max
    if(a>b){max=a;}
    else{max=b;}
    fmt::println("max : {}",max);
//same result using ternary operator
    max=a>b?a:b;
    fmt::println("max : {}",max);
}

export void std_unreachable(){
    handle_color(Red);
    handle_color(Green);
    handle_color(Blue);
}