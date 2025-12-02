module;
#include<filesystem>
export module utilities; 
import csv;
import json;

export void csv_demo(){


    std::filesystem::path file_path = R"(C:\Users\mjcog\Documents\sample_file.csv)";
    csv::write_csv(file_path);
    csv::read_csv(file_path);
}

export void json_demo(){


    std::filesystem::path file_path = R"(C:\Users\mjcog\Documents\sample_file.json)";
    json::write_json(file_path);
    json::read_json(file_path);
}