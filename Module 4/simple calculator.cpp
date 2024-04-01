#include <iostream>

class Calculator {
public:
    
    double add(double num1, double num2) {
        return num1 + num2;
    }

   
    double subtract(double num1, double num2) {
        return num1 - num2;
    }

    
    double multiply(double num1, double num2) {
        return num1 * num2;
    }

    
    double divide(double num1, double num2) {
        if (num2 != 0)
            return num1 / num2;
        else {
            std::cerr << "Error: Cannot divide by zero!" << std::endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;

    double num1, num2;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    double result;
    switch (op) {
        case '+':
            result = calc.add(num1, num2);
            break;
        case '-':
            result = calc.subtract(num1, num2);
            break;
        case '*':
            result = calc.multiply(num1, num2);
            break;
        case '/':
            result = calc.divide(num1, num2);
            break;
        default:
            std::cerr << "Error: Invalid operator!" << std::endl;
            return 1; 
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}
