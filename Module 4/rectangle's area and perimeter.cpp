#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    
    Rectangle(double l, double w) : length(l), width(w) {}

   
    double calculateArea() {
        return length * width;
    }

    
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    double length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    
    Rectangle rectangle(length, width);

    
    std::cout << "Area of the rectangle: " << rectangle.calculateArea() << std::endl;

    
    std::cout << "Perimeter of the rectangle: " << rectangle.calculatePerimeter() << std::endl;

    return 0;
}
