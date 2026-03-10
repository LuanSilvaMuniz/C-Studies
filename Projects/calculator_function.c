#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b) { 
    return a * b;
}

int divide(int a, int b){
    return a / b;
}

int main() {
    int a, b, op;
    char again;
    
    while(1) {

    printf("\nMENU\n");
    printf("\nAddition------------- 1\n");
    printf("Subtraction---------- 2\n");
    printf("Multiplication------- 3\n");
    printf("Division------------- 4\n");
    printf("Exit----------------- 5\n");

    printf("Choose one option:");
    
      while(1) {
        if(scanf(" %d", &op) != 1) {
            printf("Invalid answer, try again:");
            while(getchar() != '\n');
            continue;
            }
        if(op < 1 || op > 5) {
            printf("Invalid answer, try again:");
            while(getchar() != '\n');
            continue;
            } else {
                break;
            }
        } 

    switch(op) {

        case 1:
            printf("Choose two numbers:");
            while(scanf("%d %d", &a, &b) != 2) {
                printf("Invalid numbers!");
                while(getchar() != '\n');
            }

            printf("Result: %d\n", add(a, b));
            break;
        
        case 2:
            printf("Choose two numbers:");
            while(scanf("%d %d", &a, &b) != 2) {
                printf("Invalid numbers!");
                while(getchar() != '\n');
            }

            printf("Result %d\n", sub(a, b));
            break;

        case 3:
          printf("Choose two numbers:");
            while(scanf("%d %d", &a, &b) != 2) {
                printf("Invalid numbers!");
                while(getchar() != '\n');
            }

            printf("Result: %d\n", mult(a, b));
            break;

        case 4:
            while(1) {
            printf("Choose two numbers:");
            while(scanf("%d %d", &a, &b) != 2) {
                printf("Invalid numbers!");
                while(getchar() != '\n');
            }

            if(b == 0) {
                printf("You cannot divide by zero!\n");
                continue;
            }

            if(a % b == 0) {
                printf("Result:%d\n", divide(a, b));
                break;
            }   else {
                printf("The division is not a whole number!\n");
                continue;
                }
            }
            break;
        
        case 5:
            printf("Thanks for calculating!");
            return 0;
        }
        
        while(1){
        printf("Do you want to calculate again?(y/n)");
        scanf(" %c", &again);
       
        if(again == 'y' || again == 'Y'){
            break;
        }

        if(again == 'n' || again == 'N'){
            printf("Thanks for calculating!");
            return 0;
        }

        printf("Invalid answer!\n");
        while(getchar() != '\n');
        }
    }
    return 0;
}  
