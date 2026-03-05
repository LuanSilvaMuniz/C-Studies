#include <stdio.h>

int main() {
    int n1, n2;  
    int divint;  // create a variable to check if the division is an integer

    while(1) { 
        printf("Type the first number:");
        while(scanf("%d", &n1) != 1) { // Checks if you typed a valid number
            printf("Invalid number, type again:");
            while (getchar() != '\n');
        }   

        printf("Type the second number:");
        while(scanf("%d", &n2) != 1) { // Checks if you typed a valid number
            printf("Invalid number, type again:");
            while (getchar() != '\n');
        }

        if (n2 == 0) {  // checks if n2 equals 0
            printf("You cannot divide by zero, try again!\n");
            continue;
        }

        if (n1 % n2 == 0) {    // checks if n1 / n2 equals an integer
            divint = 1;
        } else {
            divint = 0;
        }

        if (divint == 1) {  // if n1 / n2 results in an integer show result and break
            printf("Result: %d", n1 / n2);
            break;
        } else {  // else restart the loop
        printf("The division is not a whole number, try again!\n");
        }
    }
    return 0;

}
