/*
    . std::vector
        .Compare the std::array vs std::vector
        . Go through the std::vector functions
*/

#include <fmt/format.h>
#include <vector>
#include <iostream>
import utilities;

int main(){

    //create a vector of floating point numbers
std::vector <float> num{23.4,44.756,12.3,45.6,78.9,90.1,22.5};

//print the vector size
//print the vector elements
//calculate the sum of the vector elements
//calculate the average of the vector elements
fmt::println("Vector size is: {}", num.size());
for(size_t i{0};i<num.size();i++){
    fmt::println("Vector element [{}]  is: {}", i,num[i]);
}
float sum{0};
float avg{0};
for(size_t i{0};i<num.size();i++){
   sum= (sum +num[i]);
 
}
fmt::println("Sum of vector elements is: {}", sum);
avg= (sum/num.size());
fmt::println("Average of vector elements is: {}", avg);
//create a vector of integers
std::vector<int> vec{1,2,3,4,5};

//print the vector elements 
for(size_t i{0};i<vec.size();i++){
    fmt::println("Vector element [{}]  is: {}", i,vec[i]); }
 //print the vector elements using range-based for loop   
    for(const auto& element: vec){
        fmt::print(" {} ",element);
    }
fmt::print("\n");
fmt::println("First Element : {} ",vec.front());
fmt::println("Last Element : {} ",vec.back());
//replace the vector elements with 7 using the std::fill command
std::fill(vec.begin(),vec.end(),7);
  for(size_t i{0};i<vec.size();i++){
    fmt::println("Vector element [{}]  is: {}", i,vec[i]); 
}


//create a vector of integers with 5 elements.it will be initialized with 0.
    std::vector <int> vec2(5);
   
    //print the vector elements using range-based for loop
     for(const auto& element: vec2){
        fmt::print(" {} ",element);
    }
fmt::print("\n");
//create a multi-dimensional vector
    //create a vector of vectors
    //create a 2D vector with 4 rows and 2 columns
    //initialize the vector with values
std::vector<std::vector<int>> vec3={{1,2},{3,4},{5,6},{7,8}};
//print the vector elements using range-based for loop
for(const auto& row: vec3){
      for(const auto& element:row)
       { fmt::print(" {} ",element);}
       fmt::print("\n");
    }
   //Comparing vectors
   
    std::vector<int> vec4{1,2,3};
    std::vector<int> vec5{1,2,3};
    std::vector<int> vec6{1,2,4};
    std::vector<int> vec7{0,2,3};

    if (vec4==vec5){
        fmt::println("vec4 is equal to vec5");
    }
    else{
        fmt::println("vec4 is not equal to vec5");  
    }
    if (vec4 != vec6){
        fmt::println("vec4 is not equal to vec6");
    }
    else{
        fmt::println("vec4 is equal to vec6");  
    }
   if (vec4<vec6){
        fmt::println("vec4 is less than vec6");
    }
    else{
        fmt::println("vec4 is not less than vec6");  
    }
    if (vec4<=vec5){
        fmt::println("vec4 is less than or equal to vec5");
    }
    else{
        fmt::println("vec4 is not less than or equal to vec5");  
    }
 
if(vec6>vec7){
    fmt::println("vec6 is greater than vec7");}
else{
    fmt::println("vec6 is not greater  vec7");
}
//Comparing arrays if they are greater than or equal to
if(vec6>=vec4){
    fmt::println("vec6 is greater than or equal to vec4");}
else{
    fmt::println("vec6is not greater than or equal to vec4");
}

//Assigning one array to another
std::vector<int> vec8{1, 2, 3,4,5};
std::vector<int> vec9{6, 7, 8,9,10};
//Printing original arrays
  fmt::println("Original vec8:");
  for(const auto& element: vec8){
    fmt::println("{}", element);
  }
  fmt::println("Original vec9:");
  for(const auto& element: vec9){
    fmt::println("{}", element);
  }
  //Assigning arr2 to arr1
  vec8 = vec9;
  //Printing after assignment
  fmt::println("vec8 after assignment:");
  for(const auto& element: vec8){
    fmt::println("{}", element);
  }
  fmt::println("vec9 after assignment:");
  for(const auto& element: vec9){
    fmt::println("{}", element);
  }
   std::vector<int> numbers= {12,2,3,2,4,5,6,1};
int min_value{numbers.at(0)};
    int max_value{numbers.at(0)};
   if (numbers.size()==0){
        std::cout<<"Error. Please fill the vector"<<"\n";
    }
    else{
      for (size_t i{0};i<numbers.size();++i)
    {if (numbers[i]<min_value)
    min_value=numbers[i];
    if (numbers[i]>max_value)
    max_value=numbers[i];}}

       std::vector<int> vec10= {1,2,3,4,5};
    int value{10};
    int index{3};
    
    if (index>=vec10.size()){
        std::cout<<"Error. Index cannot be greater than the vector size"<<"\n";
    }
else{
vec10.push_back(0);
vec10.insert(vec10.begin() + index, value);
 vec10.pop_back();  }

    return 0;
}