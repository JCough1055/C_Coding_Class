/*
    . Project description
        . Topic #1
        . Topic #2
*/

#include<string>
#include<random>
#include<iostream>

int main() {
    // Character sets for password generation
    std::string capitol_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string small_letters = "abcdefghijklmnopqrstuvwxyz";
    std::string numbers = "0123456789";
    std::string special_characters = "!@#$%^&*()-_=+[]{};\':\",./<>?|\\";
    
    // All characters combined for additional random selection
    std::string all_characters = capitol_letters + small_letters + numbers + special_characters;

    // Prompt user for password length
    int password_length;
    std::cout << "Enter desired password length (minimum 4 characters): ";
    std::cin >> password_length;
    
    // Validate minimum length
    if (password_length < 4) {
        std::cout << "Password length must be at least 4 characters. Setting to 4." << std::endl;
        password_length = 4;
    }

    //Use the mersenne twister to generate a random number and store that in a variable named index.
    std::random_device rd;  // Provides seeds with less predictability
    std::mt19937 mersenne{ rd() };  // Initialize our mersenne twister with a random seed
    
    // Create uniform distributions for each character set
    std::uniform_int_distribution<int> dist_capitol(0, capitol_letters.size() - 1);
    std::uniform_int_distribution<int> dist_small(0, small_letters.size() - 1);
    std::uniform_int_distribution<int> dist_numbers(0, numbers.size() - 1);
    std::uniform_int_distribution<int> dist_special(0, special_characters.size() - 1);
    std::uniform_int_distribution<int> dist_all(0, all_characters.size() - 1);
    
    // Build password string - ensure at least one of each required character type
    std::string generated_password;
    generated_password += capitol_letters[dist_capitol(mersenne)];
    generated_password += small_letters[dist_small(mersenne)];
    generated_password += numbers[dist_numbers(mersenne)];
    generated_password += special_characters[dist_special(mersenne)];
    
    // Fill remaining characters randomly from all character sets
    for (int i = 4; i < password_length; ++i) {
        generated_password += all_characters[dist_all(mersenne)];
    }
    
    // Shuffle the password using Fisher-Yates algorithm
    for (int i = generated_password.length() - 1; i > 0; --i) {
        std::uniform_int_distribution<int> dist_shuffle(0, i);
        int j = dist_shuffle(mersenne);
        // Swap characters at positions i and j
        char temp = generated_password[i];
        generated_password[i] = generated_password[j];
        generated_password[j] = temp;
    }

    std::cout << "Generated password: " << generated_password << std::endl;


    return 0;
}