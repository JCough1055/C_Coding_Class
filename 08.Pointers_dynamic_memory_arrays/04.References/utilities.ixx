module;
#include <fmt/format.h>
export module utilities; 

export void declaring_and_using_references(){
int int_data{33};
double double_data{55};
//References 
int &ref_int_data{int_data};
double &ref_double_data{double_data};

fmt::println("int_data is {}", int_data);
fmt::println("address of int_dataIs {}", fmt::ptr(&int_data));
fmt::println("double_data is {}", double_data);
fmt::println("address of double_dataIs {}", fmt::ptr(&double_data));

fmt::println("====================================");
fmt::println("ref_int_data is {}",ref_int_data);
fmt::println("&ref int data address is {}", fmt::ptr(&ref_int_data));
fmt::println("ref_double_data is {}",ref_double_data);
fmt::println("&ref_double_data address is {}", fmt::ptr(&ref_double_data));
fmt::println("====================================");
int_data=111;
double_data=67.2;
fmt::println("int_data is {}", int_data);
fmt::println("address of int_dataIs {}", fmt::ptr(&int_data));
fmt::println("double_data is {}", double_data);
fmt::println("address of double_dataIs {}", fmt::ptr(&double_data));

fmt::println("====================================");
fmt::println("ref_int_data is {}",ref_int_data);
fmt::println("&ref int data address is {}", fmt::ptr(&ref_int_data));
fmt::println("ref_double_data is {}",ref_double_data);
fmt::println("&ref_double_data address is {}", fmt::ptr(&ref_double_data));
fmt::println("====================================");
ref_int_data=333;
ref_double_data=99.99;
fmt::println("int_data is {}", int_data);
fmt::println("address of int_dataIs {}", fmt::ptr(&int_data));
fmt::println("double_data is {}", double_data);
fmt::println("address of double_dataIs {}", fmt::ptr(&double_data));

fmt::println("====================================");
fmt::println("ref_int_data is {}",ref_int_data);
fmt::println("&ref int data address is {}", fmt::ptr(&ref_int_data));
fmt::println("ref_double_data is {}",ref_double_data);
fmt::println("&ref_double_data address is {}", fmt::ptr(&ref_double_data));

}
export void comparing_pointers_and_references(){

double double_value{12.34};
double &ref_double_value{double_value};
double *ptr_double_value{&double_value};

fmt::println("double value is {}", double_value);
fmt::println("address of double value is {}",fmt::ptr( &double_value));
fmt::println("Value of ref_double_value is {}",ref_double_value);
fmt::println("address of ref_double_vale is{}", fmt::ptr(&ref_double_value));
fmt::println("The value of ptr_double_value is {}", *ptr_double_value);
fmt::println("The address of *ptr_double_value is {}", fmt::ptr(ptr_double_value));

fmt::println("====================================");
*ptr_double_value =15.44;
fmt::println("double value is {}", double_value);
fmt::println("address of double value is {}",fmt::ptr( &double_value));
fmt::println("Value of ref_double_value is {}",ref_double_value);
fmt::println("address of ref_double_vale is{}", fmt::ptr(&ref_double_value));
fmt::println("The value of ptr_double_value is {}", *ptr_double_value);
fmt::println("The address of *ptr_double_value is {}", fmt::ptr(ptr_double_value));

ref_double_value=102.44;
fmt::println("====================================");
fmt::println("double value is {}", double_value);
fmt::println("address of double value is {}",fmt::ptr( &double_value));
fmt::println("Value of ref_double_value is {}",ref_double_value);
fmt::println("address of ref_double_vale is{}", fmt::ptr(&ref_double_value));
fmt::println("The value of ptr_double_value is {}", *ptr_double_value);
fmt::println("The address of *ptr_double_value is {}", fmt::ptr(ptr_double_value));

double some_other_double {78.45};

//ref_double_value=some_other_double;
fmt::println("====================================");
fmt::println("double value is {}", double_value);
fmt::println("address of double value is {}",fmt::ptr( &double_value));
fmt::println("Value of ref_double_value is {}",ref_double_value);
fmt::println("address of ref_double_vale is{}", fmt::ptr(&ref_double_value));
fmt::println("The value of ptr_double_value is {}", *ptr_double_value);
fmt::println("The address of *ptr_double_value is {}", fmt::ptr(ptr_double_value));

fmt::println("some_other_double value is {}", some_other_double);
fmt::println("address of some_other_double  is {}",fmt::ptr( &some_other_double));
ptr_double_value=&some_other_double;
fmt::println("====================================");
fmt::println("double value is {}", double_value);
fmt::println("address of double value is {}",fmt::ptr( &double_value));
fmt::println("Value of ref_double_value is {}",ref_double_value);
fmt::println("address of ref_double_vale is{}", fmt::ptr(&ref_double_value));
fmt::println("The value of ptr_double_value is {}", *ptr_double_value);
fmt::println("The address of *ptr_double_value is {}", fmt::ptr(ptr_double_value));

fmt::println("some_other_double value is {}", some_other_double);
fmt::println("address of some_other_double  is {}",fmt::ptr( &some_other_double));

}

export void references_and_const(){

    int age{27};
    const int& ref_int_age{age};

    fmt::println("The age of int_age is {}", age);
    fmt::println("The reference age is ref_int_age is {}", ref_int_age);
    fmt::println("the address of int_age is {}", fmt::ptr(&age));
    fmt::println("the address of ref_int age is {}", fmt::ptr(&ref_int_age));
//ref_int_age++; // This line would cause a compilation error because ref_int_age is a reference to a const int.
    age++;
       fmt::println("The age of int_age is {}", age);
    fmt::println("The reference age is ref_int_age is {}", ref_int_age);
    fmt::println("the address of int_age is {}", fmt::ptr(&age));
    fmt::println("the address of ref_int age is {}", fmt::ptr(&ref_int_age));
}

export void ref_with_range_based_for_loop(){
  int scores[] {1,2,3,4,5,6,7,8,9,10} ; 
  fmt::println("Scores: ");
  for(auto score: scores){
    fmt::print(" {}",score);
  }
  fmt::print("\n");

  //Modify the data in a range based loop
  fmt::println("Scores: ");
  for(auto &score: scores){
    score= score*10;
     }
  for (auto score: scores){
    fmt::print(" {}",score);
  }
  fmt::print("\n");
}