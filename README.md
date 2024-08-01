C++ Password Generator

This C++ program generates a random password based on user input. It allows you to specify the length of the password and then generates a secure, random password containing a mix of uppercase letters, lowercase letters, digits, and special characters.

### Features
- **Custom Length**: Specify the desired length of the password.
- **Randomized Characters**: The password includes a variety of characters to ensure complexity and security.
- **Error Handling**: Handles invalid input gracefully, prompting the user to enter a positive number.

### How to Use

1. **Compile the Program**:
   Ensure you have a C++ compiler installed (e.g., `g++`). Compile the source code using the following command:
   ```bash
   g++ -o password_generator password_generator.cpp
   ```

2. **Run the Executable**:
   After compiling, run the executable:
   ```bash
   ./password_generator
   ```

3. **Enter the Length**:
   When prompted, enter the desired length of the password and press Enter. The program will generate and display a random password of the specified length.

### Example

```
Enter the length of the password: 12
Generated password: 5!sX&^j4Qz*L
```

### Notes
- Ensure the input length is a positive integer.
- The program includes various special characters to enhance password complexity.

### Requirements
- C++ compiler (e.g., g++)
- Standard C++ library
