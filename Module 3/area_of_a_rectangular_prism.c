#include <stdio.h>

float calculateArea(float w, float l, float h) {
    return 2 * (w * l + h * l + h * w);
}

int main() {
    float width, length, height;

    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter height: ");
    scanf("%f", &height);
    
    float area = calculateArea(width, length, height);
    
    printf("Area of rectangular prism is: %.2f\n", area);
    
    return 0;
}
