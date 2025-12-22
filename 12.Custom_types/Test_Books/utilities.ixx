module;


#include<string>
#include<iostream>


export module utilities; 

export void new_class_functiion(){

class Book{
    public:
   Book()=default;
   
   Book(const std::string& t, const std::string& a):Book(t,a,0){
        std::cout<<"Body of the one param constructor\n";
   }
   
   Book(const std::string& t, const std::string& a, int p)
      :  title{t},author{a},pages{p}{
     std::cout<<"Three-argument constructor\n";   
   }
   
    Book(const Book& other)
            : Book(other.title, other.author, other.pages) {
           std::cout<<("Copy constructor called!\n");
           };
~Book(){
    
}

// Getter methods
std::string get_title() const { return title; }
std::string get_author() const { return author; }
int get_pages() const { return pages; }



private:

std::string title{"Unkown"};
std::string author{"Unkown"};
int pages{0};

};


Book my_book{"C++23 Programming","John Doe",350};
Book another_book=my_book; // Invokes copy constructor
std::cout<<"Book created!\n";
std::cout<<"The book title is: "<<my_book.get_title()<<"\n";
std::cout<<"The book author is: "<<my_book.get_author()<<"\n";
std::cout<<"The book has "<<my_book.get_pages()<<" pages.\n";

std::cout<<"The book title is: "<<another_book.get_title()<<"\n";
std::cout<<"The book author is: "<<another_book.get_author()<<"\n";
std::cout<<"The book has "<<another_book.get_pages()<<" pages.\n";

}