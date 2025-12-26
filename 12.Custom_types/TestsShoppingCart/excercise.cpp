#include "excercise.h"
#include <iostream>
#include <iomanip>

//ShoppingCart::addItem member function
void ShoppingCart::addItem(const Product& product, int quantity) {
    // Check if product is already in cart
    for (auto& item : items) {
        if (item.product.id == product.id) {
            item.quantity += quantity;
            std::cout << "Updated quantity in cart.\n";
            return;
        }
    }

    items.emplace_back(product, quantity);
    std::cout << "Added to cart.\n";
}



//void ShoppingCart::viewCart member function
void ShoppingCart::viewCart() const {
    if (items.empty()) {
        std::cout << "Your cart is empty.\n";
        return;
    }

    double total = 0.0;
    std::cout << "\nItems in your cart:\n";
    std::cout << std::left << std::setw(5) << "ID"
              << std::setw(20) << "Name"
              << std::setw(10) << "Price"
              << std::setw(10) << "Qty"
              << std::setw(10) << "Subtotal" << "\n";

    for (const auto& item : items) {
        double subtotal = item.product.price * item.quantity;
        total += subtotal;
        std::cout << std::setw(5) << item.product.id
                  << std::setw(20) << item.product.name
                  << std::setw(10) << item.product.price
                  << std::setw(10) << item.quantity
                  << std::setw(10) << subtotal << "\n";
    }

    std::cout << "\nTotal: $" << total << "\n\n";
}


//ShoppingCart::checkout() function
void ShoppingCart::checkout() {
    if (items.empty()) {
        std::cout << "Nothing to checkout.\n";
        return;
    }

    viewCart();
    std::cout << "Proceeding to checkout...\n";
    items.clear();
    std::cout << "Thank you for your purchase!\n\n";
}

//showProducts function
void showProducts(const std::vector<Product>& catalog) {
    std::cout << "\nAvailable Products:\n";
    std::cout << std::left << std::setw(5) << "ID"
              << std::setw(20) << "Name"
              << std::setw(10) << "Price" << "\n";

    for (const auto& p : catalog) {
        std::cout << std::setw(5) << p.id
                  << std::setw(20) << p.name
                  << std::setw(10) << p.price << "\n";
    }
    std::cout << "\n";
}

