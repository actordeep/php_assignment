#include <stdio.h>
#include <math.h>

// Q19. Calculate compound interest.
int main() {
    double principal, rate, time, compoundInterest;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time in years: ");
    scanf("%lf", &time);

    rate = rate / 100;

    compoundInterest = principal * (pow(1 + rate, time) - 1);

    printf("Compound interest = %.2lf\n", compoundInterest);

    return 0;
}
