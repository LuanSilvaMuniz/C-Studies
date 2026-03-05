#include <stdio.h>

int main() {
    int n1, n2;
    int divint;

    while(1) {
        printf("Type the first number:");
        while(scanf("%d", &n1) != 1) {
            printf("Invalid number, type again:");
            while (getchar() != '\n');
        }   

        printf("Type the second number:");
        while(scanf("%d", &n2) != 1) {
            printf("Invalid number, type again:");
            while (getchar() != '\n');
        }

        if (n2 == 0) {
            printf("You cannot divide by zero, try again!\n");
            continue;
        }

        if (n1 % n2 == 0) {
            divint = 1;
        } else {
            divint = 0;
        }

        if (divint == 1) {
            printf("Result: %d", n1 / n2);
            break;
        } else {
        printf("The division is not a whole number, try again!\n");
        }
    }
    return 0;
}