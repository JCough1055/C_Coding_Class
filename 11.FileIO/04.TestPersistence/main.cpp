/*
    . Project description
        .This is a to do list with persistence utilizing file I/O in C++23.
     
*/

#include <fmt/format.h>
#include <array>


// To-Do List
#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <filesystem>
#include <fstream>

// Function to add a task
void add_task(std::vector<std::string> &tasks, const std::string &task) {
     
    tasks.push_back(task);
}
 
// Function to remove a task
void remove_task(std::vector<std::string> &tasks, std::size_t index) {
    if (index >= tasks.size()) {
        std::cout << "Invalid task number.\n";
        return;
    }
    tasks.erase(tasks.begin() + static_cast<long long>(index));
    std::cout << "Task removed successfully.\n";
}
 
// Function to display tasks
void display_tasks(const std::vector<std::string> &tasks) {
    if (tasks.empty()) {
        std::cout << "No tasks available.\n";
        return;
    }
    
    std::cout << "To-Do List:\n";
    for (std::size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i] << "\n";
    }
}
//Function to load tasks from a file
void load_tasks(const std::filesystem::path& file_path, std::vector<std::string> &tasks) {
    std::ifstream infile(file_path);
    if (!infile) {
        std::cout << "No existing task file found. Starting with an empty task list.\n";
        return;
    }
    
    std::string line;
    while (std::getline(infile, line)) {
        if (!line.empty()) {
            tasks.push_back(line);
        }
    }
    
    std::cout << "Loaded " << tasks.size() << " task(s) from file.\n";
}

//Function to save tasks to a file
void save_tasks(const std::filesystem::path& file_path, const std::vector<std::string> &tasks) {
    std::ofstream outfile(file_path);
    for (const auto &task : tasks) {
        outfile << task << "\n";
    }
}
int main() {
   
    std::vector<std::string> tasks;
    int choice;
    
    std::filesystem::path file_path = R"(c:\Users\mjcog\Documents\CogsCoding\cpp23m-main\11.FileIO\04.TestPersistence\tasks.txt)"; 
    //load existing tasks from file
    load_tasks(file_path, tasks);
   

    while (true) {
        // Display menu
        std::cout << "\n1. Add Task\n2. Remove Task\n3. View Tasks\n4. Exit\nEnter choice: ";
        if (!(std::cin >> choice)) {
            // Handle invalid input
            std::cout << "Invalid input. Please enter a number.\n";
            std::cin.clear(); // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            continue;
        }
 
        std::cin.ignore(); // Clear newline from input buffer
        
        switch (choice) {
            //Enter a task
            case 1: {
                std::cout << "Enter task: ";
                std::string task;
                std::getline(std::cin, task);
                add_task(tasks, task);
                std::cout << "Task added successfully.\n";
                break;
            }
            case 2: {
                //Remove a task
                std::cout << "Enter task number to remove: ";
                std::size_t task_number;
                if (!(std::cin >> task_number)) {
                    std::cout << "Invalid input. Please enter a number.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    continue;
                }
                remove_task(tasks, task_number - 1);
                break;
            }
            case 3:
            //Display the tasks
            
                display_tasks(tasks);
                
                break;
            case 4:

            //Save and exit
                save_tasks(file_path, tasks);
                std::cout << "Exiting...\n";
                return 0;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}