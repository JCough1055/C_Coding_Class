/*
    . Project description
        . Topic #1
        . Topic #2
*/

#include <fmt/format.h>
#include <string>
#include <fstream>
#include <iostream>
#include <filesystem>
#include <cstdio>
#include <iterator>

import utilities;

int main() {
read_write_binary_files();

//read_write_files();

//Way #1
/*
    // Use a user-accessible location instead of C:\ root
    std::filesystem::path file_path = R"(C:\Users\mjcog\Documents\test_file.txt)";

    std::string content = "This is a test file.\nLets see if this works\n I hope it does!";
    std::ofstream file(file_path, std::ios::out);

    // Check if file opened successfully
    if (!file.is_open()) {
        std::cout << "Error: Could not open file at " << file_path << std::endl;
        std::cout << "This might be due to permission issues or invalid path." << std::endl;
        return 1;
    }
    
    file << content;
    file.close();
    
    std::cout << "File written successfully to: " << file_path << std::endl;
*/
//Way #2
/*
FILE* file= fopen("C:\\Users\\mjcog\\Documents\\test_file2.txt","w");
if(file){

    std::string content = "This is another test file.\nLets see if this one works as well\n I hope it does!";
    fprintf(file,"%s",content.c_str());
    fclose(file);
    std::cout << "File written successfully to: " << "C:\\Users\\mjcog\\Documents\\test_file2.txt" << std::endl;
}else{
    std::cout << "Error: Could not open file at " << "C:\\Users\\mjcog\\Documents\\test_file2.txt" << std::endl;
    std::cout << "This might be due to permission issues or invalid path." << std::endl;
    return 0;
}
    */

    //Way #3
    /*
   std::ofstream file("C:\\Users\\mjcog\\Documents\\test_file3.txt", std::ios::out);

    // Check if file opened successfully
    if (file.is_open()) {
        std::string content = "This is a third test file.\nChecking if this method works too!\n Fingers crossed!";
        std::copy(content.begin(),content.end(), std::ostream_iterator<char>(file));
        file.close();
        std::cout << "File written successfully to: " << "C:\\Users\\mjcog\\Documents\\test_file3.txt" << std::endl;
    } else {
        std::cout << "Error: Could not open file at " << "C:\\Users\\mjcog\\Documents\\test_file3.txt" << std::endl;
        std::cout << "This might be due to permission issues or invalid path." << std::endl;
        return 0;
}*/
}