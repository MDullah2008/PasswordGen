#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Define the characters to be used in the password
    const std::string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()";

    int length;

    // Ask the user for the password length
    std::cout << "Enter the desired password length: ";
    std::cin >> length;

    // Check if the length is positive
    if (length <= 0) {
        std::cerr << "Password length must be greater than 0." << std::endl;
        return 1;
    }

    // Seed the random number generator
    std::srand(std::time(0));

    // Generate and display the password
    std::cout << "Generated Password: ";
    for (int i = 0; i < length; ++i) {
        // Randomly pick a character from the 'characters' string
        int index = std::rand() % characters.length();
        std::cout << characters[index];
    }
    std::cout << std::endl;

    return 0;
}

