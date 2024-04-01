#include <iostream>

class Number {
private:
    int num;

public:
    
    Number(int n) : num(n) {}

    
    friend void swapNumbers(Number&, Number&);
};


void swapNumbers(Number& num1, Number& num2) {
    num1.num = num1.num + num2.num; 
    num2.num = num1.num - num2.num; 
    num1.num = num1.num - num2.num;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers to swap: ";
    std::cin >> num1 >> num2;

   
    Number number1(num1);
    Number number2(num2);

    
    swapNumbers(number1, number2);

    
    std::cout << "After swapping:" << std::endl;
    std::cout << "Number 1: " << number1.num << std::endl;
    std::cout << "Number 2: " << number2.num << std::endl;

    return 0;
}
