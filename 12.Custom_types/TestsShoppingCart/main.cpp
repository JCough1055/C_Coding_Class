/*
    . Project description
        . Topic #1
        . Topic #2
*/

#include <fmt/format.h>
#include <array>
#include <exception>
#include <vector>
#include <string>
#include <iostream>
#include "excercise.h"

int main() {
std::vector<Product> catalog = {
        {1, "Apple", 0.99},
        {2, "Bread", 2.49},
        {3, "Milk", 1.89},
        {4, "Eggs", 2.99},
        {5, "Cheese", 3.49}
    };
 
    ShoppingCart cart;
    int choice;
    std::string input;
 
    do {
        std::cout << "1. Show Products\n";
        std::cout << "2. Add to Cart\n";
        std::cout << "3. View Cart\n";
        std::cout << "4. Checkout\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter choice: ";
 
        std::getline(std::cin >> std::ws, input);
 
        try {
            choice = std::stoi(input);
        } catch (const std::exception&) {
            std::cout << "Please enter a valid number.\n\n";
            continue;
        }
 
        if (choice == 1) {
            showProducts(catalog);
        } else if (choice == 2) {
            int id, qty;
            std::string id_input, qty_input;
 
            std::cout << "Enter product ID: ";
            std::getline(std::cin >> std::ws, id_input);
 
            try {
                id = std::stoi(id_input);
            } catch (const std::exception&) {
                std::cout << "Please enter a valid product ID.\n\n";
                continue;
            }
 
            std::cout << "Enter quantity: ";
            std::getline(std::cin >> std::ws, qty_input);
 
            try {
                qty = std::stoi(qty_input);
                if (qty <= 0) {
                    std::cout << "Quantity must be positive.\n\n";
                    continue;
                }
            } catch (const std::exception&) {
                std::cout << "Please enter a valid quantity.\n\n";
                continue;
            }
 
            bool found = false;
            for (const auto& p : catalog) {
                if (p.id == id) {
                    cart.addItem(p, qty);
                    found = true;
                    break;
                }
            }
            if (!found) {
                std::cout << "Invalid product ID.\n";
            }
        } else if (choice == 3) {
            cart.viewCart();
        } else if (choice == 4) {
            cart.checkout();
        } else if (choice == 5) {
            std::cout << "Exiting...\n";
        } else {
            std::cout << "Please choose a number between 1 and 5.\n\n";
        }
 
    } while (choice != 5);
 
    return 0;
}
