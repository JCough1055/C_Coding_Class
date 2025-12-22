module;

#include <fmt/format.h>
#include<memory>
#include<vector>
#include<fstream>
#include<filesystem>

export module utilities; 
import ct1;
import ct2;
import ct3;
import ct4;
import ct6;
import ct7;
import ct8;
import ct9;
import ct10;
import ct11;
import ct13;
import ct14;
import ct15;
import ct16;
import ct17;





export void ct1_demo(){

ct1::Pixel p;
fmt::println("Pixel COlor: {:010x}",p.m_color);
fmt::println("Pixel Position: ({},{})",p.m_pos_x,p.m_pos_y);

for(size_t i=0;i<200;++i){
    p.m_pos_x = static_cast<unsigned int>(i);
    p.m_pos_y = static_cast<unsigned int>(i);
  
    fmt::println("Pixel Position: ({},{})",p.m_pos_x,p.m_pos_y);
}
p.m_color= 0x00FF00FF;
fmt::println("Pixel COlor: {:010x}",p.m_color);
}

export void ct2_demo(){
    ct2::Pixel p;
//Access the data members via getters
    ct2::Pixel p2(0xFF00FF00,100,150);
    fmt::println("Pixel 2 Color: {:010x}",p2.get_color());
    fmt::println("Pixel 2 Position: ({},{})",p2.get_x(),p2.get_y());
    //Modify the data members via setters
    p.set_x(20);
    p.set_y(30);
    p.set_color(0xFFFF0000);

    fmt::println("Pixel 1 Color after set: {:010x}",p.get_color());
    fmt::println("Pixel 1 Position after set: ({},{})",p.get_x(),p.get_y());
//Modify the data members via setters
    p2.set_x(200);
    p2.set_y(250);
    p2.set_color(0x0000FFFF);

    fmt::println("Pixel 2 Color after set: {:010x}",p2.get_color());
    fmt::println("Pixel 2 Position after set: ({},{})",p2.get_x(),p2.get_y());
// Create objects on the heap with smart pointers
    ct2::Pixel* p3= new ct2::Pixel{0x00FF00FF,10,20};
    fmt::println("Pixel 3 Color: {:010x}",p3->get_color());
    fmt::println("Pixel 3 Position: ({},{})",p3->get_x(),p3->get_y());
    delete p3;
//Create objects on the heap with smart pointers
    auto p4=std::make_unique<ct2::Pixel>(0xF0FF0FF,40,75);
    fmt::println("Pixel 4 Color: {:010x}",p4->get_color());
    fmt::println("Pixel 4 Position: ({},{})",p4->get_x(),p4->get_y());
}

export void ct3_demo(){
    ct3::Pixel p;
//Access the data members via getters
    ct3::Pixel p2(0xFF00FF00,100,150);
    fmt::println("Pixel 2 Color: {:010x}",p2.get_color());
    fmt::println("Pixel 2 Position: ({},{})",p2.get_x(),p2.get_y());
    //Modify the data members via setters
    p.set_x(20);
    p.set_y(30);
    p.set_color(0xFFFF0000);    
    fmt::println("Pixel 1 Color after set: {:010x}",p.get_color());
    fmt::println("Pixel 1 Position after set: ({},{})",p.get_x(),p.get_y());
//Modify the data members via setters
    p2.set_x(200);
    p2.set_y(250);
    p2.set_color(0x0000FFFF);
    fmt::println("Pixel 2 Color after set: {:010x}",p2.get_color());
    fmt::println("Pixel 2 Position after set: ({},{})",p2.get_x(),p2.get_y());
    
// Create objects on the heap with smart pointers
    ct3::Pixel* p3= new ct3::Pixel{0x00FF00FF,10,20};
    fmt::println("Pixel 3 Color: {:010x}",p3->get_color());
    fmt::println("Pixel 3 Position: ({},{})",p3->get_x(),p3->get_y());
    delete p3;
//Create objects on the heap with smart pointers
    auto p4=std::make_unique<ct3::Pixel>(0xF0FF0FF,40,75);
    fmt::println("Pixel 4 Color: {:010x}",p4->get_color());
    fmt::println("Pixel 4 Position: ({},{})",p4->get_x(),p4->get_y());
    
}

