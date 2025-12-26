#ifndef EXERCISE_H
#define EXERCISE_H

#include <string>
#include <iomanip>
#include <vector>
#include <iostream>

//Don't modify anything above this line 
//Your code will go below this line

//Product class 
class Product{
    
    public:
        int id;
        std::string name;
        double price;
    
    
        Product(int id_, const std::string& name_, double price_)
        : id(id_), name(name_), price(price_) {}
    

    
};

//CartItem class 
class CartItem{
    
    public:
    
    Product product;
    int quantity;
    
    CartItem(const Product& product_, int quantity_)
    : product(product_), quantity(quantity_) {}

   
    

};
//ShoppingCart class 

class ShoppingCart{
    public:
    
    void addItem(const Product& product, int quantity);
    void viewCart() const;
    void checkout();
    
    private:
    
    std::vector<CartItem> items;
};


//Your code will go above this line 
//Don't modify anything below this lin e

void showProducts(const std::vector<Product>& catalog);


#endif // _EXERCISE_H