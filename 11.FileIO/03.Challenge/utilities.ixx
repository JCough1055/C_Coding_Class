module;

#include "ftxui/component/captured_mouse.hpp"  // for ftxui
#include "ftxui/component/component.hpp"       // for Input, Renderer, Vertical
#include "ftxui/component/component_base.hpp"  // for ComponentBase
#include "ftxui/component/component_options.hpp"  // for InputOption
#include "ftxui/component/screen_interactive.hpp"  // for Component, ScreenInteractive
#include "ftxui/dom/elements.hpp"  // for text, hbox, separator, Element, operator|, vbox, border
#include "ftxui/util/ref.hpp"  // for Ref
#include<iostream>
#include<filesystem>
#include<fstream>


export module utilities; 


namespace it_1 {

 namespace fs=std::filesystem;
 using namespace ftxui;
 const fs::path contacts_file= R"(C:\Users\Public\Documents\contacts.txt)";


 //ensure the contacts file exists
void ensure_file_exists(){
   
    if(!fs::exists(contacts_file)){
    std::ofstream file(contacts_file);
}
    
}

//load contacts from file
std::vector<std::string> load_contacts(){
std::vector<std::string> contacts;
if (fs::exists(contacts_file)){
    std::ifstream file(contacts_file);
    std::string line;
    while (std::getline(file,line)){
        contacts.push_back(line);
    }

}
return contacts;
}

void save_contacts(const std::vector<std::string>& contacts){
    std::ofstream file(contacts_file);
    for (const auto& contact: contacts){
        file<<contact<<"\n";
    }
}

void add_contact(const std::string& name, const std::string& phone_number){
    std::ofstream file(contacts_file,std::ios::app);
    file<<name<<" "<<phone_number<<"\n";
    }

void delete_contact(int index){
        auto contacts=load_contacts();
        if (index<0 || index>=contacts.size()){
            return;
        }
        contacts.erase(contacts.begin()+index);
        save_contacts(contacts);
        }

        export void app(){

ensure_file_exists();
auto screen=ScreenInteractive::TerminalOutput();

//Load Contacts
std::vector<std::string> contacts=load_contacts();
int selected =0;

std::string name_input;
std::string phone_input;
auto name_input_box=Input(&name_input,"Enter Name");
auto phone_input_box=Input(&phone_input,"Enter Phone Number");

auto display_contacts=Menu(&contacts,&selected);

auto add_button=Button("Add Contact",[&](){
    if (!name_input.empty() && !phone_input.empty()){
        add_contact(name_input,phone_input);
        contacts=load_contacts();
        name_input.clear();
        phone_input.clear();

        }
    });
auto delete_button=Button("Delete Contact",[&](){
    delete_contact(selected);
    contacts=load_contacts();
    selected=0;
    });

    auto layout=Container::Vertical({
        name_input_box,
        phone_input_box,
        add_button,
        delete_button,
        display_contacts
    });
    auto renderer=Renderer(layout,[&]{
        return vbox({
           text("The Incredible Contact Manager by Jay Coughlin")|bold|center,
           separator(),
           hbox(text("Name: "),name_input_box->Render()),
           hbox(text("Phone: "),phone_input_box->Render()),
           hbox({add_button->Render()| color(Color::Green),
           delete_button->Render()| color(Color::Red),
        }) |center,
        separator(),
        separator(),
        text("Contacts:")|bold,
        display_contacts->Render(),
        })|border;
    });
    screen.Loop(renderer);
    return;
        }

} // namespace it_1