export void ct4_demo(){
    ct4::Pixel p;
//Access the data members via getters
    ct4::Pixel p2(0xFF00FF00,100,150);
    fmt::println("Pixel 2 Color: {:010x}",p2.get_color());
    fmt::println("Pixel 2 Position: ({},{})",p2.get_x(),p2.get_y());
    //Modify the data members via setters
    p.set_x(20);
    p.set_y(30);
    p.set_color(0xFFFF0000);    
    fmt::println("Pixel 1 Color after set: {:010x}",p.get_color());
    fmt::println("Pixel 1 Position after set: ({},{})",p.get_x(),p.get_y());
//Modify the data members via setters
    p2.set_x(200);
    p2.set_y(250);
    p2.set_color(0x0000FFFF);
    fmt::println("Pixel 2 Color after set: {:010x}",p2.get_color());
    fmt::println("Pixel 2 Position after set: ({},{})",p2.get_x(),p2.get_y());
    
// Create objects on the heap with smart pointers
    ct4::Pixel* p3= new ct4::Pixel{0x00FF00FF,10,20};
    fmt::println("Pixel 3 Color: {:010x}",p3->get_color());
    fmt::println("Pixel 3 Position: ({},{})",p3->get_x(),p3->get_y());
    delete p3;
//Create objects on the heap with smart pointers
    auto p4=std::make_unique<ct4::Pixel>(0xF0FF0FF,40,75);
    fmt::println("Pixel 4 Color: {:010x}",p4->get_color());
    fmt::println("Pixel 4 Position: ({},{})",p4->get_x(),p4->get_y());
    
}
export void ct5_demo(){
    /*
    ct5::Pixel p;
//Access the data members via getters
    ct5::Pixel p2(0xFF00FF00,100,150);
    fmt::println("Pixel 2 Color: {:010x}",p2.get_color());
    fmt::println("Pixel 2 Position: ({},{})",p2.get_x(),p2.get_y());
    //Modify the data members via setters
    p.set_x(20);
    p.set_y(30);
    p.set_color(0xFFFF0000);    
    fmt::println("Pixel 1 Color after set: {:010x}",p.get_color());
    fmt::println("Pixel 1 Position after set: ({},{})",p.get_x(),p.get_y());
//Modify the data members via setters
    p2.set_x(200);
    p2.set_y(250);
    p2.set_color(0x0000FFFF);
    fmt::println("Pixel 2 Color after set: {:010x}",p2.get_color());
    fmt::println("Pixel 2 Position after set: ({},{})",p2.get_x(),p2.get_y());
    
// Create objects on the heap with smart pointers
    ct5::Pixel* p3= new ct5::Pixel{0x00FF00FF,10,20};
    fmt::println("Pixel 3 Color: {:010x}",p3->get_color());
    fmt::println("Pixel 3 Position: ({},{})",p3->get_x(),p3->get_y());
    delete p3;
//Create objects on the heap with smart pointers
    auto p4=std::make_unique<ct5::Pixel>(0xF0FF0FF,40,75);
    fmt::println("Pixel 4 Color: {:010x}",p4->get_color());
    fmt::println("Pixel 4 Position: ({},{})",p4->get_x(),p4->get_y());
    */

}

