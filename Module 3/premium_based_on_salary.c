#include <stdio.h>

// Q17. premium based on salary.

int main() {
    float salary, premium;

    printf("Enter your salary: ");
    scanf("%f", &salary);

    if (salary < 5000) {
        premium = 0.02 * salary; 
    } else if (salary >= 5000 && salary < 10000) {
        premium = 0.03 * salary;  
    } else {
        premium = 0.05 * salary;  
    }

    printf("Your insurance premium is: %.2f\n", premium);

    return 0;
}
