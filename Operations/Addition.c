#include <stdio.h>

int main() {
    int n01; // create variable 1
    int n02; // create variable 2

    printf("Let's add two numbers!\n");

    printf("Type one number:");
    scanf("%d", &n01); 

    printf("Type another number:");
    scanf("%d", &n02); 

    // add the two numbers the person typed

    printf("Result: %d", n01 + n02);
    return 0;
}

