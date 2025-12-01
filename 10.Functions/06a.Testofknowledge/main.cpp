/*
    . Project description
        . Topic #1
        . Topic #2
*/

#include <fmt/format.h>
#include <string>
#include <vector>
#include <iostream>
#include <limits>


int main() {
    std::vector<std::string> tasks;
    int choice{0};

    do {
        std::cout<<"+-----------------+"<<std::endl;
        std::cout<<"| To-Do List Menu |"<<std::endl;
        std::cout<<"+-----------------+"<<std::endl;
        std::cout<<"| 1. Add Task     |"<<std::endl;
        std::cout<<"| 2. Remove Task  |"<<std::endl;
        std::cout<<"| 3. View Tasks   |"<<std::endl;
        std::cout<<"| 4. Exit         |"<<std::endl;
        std::cout<<"+-----------------+"<<std::endl;

        std::cout<<"Enter your choice (1-4): ";
        std::cin>>choice;

        if(choice != 1 && choice != 2 && choice != 3 && choice != 4){
            std::cout<<"Invalid choice. Please select a valid option."<<std::endl;
        } else if(choice==1){
            std::string newTask;
            std::cout<<"Enter the task to add: ";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
g            std::getline(std::cin, newTask);
            tasks.push_back(newTask);
            std::cout<<"Task added successfully."<<std::endl;
        } else if(choice==2){
            if(tasks.empty()){
                std::cout<<"No tasks to remove."<<std::endl;
            } else {
                int taskIndex;
                std::cout<<"Enter the task number to remove: ";
                std::cin>>taskIndex;
                if(taskIndex < 1 || taskIndex > tasks.size()){
                    std::cout<<"Invalid task number."<<std::endl;
                } else {
                    tasks.erase(tasks.begin() + taskIndex - 1);
                    std::cout<<"Task removed successfully."<<std::endl;
                }
            }
        } else if(choice==3){
            if(tasks.empty()){
                std::cout<<"No tasks to display."<<std::endl;
            } else {
                std::cout<<"Tasks:"<<std::endl;
                for(size_t i = 0; i < tasks.size(); ++i){
                    std::cout<<i + 1<<". "<<tasks[i]<<std::endl;
                }
            }
        } else if (choice==4){
            std::cout<<"Exiting program."<<std::endl;
        }

        std::cout<<std::endl; // Add some spacing between iterations
    } while(choice != 4);

    return 0;
}