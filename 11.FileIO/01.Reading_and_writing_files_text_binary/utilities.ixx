module;


#include<filesystem>
#include<fmt/format.h>
export module utilities; 



import text_files;
import binary_files;

export void read_write_files(){


  std::filesystem::path file_path = R"(C:\Users\mjcog\Documents\test_file.txt)";

 std::string content = "This is a test file.\nLets see if this works\n I hope it does!";
text_files::write_file(file_path,content);

text_files::read_file(file_path);

}

export void read_write_binary_files(){

    std::filesystem::path binary_file_path = R"(C:\Users\mjcog\Documents\test_binary_file.bin)";

    // Create some binary data
 //   std::vector<char> content = {'H', 'e', 'l', 'l', 'o', '\0', 'W', 'o', 'r', 'l', 'd', '!', '\n'};
std::vector<char> content = {0x49, 0x65, 0x6C, 0x6C, 0x6F, 0x00, 0x57, 0x6F, 0x72, 0x6C, 0x64, 0x21, 0x0A}; // "Hello\0World!\n" in hex
    // Write binary data to file
    binary_files::write_file(binary_file_path, content);

    // Read binary data back from file
    std::vector<char> read_data = binary_files::read_file(binary_file_path);

    // Display read binary data as hex values
    fmt::print("Read binary data: ");
    for (char byte : read_data) {
        fmt::print("{:02X} ", static_cast<unsigned char>(byte));
    }
    fmt::print("\n");
    
}