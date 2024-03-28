#include <stdio.h>

// Q 15. Convert school’s name in abbreviated form .

int main() {

    char schoolName[] = "Deep School";

    char abbreviation[5];

    int i, j = 0;
    abbreviation[j++] = schoolName[0];
    for (i = 1; schoolName[i] != '\0'; i++) {
        if (schoolName[i - 1] == ' ' && schoolName[i] != ' ') {
            abbreviation[j++] = schoolName[i]; 
        }
    }
    abbreviation[j] = '\0';

    printf("Abbreviation: %s\n", abbreviation);

    return 0;
}
