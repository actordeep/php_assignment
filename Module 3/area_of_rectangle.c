#include <stdio.h>

float calculateArea(float width, float length) {
    return width * length;
}

int main() {
    float width, length;

    printf("Enter Width of rectangle: ");
    scanf("%f", &width);

    printf("Enter Length of rectangle: ");
    scanf("%f", &length);

    float area = calculateArea(width, length);

    printf("Area of rectangle is: %.2f\n", area);

    return 0;
}
