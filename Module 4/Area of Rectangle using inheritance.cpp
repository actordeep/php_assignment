#include <iostream>

// Class representing a Rectangle
class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Function to calculate area
    double calculateArea() {
        return length * width;
    }
};

int main() {
    // Create a Rectangle object
    Rectangle rectangle(5.0, 3.0);

    // Calculate and display area of the rectangle
    std::cout << "Area of Rectangle: " << rectangle.calculateArea() << std::endl;

    return 0;
}
