#include <stdio.h>

// Q18. Calculate person’s Annual salary.
int main() {

    float monthlySalary;
    printf("Enter the monthly salary: ");
    scanf("%f", &monthlySalary);
 
    float annualSalary = monthlySalary * 12;
    
    printf("Annual salary: %.2f\n", annualSalary);
    
    return 0;
}
