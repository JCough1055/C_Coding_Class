module;
#include <fmt/format.h>
#include <array>
#include <iostream>
export module utilities; 

// This module contains utility functions for working with arrays
// and multidimensional arrays. It includes functions for printing
// arrays, modifying elements, filling arrays with data, and
// accessing elements using different methods. The functions are
// designed to be easy to use and demonstrate various features of
// C++ arrays and the fmt library for formatted output.
const int ROWS = 3;
const int COLS = 3;
//function to print a 2D array.it is called in the print_array export.

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
export void setup_and_visit(){
std::array<int, 5>arr1{11,3,55,7,8};
float sum{0};

//Print the array using a for loop
for(size_t i{0};i<arr1.size();++i){
    fmt::print("arr1[{}]: {}\n", i, arr1[i]);
}

//calculate the average of the array using a for loop
for(size_t i{0};i<arr1.size();++i){
    sum=arr1[i]+sum;
}
auto result=sum/arr1.size();

//Print the average of the array
//Print the sum of the array
fmt::print("The average of the array is: {}\n", result);
fmt::print("The sum of the array is: {}\n", sum);
fmt::println("End of loop");
//Range based for loop however you lose the I feature to identify the valu but its easy to write
  for (const auto& element :arr1){
    fmt::println("The value of  is : {}",  element);
  }  
//Access the elements using the [] syntax--it goves the error if the index is out of range.Safer to use at() method
  for(size_t i{0};i<arr1.size();++i){
    fmt::println("arr1[{}]: {}", i, arr1.at(i));
  }

}

export void modifications(){

  //Create an array of doubles
std::array<double,5> arr2{3.2,4.54,88.23,44.12,55.15};
//Print the array using a for loop
for (size_t i{0};i<arr2.size();++i){
    fmt::print("arr2[{}]: {}\n", i, arr2.at(i));
}

//You can modify the elements of the array using the [] syntax or the at() method
arr2[1]=10.45;arr2.at(4)=6.54;
//Print the array using a for loop

for (size_t i{0};i<arr2.size();++i){
    fmt::print("arr2[{}]: {}\n", i, arr2.at(i));
}

}

export void fill_with_data(){
 //Create an array of integers
std::array<int,10> arr3;
//fills array with the value 3
//Print the array using a for loop
arr3.fill(3);
for (const auto& element :arr3){
  fmt::println("The value of  is : {}",  element);} 
}
export void front_back(){
std::array<int,5> arr{33,21,52,46,99};
//CHange the value to 100 from 33. Print the first value in the array
arr.front()=100;
fmt::println("The first value in the array is: {}",arr.front());
//Print the last value in the array

fmt::println("The last value in the array is: {}",arr.back());

}

export void multidimensional_arrays(){

  //Multidiment=sional arrays
std::array<std::array<int, 2>, 3> arr = {{
    {1, 2},
    {3, 4},
    {5, 6}
}};

for(const auto row :arr){
for (const auto element:row)
{
    fmt::println("{} ",element);
}
}
//create a 4x4 array
//Create a 4x4 array
std::array<std::array<int,4>, 4> four_d_arr={{
  {1,2,3,4},
   {5,6,7,8},
   {9,10,11,12},
   {13,14,15,16}
}};
for(const auto row :four_d_arr){
for (const auto element:row)
{
    fmt::println("{} ",element);
}
}

}
export void print_array(){
   //Print arrays using function printMatrix
  int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Matrix contents:" << std::endl;
    printMatrix(matrix);


}
export void compare_std_arrays(){
//Comparing arrays
std::array<int,3> arr1{1,2,3};
std::array<int,3> arr2{1,2,3};
std::array<int,3> arr3{1,2,4};
std::array<int,3> arr4{0,2,3};
//Comparing arrays if they are equal
if(arr1==arr2){
   fmt::println("Arr1 is equal to arr2");
}else{
   fmt::println("Arr1 is not equal to arr2");
}
//Comparing arrays if they are not equal(inequality)
if(arr1!=arr3){
    fmt::println("Arr1 is not equal to arr3");
}else{
    fmt::println("Arr1 is equal to arr3");
}
//Lexicographically comparing arrays
if(arr1<arr3){
    fmt::println("Arr1 is less than arr3");
}else{
    fmt::println("Arr1 is not less than arr3");
}
//Comparing arrays if they are less than or equal to
if(arr1<=arr2){
    fmt::println("Arr1 is less than or equal to arr2");}
else{
    fmt::println("Arr1 is not less than or equal to arr2");
}
if(arr3>arr4){
    fmt::println("Arr3 is greater than arr4");}
else{
    fmt::println("Arr3 is not greater  arr4");
}
//Comparing arrays if they are greater than or equal to
if(arr3>=arr1){
    fmt::println("Arr3 is greater than or equal to arr1");}
else{
    fmt::println("Arr3 is not greater than or equal to arr1");
}

}
export void assigning_std_arrays(){

//Assigning one array to another
std::array<int, 5> arr1{1, 2, 3,4,5};
std::array<int, 5> arr2{6, 7, 8,9,10};
//Printing original arrays
  fmt::println("Original arr1:");
  for(const auto& element: arr1){
    fmt::println("{}", element);
  }
  fmt::println("Original arr2:");
  for(const auto& element: arr2){
    fmt::println("{}", element);
  }
  //Assigning arr2 to arr1
  arr1 = arr2;
  //Printing after assignment
  fmt::println("arr1 after assignment:");
  for(const auto& element: arr1){
    fmt::println("{}", element);
  }
  fmt::println("arr2 after assignment:");
  for(const auto& element: arr2){
    fmt::println("{}", element);
  }


}