export void ct6_demo(){
    ct6::Pixel p;
//Access the data members via getters
    ct6::Pixel p2(0xFF00FF00,100,150);
    fmt::println("Pixel 2 Color: {:010x}",p2.get_color());
    fmt::println("Pixel 2 Position: ({},{})",p2.get_x(),p2.get_y());
    //Modify the data members via setters
    p.set_x(20);
    p.set_y(30);
    p.set_color(0xFFFF0000);    
    fmt::println("Pixel 1 Color after set: {:010x}",p.get_color());
    fmt::println("Pixel 1 Position after set: ({},{})",p.get_x(),p.get_y());
//Modify the data members via setters
    p2.set_x(200);
    p2.set_y(250);
    p2.set_color(0x0000FFFF);
    fmt::println("Pixel 2 Color after set: {:010x}",p2.get_color());
    fmt::println("Pixel 2 Position after set: ({},{})",p2.get_x(),p2.get_y());
    
// Create objects on the heap with smart pointers
    ct6::Pixel* p3= new ct6::Pixel{0x00FF00FF,10,20};
    fmt::println("Pixel 3 Color: {:010x}",p3->get_color());
    fmt::println("Pixel 3 Position: ({},{})",p3->get_x(),p3->get_y());
    delete p3;
//Create objects on the heap with smart pointers
    auto p4=std::make_unique<ct6::Pixel>(0xF0FF0FF,40,75);
    fmt::println("Pixel 4 Color: {:010x}",p4->get_color());
    fmt::println("Pixel 4 Position: ({},{})",p4->get_x(),p4->get_y());

}

export void ct7_demo(){

    ct7::Position pos1(50,75);
    uint32_t ref_color= 0xABCDEF01;
    ct7::Pixel pixel1(0x12345678,pos1,ref_color);   
    fmt::println("Pixel1 Color: {:010x}",pixel1.get_color());
    fmt::println("Pixel1 Position: ({},{})",pixel1.get_x(),pixel1.get_y());
}

export void ct8_demo(){

    ct8::Pixel p1(0x00FF00FF,10,20);
    ct8::Pixel p2=p1; //Invoke copy constructor

    fmt::println("Pixel 1 Color: {:010x}",p1.get_color());
    fmt::println("Pixel 1 Position: ({},{})",p1.get_x(),p1.get_y());
    fmt::println("Pixel 2 Color: {:010x}",p2.get_color());
    fmt::println("Pixel 2 Position: ({},{})",p2.get_x(),p2.get_y());
    fmt::println("Address of Pixel 1: {:p}",(void*)&p1);
    fmt::println("Address of Pixel 2: {:p}",(void*)&p2);


}



//Example function that takes Pixel by Vale

void process_pixel(ct9::Pixel p){
    fmt::println("Processing Pixel Color: {:010x}, pos_x={}, pos_y={}",p.get_color(),p.get_x(),p.get_y());
}
//Example function that returns a Pixel by Value
ct9::Pixel create_pixel(){
    ct9::Pixel p(0xFF0000,30,40);
    return p; //Copy Constructor may be invoked here(but likely optimized out)
}

export void ct9_demo(){
/*
ct9::Pixel p1(0x00FF00FF,10,20);
ct9::Pixel p2=p1; //Invoke deep copy constructor
fmt::println("Pixel 1 Color: {:010x}",p1.get_color());
fmt::println("Pixel 1 Position (raw ptr): ({},{})",p1.get_x(),p1.get_y());
fmt::println("Pixel 1 Position (smart ptr): ({},{})",p1.get_smart_x(),p1.get_smart_y());
fmt::println("Pixel 2 Color: {:010x}",p2.get_color());
fmt::println("Pixel 2 Position (raw ptr): ({},{})",p2.get_x(),p2.get_y());
fmt::println("Pixel 2 Position (smart ptr): ({},{})",p2.get_smart_x(),p2.get_smart_y());
fmt::println("Address of Pixel 1: {:p}",(void*)&p1);
fmt::println("Address of Pixel 2: {:p}",(void*)&p2);

p1.set_x(57);
p1.set_y(89);

fmt::println("Pixel 1 Color: {:010x}",p1.get_color());
fmt::println("Pixel 1 Position (raw ptr): ({},{})",p1.get_x(),p1.get_y());
fmt::println("Pixel 1 Position (smart ptr): ({},{})",p1.get_smart_x(),p1.get_smart_y());
fmt::println("Pixel 2 Color: {:010x}",p2.get_color());
fmt::println("Pixel 2 Position (raw ptr): ({},{})",p2.get_x(),p2.get_y());
fmt::println("Pixel 2 Position (smart ptr): ({},{})",p2.get_smart_x(),p2.get_smart_y());
fmt::println("Address of Pixel 1: {:p}",(void*)&p1);
fmt::println("Address of Pixel 2: {:p}",(void*)&p2);

*/

//Cases where the copy constructor is called
//1. Copy Initailization

ct9::Pixel p1{0xFFFFFF,10,20};
//ct9::Pixel p2=p1;//Copy Constructor is called

//2. Passing by value
//process_pixel(p1);

//3. Returning by value
//ct9::Pixel p3=create_pixel();

//4. Copying an object in a collection(vector)
/*
std::vector<ct9::Pixel> pixels;
pixels.push_back(p1); //Copy constructor called to copy p1 into the vector
pixels.push_back(p1);
*/
//5. Explicit copy constructor
ct9::Pixel p5(p1);
}

