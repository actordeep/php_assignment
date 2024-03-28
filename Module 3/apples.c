#include <stdio.h>

// Q12. Accept number of students from user. I need to give 5 apples to each 
// student. How many apples are required? 

int main() {
    int numStudents, totalApples;

    printf("Enter number of students: ");
    scanf("%d", &numStudents);

    totalApples = numStudents * 5;

    printf("Total apples required: %d\n", totalApples);

    return 0;
}
