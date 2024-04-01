#include <iostream>

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

   
    bool isEquilateral() const {
        return (side1 == side2 && side2 == side3);
    }

   
    bool isIsosceles() const {
        return (side1 == side2 || side1 == side3 || side2 == side3);
    }

    
    bool isScalene() const {
        return (side1 != side2 && side1 != side3 && side2 != side3);
    }
};

int main() {
    double side1, side2, side3;
    std::cout << "Enter the lengths of the three sides of the triangle: ";
    std::cin >> side1 >> side2 >> side3;

    
    Triangle triangle(side1, side2, side3);

    
    if (triangle.isEquilateral()) {
        std::cout << "The triangle is equilateral." << std::endl;
    } else if (triangle.isIsosceles()) {
        std::cout << "The triangle is isosceles." << std::endl;
    } else if (triangle.isScalene()) {
        std::cout << "The triangle is scalene." << std::endl;
    } else {
        std::cout << "Invalid triangle." << std::endl;
    }

    return 0;
}