export void ct10_demo(){

//ct10::Pixel p1;                     //Uses Default constructor
//ct10::Pixel p2{0xFFFF0000};       //Uses color-only constructor, which delegatesto the three argument constructor
ct10::Pixel p3{0xFF00FF00,10,50}; //Directly uses three-argument constructor
ct10::Pixel p4{p3};               //Uses copy constructor with delegation

}

export void ct11_demo(){
    uint32_t color=0xFF00FF00;
    ct11::Pixel p(color);
//ct11::print_pixel(color); //This will work only if the one-parameter constructor is not explicit
ct11::print_pixel(p);
}

export void ct13_demo(){

    ct13::Pixel p1(0x00FF00FF,10,20);
    ct13::Pixel p2(0xFF00FF00,30,200);

    p2=p1;
    fmt::println("Pixel 1 color {:#010x}",p1.get_color());
    fmt::println("Pixel 1 pos ({},{})",p1.get_x(),p1.get_y());
    fmt::println("Pixel 1 smart pos ({},{})",p1.get_smart_x(),p1.get_smart_y());
    fmt::println("Pixel 2 color {:#010x}",p2.get_color());
    fmt::println("Pixel 2 pos ({},{})",p2.get_x(),p2.get_y());
    fmt::println("Pixel 2 smart pos ({},{})",p2.get_smart_x(),p2.get_smart_y());

}

export void ct14_demo(){

    ct14::Pixel p1(0x00FF00FF,10,20);
    ct14::Pixel p2(0xFF00FF00,30,200);

    p2=p1;
    fmt::println("Pixel 1 color {:#010x}",p1.get_color());
    fmt::println("Pixel 1 pos ({},{})",p1.get_x(),p1.get_y());
    fmt::println("Pixel 1 smart pos ({},{})",p1.get_smart_x(),p1.get_smart_y());
    fmt::println("Pixel 2 color {:#010x}",p2.get_color());
    fmt::println("Pixel 2 pos ({},{})",p2.get_x(),p2.get_y());
    fmt::println("Pixel 2 smart pos ({},{})",p2.get_smart_x(),p2.get_smart_y());

    ct14::Pixel p3{0xFF00FF00,100,50};
    ct14::Pixel p4{p3};

    p4=p3;
    fmt::println("Pixel 3 color {:#010x}",p3.get_color());
    fmt::println("Pixel 3 pos ({},{})",p3.get_x(),p3.get_y());
    fmt::println("Pixel 3 smart pos ({},{})",p3.get_smart_x(),p3.get_smart_y());
    fmt::println("Pixel 4 color {:#010x}",p4.get_color());
    fmt::println("Pixel 4 pos ({},{})",p4.get_x(),p4.get_y());
    fmt::println("Pixel 4 smart pos ({},{})",p4.get_smart_x(),p4.get_smart_y());

}

