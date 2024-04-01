#include <iostream>


int mathOperation(int a, int b) {
    return a + b;
}


double mathOperation(double a, double b) {
    return a + b;
}


int mathOperation(int a, int b, int c) {
    return a - b - c;
}


int mathOperation(int a, int b, int c, int d) {
    return a * b * c * d;
}


double mathOperation(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
}

int main() {
    int x = 10, y = 5, z = 2;
    double m = 12.5, n = 2.5;

   
    std::cout << "Addition (int): " << mathOperation(x, y) << std::endl;
    std::cout << "Addition (double): " << mathOperation(m, n) << std::endl;

   
    std::cout << "Subtraction: " << mathOperation(x, y, z) << std::endl;

   
    std::cout << "Multiplication: " << mathOperation(x, y, z, 2) << std::endl;

    
    std::cout << "Division (double): " << mathOperation(m, n) << std::endl;

    return 0;
}
