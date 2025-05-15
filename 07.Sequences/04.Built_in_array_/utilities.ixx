module;
#include <fmt/format.h>
export module utilities; 
export void declaration_initialization(){
/*   
constexpr size_t array_size{5};

int scores[array_size];
*/ 
/*
fmt::println("scores[0] is: {} ",scores[0]);
fmt::println("scores[1] is: {}",scores[1]);

for(size_t i{0};i<array_size;++i){
fmt::println("scores[{}] is: {} ",i,scores[i]);

} 

scores[0]=22;
scores[1]=13;
scores[3]=55;
for(size_t i{0};i<array_size;++i){
fmt::println("scores[{}] is: {} ",i,scores[i]);

} 

scores[2]=789;
scores[4]=999;
for(size_t i{0};i<array_size;++i){
fmt::println("scores[{}] is: {} ",i,scores[i]);

} 
*/

/*
for(size_t i{0};i<array_size;++i){
    scores[i]= i*10;
}
for(size_t i{0};i<array_size;++i){
fmt::println("scores[{}] is: {} ",i,scores[i]);
}
*/
/*
//Declare and initialize at the same time
double salaries[5] {12.7,7.5,13.2,8.1,9.3};
for(size_t i{0}; i<5;++i){
    fmt::println("salaries [{}]: {}",i,salaries[i]);

}
//If you dont initialize all the elements , those you leave out will initialize to 0
int families[5] {12,7,5};
for(size_t i{0}; i<5;++i){
    fmt::println("families [{}]: {}",i,families[i]);
    
}

//Omit the size of the arrays at declaration
int class_size[]{10,12,15,11,18,17,23,56};
//Print range based for loop

for(auto value:class_size){
    fmt::println("value: {}",value);
}

//Read Only arrays
const int birds[]{10,12,13,15,17};
//birds[0]=22; error due to const declaration which makes array read only.

*/

int scores[]{2,5,8,2,5,6,9};
int sum{0};

for (int element: scores){
sum+=element;

}
fmt::println("Score sum is:{}",sum );

}

export void size_of_an_array(){
 double scores[]{1,2,5};
int count{std::size(scores)};
fmt::println("size of(scores): {}", sizeof(scores));
fmt::println("size of(scores[0]): {}", sizeof(scores[0]));
fmt::println("count : {}",count);

double count2 {sizeof(scores)/sizeof(scores[0])};
fmt::println("count2 : {}",count2);
   
}

export void array_of_charachters(){
 //Characters in arrays

//char message[5]{'H','e','l','l','o'};

//fmt::println("The message is {}", message); //this throws an error because a null wasnt used in setting up arrray
char message[]{'H','e','l','l','o','\0'};//Good because of null.Best.
//char message[6]{'H','e','l','l','o'}; //BAD
//char message[6]{'H','e','l','l','o',};//good wiill work because null is auto filled but very risky
fmt::println("The message is {}", message); 

int data[5]{1,2,3,4,5};

//fmt::println("the data is {}", data); //this will not print the array data. Only char arrays 
//std::cout<<data<<std::endl;//this will print the address 000000A469CFF988 not the array
fmt::println("This will print out message:");

for( auto c: message){
    fmt::print("{}", c);
}
fmt::print("\n");
message[1]='a';
message[4]='y';

for( auto c: message){
    fmt::print("{}", c);
}
fmt::print("\n");
//If a character array is null terminated, it is know in C++ as a C-String
char message2[] {'G','r','e','e','t','i','n','g','s','\0'};
fmt::println("{}",message2);
fmt::println("Sizeof(message2): {}",sizeof(message2));
//String Literal
char message3[]{"Hello"};
fmt::println("{}",message3);
fmt::println("Sizeof(message2): {}",sizeof(message3));   
}

export void array_bounds(){

 int num[]{1,2,3,4,5,6,7,8,9,10};

 //WARNING: you dont want to do this . We are playing in memory areas not allocated for these functions
//fmt::println("the value of num[12]a: {}",num[12]);

//num[129]=1000;
//fmt::println("num[129]: {}",num[129]);   
}