export void ct15_demo_pod(){
/*
    std::filesystem ::path file_path=(R"(C:/Users/mjcog/Documents/CogsCoding/cpp23m-main/12.Custom_types/01.Custom_types_basics/pod_data.bin)");
//Create a POD object type and rwrite and read a single POD.

pod_types::PODType pod1{42,3.14f};
fmt::println("PODType 1 - ID: {}, Value: {}",pod1.id,pod1.value);   
pod_types::PODType pod2{84,6.28f};
fmt::println("PODType 2 - ID: {}, Value: {}",pod2.id,pod2.value);
//Write pod1 to file

if (pod_types::write_pod(file_path,pod1)){
    fmt::println("Successfully wrote PODType to file.");    
}else{
    fmt::println("Failed to write PODType to file.");


}
//Read pod from file
pod_types::PODType read_pod;
if(pod_types::read_pod(file_path, read_pod)){
    fmt::println("Successfully read PODType from file.");
    fmt::println("Read PODType - ID: {}, Value: {}",read_pod.id,read_pod.value);    
}else{
    fmt::println("Failed to read PODType from file.");
}
    */

    //Write and read into vector of PODs
    std::filesystem ::path file_path=(R"(C:/Users/mjcog/Documents/CogsCoding/cpp23m-main/12.Custom_types/01.Custom_types_basics/pod_vector_data.bin)");
    std::vector<pod_types::PODType> pod_vector ={
        {1,1.1f},
        {2,2.2f},
        {3,3.3f},
        {4,4.4f},
        {5,5.5f}
    };

    //Write vector to file
    if(pod_types::write_pod_vector(file_path,pod_vector)){
        fmt::println("Successfully wrote PODType vector to file.");
    }else{
        fmt::println("Failed to write PODType vector to file.");
}
    //Read vector from file
    std::vector<pod_types::PODType> read_pod_vector;
    if(pod_types::read_pod_vector(file_path, read_pod_vector)){
        fmt::println("Successfully read PODType vector from file.");
        for(const auto& pod: read_pod_vector){
            fmt::println("Read PODType - ID: {}, Value: {}",pod.id,pod.value);
        }
    }else{
        fmt::println("Failed to read PODType vector from file.");
    }
}

export void ct15_demo_non_pod(){

 std::vector<non_pod_types::Person> persons={{"Alice",30},{"Bob",25},{"Charlie",40}};
 std::filesystem ::path file_path=R"(C:/Users/mjcog/Documents/CogsCoding/cpp23m-main/12.Custom_types/01.Custom_types_basics/non_pod_vector_data.bin)";

 non_pod_types::write_persons_to_file(persons, file_path);

 std::vector<non_pod_types::Person> read_persons= non_pod_types::read_persons_from_file( file_path);
    for(const auto& person: read_persons){
        fmt::println("Person Name: {}, Age: {}",person.name, person.age);
    }

}

export void ct16_demo(){

    std::filesystem ::path file_path=R"(C:/Users/mjcog/Documents/CogsCoding/cpp23m-main/12.Custom_types/01.Custom_types_basics/save_pixels.bin)";

    std::vector<ct16::Pixel> pixels = {ct16::Pixel{0x00FF00FF,10,20},ct16::Pixel{0xFF00FF00,30,40},ct16::Pixel{0xFFFF0000,50,60}};

    ct16::save_pixels(pixels, file_path);
    fmt::println("Pixels saved to {}", file_path.string());
    std::vector<ct16::Pixel> deserialized_pixels=ct16::load_pixels(file_path);

    fmt::println("Deserialized Pixels:");
    for(const auto& p: deserialized_pixels){
        auto position =p.get_position();
        fmt::println("Pixel Color: {:#08x}, Position: ({},{})",p.get_color(),position.x, position.y);
    }
}

export void ct17_demo(){
ct17::Pixel p1;
fmt::println("Initial Pixel State:");
ct17::print_pixel(p1);
ct17::Canvas canvas;
canvas.modify_pixel(p1, 0xFF00FF00, 100, 150);
fmt::println("Modified Pixel State via Canvas:");
ct17::print_pixel(p1);
canvas.display_pixel(p1);   
}
