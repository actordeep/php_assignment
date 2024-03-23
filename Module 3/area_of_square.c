#include <stdio.h>

int main() {
    float side, area;

    printf("Enter length of one side square: ");
    scanf("%f", &side);

    area = side * side;

    printf("Area of the square: %.2f", area);

    return 0;
}
