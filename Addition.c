#include <stdio.h>

int main() {
    int number01; // create variable 1
    int number02; // create variable 2

    printf("Let's add two numbers!\n");

    printf("Type one number:");
    scanf("%d", &number01); 

    printf("Type another number:");
    scanf("%d", &number02); 

    // add the two numbers the person typed

    printf("Result: %d", number01 + number02);
    return 0;
}