#include <stdio.h>

int main() {
    float a, b, c, circumference;

    printf("Enter length of side a: ");
    scanf("%f", &a);
    printf("Enter length of side b: ");
    scanf("%f", &b);
    printf("Enter length of side c: ");
    scanf("%f", &c);

    circumference = a + b + c;

    printf("Circumference of triangle is: %.2f\n", circumference);

    return 0;
}
