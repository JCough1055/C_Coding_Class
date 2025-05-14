module;
#include <fmt/format.h>
#include <string>
export module utilities; 

export void declare_and_initialize(){
std::string str {"Hello World"};
fmt::println("String 1 is : {}",str);

}

export void construction(){
//Using Constructors
//creating a std::string using various constructors
std::string str1{"The   Yankees are the best!!!}"}; //Default Constructor
std::string str2(str1);// Copy Constructor
std::string str3(str1,7,5);//Substring constructor :satrt at index 7, length 5
std::string str4(10, 'A'); //Fill Constructor : 10 characters of 'A'
fmt::println("str2: {}", str2);
fmt::println("str3: {}", str3);
fmt::println("str4: {}", str4);
    
}
export void access_and_modify(){
//Acessing Characters
//Accessing individual characters using the [] operator and the at() function
std::string str1{"The Yankees are the best!!"};
fmt::println("The string is : {}", str1);
fmt::println("First character of str1: {}", str1[0]);
fmt::println("Second character of str1: {}", str1.at(1));
//Modifying String
//Modifying individual characters using the [] operator and the at() function
str1[0]='t';
str1.at(4)='y';
fmt::println("The modified string is : {}", str1);

}
export void append_and_concatenate(){

    //Appending and Concatenating
//Appending to a string using the append() function and operator+=
std::string str1{"The Yankees are the best!!!"};
fmt::println("String 1 is : {}", str1);
str1+="And they are going to the world series!!";
std::string str2{str1};
fmt::println("The modified string is : {}", str1);
str2.append("...And they are going to win!!");
fmt::println("The modified string is : {}", str2);

//Concatenating two strings using the + operator
std::string str3{"The Yankees are the best!!!"};
std::string str4{"And they are going to the world series!!"};
std::string str5{str3 + str4 + "and there will be a parade in the Canyon of CHampions"};
fmt::println("The concatenated string is : {}", str5);
}

export void substrings_and_findings(){
  //Substrings
//Extracting a substring using substr()

std::string str1{"The Yankees rock!!"};
std::string subStr=str1.substr(4, 7); //Extracting a substring starting at index 4 with length 6
fmt::println("The substring is : {}", subStr);

//Finding Substrings
//Finding a substring within a string using find()
size_t pos=str1.find("Yankees");
if (pos!= std::string::npos){
    fmt::println("'Yankees' found at position : {}",pos);
}else{
    fmt::println("'Yankees' not found in the string");}  
}

export void comparison(){
//Comparisons
//Comparing 2 strings using compare()

std::string str1{"Hello"};
std::string str2{"Hello"};
if(str1.compare(str2)==0){
    fmt::println("Both strings are equal"); 
}else
{
    fmt::println("Both strings are not equal");
}

std::string str3{"Hello"};
std::string str4{"Hello"};
if(str3.compare(str4)>0){
    fmt::println("Str3 is greater than str4"); 
}else 
{
    fmt::println("Str3 is less than str4");
}

}
export void inserting_and_erasing(){
//Inserting and erasing
//Inserting a substring

std::string str1{"Hello World"};
fmt::println("The original string is : {}", str1);
str1.insert(5, " Beautiful");
fmt::println("The modified string is : {}", str1);

str1.erase(5,11); //Erase 11 characters starting from index5
fmt::println("The modified string is : {}", str1);    
}

export void length_capacity_clear(){
std::string str1{"The Yankees are the best!!!"};
fmt::println("The original string is : {}", str1);
fmt::println("The length of the string is : {}", str1.length());
fmt::println("The size of the string is : {}", str1.size());
fmt::println("The capacity of the string is : {}", str1.capacity());
fmt::println("The max size of the string is : {}", str1.max_size());
fmt::println("The string is empty : {}", str1.empty());

//Iterating over a string
//Using range-based for loop to iterate over a string
fmt::println("Iterating over the string using range-based for loop:");
for(const auto& ch :str1)
{
    fmt::print("{}", ch);
}
fmt::print("\n");


//Clearing a string
//Clearing a string using clear() function
str1.clear();
fmt::println("The string after clearing is : {}", str1);
fmt::println("The string length after clearing is : {}", str1.length());

fmt::println("The string is empty : {}", str1.empty());    
}