#include <iostream>


inline int multiply(int a, int b) {
    return a * b;
}


inline int cube(int num) {
    return num * num * num;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

   
    std::cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << std::endl;

    int num;

    std::cout << "Enter a number to find its cubic value: ";
    std::cin >> num;

    
    std::cout << "Cube of " << num << " is: " << cube(num) << std::endl;

    return 0;
}
