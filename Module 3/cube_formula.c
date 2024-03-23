#include <stdio.h>

double cubeArea(double side) {
    return 6 * side * side;
}

int main() {
    double side, area;

    printf("Enter length of a side cube: ");
    scanf("%lf", &side);

    area = cubeArea(side);

    printf("Cube Area: %.2lf\n", area);

    return 0;
}
