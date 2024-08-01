#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>

std::string generatePassword(int length) {
    // Define the character set for the password
    const std::string characters = 
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "0123456789"
        "!@#$%^&*()_+~`|}{[]:;?><,./-=";

    std::string password;

    // Seed the random number generator
    std::srand(static_cast<unsigned>(std::time(0)));

    // Generate the password
    for (int i = 0; i < length; ++i) {
        password += characters[std::rand() % characters.length()];
    }

    return password;
}

int main() {
    int length;

    // Ask the user for the length of the password
    std::cout << "Enter the length of the password: ";
    std::cin >> length;

    // Check if the input is valid
    if (std::cin.fail() || length <= 0) {
        std::cin.clear(); // Clear the error flag on std::cin
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        std::cout << "Invalid input. Please enter a positive number." << std::endl;
        return 1;
    }

    // Generate and display the password
    std::string password = generatePassword(length);
    std::cout << "Generated password: " << password << std::endl;

    return 0;
}
