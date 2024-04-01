#include <iostream>
#include <cmath>


double calculateArea(double length, double breadth) {
    return length * breadth;
}


double calculateArea(double base, double height, char triangle) {
    return 0.5 * base * height;
}


double calculateArea(double radius) {
    const double PI = 3.14159;
    return PI * radius * radius;
}

int main() {
    
    double lengthRect = 5.0, breadthRect = 3.0;
    double areaRect = calculateArea(lengthRect, breadthRect);
    std::cout << "Area of Rectangle: " << areaRect << std::endl;

   
    double baseTri = 4.0, heightTri = 6.0;
    double areaTri = calculateArea(baseTri, heightTri, 'T');
    std::cout << "Area of Triangle: " << areaTri << std::endl;

    
    double radiusCircle = 2.5;
    double areaCircle = calculateArea(radiusCircle);
    std::cout << "Area of Circle: " << areaCircle << std::endl;

    return 0;
}
