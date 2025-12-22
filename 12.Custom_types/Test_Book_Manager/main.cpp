/*
  Implement two classes, Book and BookManager, that will allow a user 
  to manage a collection of books through a console-based application. 
  The application enables users to:
    Add books to a collection
    Remove books by title
    List all books currently in the collection
Persist the data to a file: When the application is started the data 
is read from a file and when the data is changed, the new changes are 
written back to the file. You will use your File I/O muscles here.

The main function is provided for you. You should copy this function 
and use it as a starting point in your local project. Your task is to
 implement the Book and BookManager classes before the main function 
 where designated. Once you have completed your implementation, you 
 should test the application yourself to ensure it behaves as expected.
 
*/
#include <iostream>
#include <vector>
#include <fstream>
#include <filesystem>
#include <limits>
 
namespace fs = std::filesystem;
 
// Implement the Book and BookManager classes here

//Create the class Books
class Book{

    public:
    std::string title;
    std::string author;
    int year;
    Book(const std::string& t, const std::string& a, int y)
        : title(t), author(a), year(y) {}

};

//Create the class BookManager
class BookManager{
    private:
    std::vector<Book> books;
    std::string file_path;

    public:
    BookManager(const std::string& path) : file_path(path) {
        load_books();
    }
//Add the add book function
    void add_book(const Book& book) {
        books.push_back(book);
        save_books();
        std::cout << "Book added successfully!\n";
    }
//Add the remove book function
    void remove_book(const std::string& title) {
        auto it = std::remove_if(books.begin(), books.end(),
                                 [&title](const Book& b) { return b.title == title; });
        if (it != books.end()) {
            books.erase(it, books.end());
            save_books();
            std::cout << "Book removed successfully!\n";
        } else {
            std::cout << "Book not found!\n";
        }
    }
//Add the list books function
    void list_books() const {
        if (books.empty()) {
            std::cout << "No books in the collection.\n";
            return;
        }
        for (const auto& book : books) {
            std::cout << "Title: " << book.title
                      << ", Author: " << book.author
                      << ", Year: " << book.year << "\n";
        }
    }
private:
//Load books from file
    void load_books() {
        std::ifstream file(file_path);
        if (!file.is_open()) {
            return; // File doesn't exist yet
        }
        
        std::string title, author;
        int year;
        while (std::getline(file, title)) {
            if (std::getline(file, author)) {
                if (file >> year) {
                    file.ignore(); // Ignore the newline after year
                    books.push_back(Book(title, author, year));
                }
            }
        }
        file.close();
    }
//Save books to file
    void save_books() {
        std::ofstream file(file_path);
        if (!file.is_open()) {
            std::cout << "Error: Could not open file for writing!\n";
            return;
        }
        
        for (const auto& book : books) {
            file << book.title << "\n"
                 << book.author << "\n"
                 << book.year << "\n";
        }
        file.close();
    }
};
int main() {
    // Specify file path for different operating systems
    fs::path file_path = R"(C:\Users\mjcog\documents\books.txt)"; // Windows
    // fs::path file_path = R"(/path/to/your/books.txt)"; // Linux
    
    BookManager manager(file_path.string());
 
    while (true) {
        std::cout << "1. Add Book\n2. Remove Book\n3. List Books\n4. Exit\nChoose an option: ";
        int choice;
        
        if (!(std::cin >> choice)) {
            std::cout << "Error: Please enter a valid number (1-4)\n";
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            continue;
        }
        std::cin.ignore();
 
        if (choice == 1) {
            std::string title, author;
            int year;
            std::cout << "Enter title: ";
            std::getline(std::cin, title);
            std::cout << "Enter author: ";
            std::getline(std::cin, author);
            std::cout << "Enter year: ";
            if (!(std::cin >> year)) {
                std::cout << "Error: Year must be a valid number\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
            std::cin.ignore();
            
            // Validate that no field is empty
            if (title.empty() || author.empty() || year <= 0) {
                std::cout << "Error: Title, author and year are all required. Year must be positive.\n";
                continue;
            }
            
            manager.add_book(Book(title, author, year));
        } else if (choice == 2) {
            std::string title;
            std::cout << "Enter title to remove: ";
            std::getline(std::cin, title);
            manager.remove_book(title);
        } else if (choice == 3) {
            manager.list_books();
        } else if (choice == 4) {
            break;
        } else {
            std::cout << "Invalid option!\n";
        }
    }
    return 0;
}
