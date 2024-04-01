#include <iostream>


template<typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
   
    int x = 5, y = 10;
    std::cout << "Before swapping:" << std::endl;
    std::cout << "x: " << x << ", y: " << y << std::endl;
    swapValues(x, y);
    std::cout << "After swapping:" << std::endl;
    std::cout << "x: " << x << ", y: " << y << std::endl;

   
    double a = 3.14, b = 6.28;
    std::cout << "\nBefore swapping:" << std::endl;
    std::cout << "a: " << a << ", b: " << b << std::endl;
    swapValues(a, b);
    std::cout << "After swapping:" << std::endl;
    std::cout << "a: " << a << ", b: " << b << std::endl;

    
    char c1 = 'A', c2 = 'B';
    std::cout << "\nBefore swapping:" << std::endl;
    std::cout << "c1: " << c1 << ", c2: " << c2 << std::endl;
    swapValues(c1, c2);
    std::cout << "After swapping:" << std::endl;
    std::cout << "c1: " << c1 << ", c2: " << c2 << std::endl;

    return 0;
}
