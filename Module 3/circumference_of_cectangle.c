#include <stdio.h>

float calculateRectangleCircumference(float length, float width) {
    return 2 * (length + width);
}

int main() {
    float length, width, circumference;
    
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    
    circumference = calculateRectangleCircumference(length, width);
    printf("Circumference of rectangle is: %.2f\n", circumference);
    
    return 0;
}
