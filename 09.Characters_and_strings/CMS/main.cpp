/*
    . Project description
        . Topic #1
        . Topic #2
*/

#include <iostream>
#include <cstring>  // For strcpy and strcmp
#include <limits>   // For numeric_limits
 
using namespace std;
 
const int INITIAL_SIZE = 5;
 
//Function declarations
void add_contact(char**& names, char**& phone_numbers, 
            char**& emails, int& size, int& count);
void list_contacts(char** names, char** phone_numbers, 
            char** emails, int count);
void delete_contact(char**& names, char**& phone_numbers, 
            char**& emails, int& count);
void search_contact(char** names, char** phone_numbers, 
            char** emails, int count);
 
int main() {
    int size = INITIAL_SIZE;
    int count = 0;
 
    // Dynamically allocated arrays
    char** names = new char*[size];
    char** phone_numbers = new char*[size];
    char** emails = new char*[size];
 
    int choice;
    do {
        cout << "\n1. Add Contact\n2. Delete Contact\n3. Search Contact\n4. List Contacts\n5. Exit\nEnter choice: ";
        
        // Handle invalid input
        if (!(cin >> choice)) {
            cin.clear(); // Clear error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
            cout << "Invalid input! Please enter a number.\n";
            continue;
        }
        

        cin.ignore(); // Ignore newline left in the buffer
 
        switch (choice) {
            case 1: add_contact(names, phone_numbers, emails, size, count); break;
            case 2: delete_contact(names, phone_numbers, emails, count); break;
            case 3: search_contact(names, phone_numbers, emails, count); break;
            case 4: list_contacts(names, phone_numbers, emails, count); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice! Please enter a number between 1 and 5.\n";
        }
    } while (choice != 5);
 
    // Free memory
    for (int i = 0; i < count; i++) {
        delete[] names[i];
        delete[] phone_numbers[i];
        delete[] emails[i];
    }
    delete[] names;
    delete[] phone_numbers;
    delete[] emails;
 
    return 0;
}
 
// Function Implementations
void add_contact(char**& names, char**& phone_numbers, 
            char**& emails, int& size, int& count) {
 
    //Don't modify anything above this line within this function
    //Your code will go below this line in this function

    if (count == size) {
        // Resize all arrays
        int new_size = size * 2;
        char** new_names = new char*[new_size];
        char** new_phone_numbers = new char*[new_size];
        char** new_emails = new char*[new_size];

        for (int i = 0; i < count; ++i) {
            new_names[i] = names[i];
            new_phone_numbers[i] = phone_numbers[i];
            new_emails[i] = emails[i];
        }

        delete[] names;
        delete[] phone_numbers;
        delete[] emails;

        names = new_names;
        phone_numbers = new_phone_numbers;
        emails = new_emails;
        size = new_size;
    }

    char temp_name[100], temp_phone[100], temp_email[100];

    cout << "Enter name: ";
    cin.getline(temp_name, 100);
    cout << "Enter phone number: ";
    cin.getline(temp_phone, 100);
    cout << "Enter email: ";
    cin.getline(temp_email, 100);

    names[count] = new char[strlen(temp_name) + 1];
    strcpy(names[count], temp_name);

    phone_numbers[count] = new char[strlen(temp_phone) + 1];
    strcpy(phone_numbers[count], temp_phone);

    emails[count] = new char[strlen(temp_email) + 1];
    strcpy(emails[count], temp_email);

    count++;
}




 
    //Your code will go above this line in this function    
    //Don't modify anything below this line in this function

 
void list_contacts(char** names, char** phone_numbers, 
            char** emails, int count) {
 
    //Don't modify anything above this line within this function
    //Your code will go below this line in this function
  if (count == 0) {
        cout << "No contacts found.\n";
        return;
    }

    for (int i = 0; i < count; ++i) {
        cout << "Contact " << i + 1 << ":\n";
        cout << "Name: " << names[i] << "\n";
        cout << "Phone: " << phone_numbers[i] << "\n";
        cout << "Email: " << emails[i] << "\n\n";
    }
}


 
    //Your code will go above this line in this function    
    //Don't modify anything below this line in this function
 

 
void delete_contact(char**& names, char**& phone_numbers, 
            char**& emails, int& count) {
    //Don't modify anything above this line within this function
    //Your code will go below this line in this function
 char target[100];
    cout << "Enter the name of the contact to delete: ";
    cin.getline(target, 100);

    for (int i = 0; i < count; ++i) {
        if (strcmp(names[i], target) == 0) {
            delete[] names[i];
            delete[] phone_numbers[i];
            delete[] emails[i];

            for (int j = i; j < count - 1; ++j) {
                names[j] = names[j + 1];
                phone_numbers[j] = phone_numbers[j + 1];
                emails[j] = emails[j + 1];
            }

            count--;
            cout << "Contact deleted.\n";
            return;
        }
    }

    cout << "Contact not found.\n";
}


 
    //Your code will go above this line in this function    
    //Don't modify anything below this line in this function

 
void search_contact(char** names, char** phone_numbers, 
            char** emails, int count) {
    //Don't modify anything above this line within this function
    //Your code will go below this line in this function
 char target[100];
    cout << "Enter the name to search: ";
    cin.getline(target, 100);

    for (int i = 0; i < count; ++i) {
        if (strcmp(names[i], target) == 0) {
            cout << "Name: " << names[i] << "\n";
            cout << "Phone: " << phone_numbers[i] << "\n";
            cout << "Email: " << emails[i] << "\n";
            return;
        }
    }

    cout << "Contact not found.\n";
}


 
    //Your code will go above this line in this function    
    //Don't modify anything below this line in this function
 
