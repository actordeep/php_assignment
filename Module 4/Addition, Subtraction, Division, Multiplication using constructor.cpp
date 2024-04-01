#include <iostream>

class Calculator {
public:
    // Function to perform addition
    static double add(double num1, double num2) {
        return num1 + num2;
    }

    // Function to perform subtraction
    static double subtract(double num1, double num2) {
        return num1 - num2;
    }

    // Function to perform multiplication
    static double multiply(double num1, double num2) {
        return num1 * num2;
    }

    // Function to perform division
    static double divide(double num1, double num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            std::cerr << "Error: Cannot divide by zero!" << std::endl;
            return 0;
        }
    }
};

int main() {
    double num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Perform arithmetic operations and display results
    std::cout << "Addition result: " << Calculator::add(num1, num2) << std::endl;
    std::cout << "Subtraction result: " << Calculator::subtract(num1, num2) << std::endl;
    std::cout << "Multiplication result: " << Calculator::multiply(num1, num2) << std::endl;
    std::cout << "Division result: " << Calculator::divide(num1, num2) << std::endl;

    return 0;
}
