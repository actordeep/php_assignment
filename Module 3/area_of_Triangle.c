#include <stdio.h>

int main() {
    float base, height;

    printf("Enter base of triangle: ");
    scanf("%f", &base);
    printf("Enter height of triangle: ");
    scanf("%f", &height);
    
    float area = 0.5 * base * height;
    
    printf("Area of triangle with base %.2f and height %.2f is: %.2f\n", base, height, area);
    
    return 0;
}
