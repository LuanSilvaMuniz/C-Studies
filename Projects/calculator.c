#include <stdio.h>

int main() {
    int operacao; 
    char again;

    while(1) {

    printf("\nMENU\n");
    printf("\nAddition------------- 1\n");
    printf("Subtraction---------- 2\n");
    printf("Multiplication------- 3\n");
    printf("Division------------- 4\n");
    printf("Exit----------------- 5\n");

    printf("\nChoose an operation! (1,2,3,4,5):\n");

    while(1) {
        if(scanf(" %d", &operacao) != 1) {
            printf("Invalid answer, try again:");
            while(getchar() != '\n');
            continue;
            }
        if(operacao < 1 || operacao > 5) {
            printf("Invalid answer, try again:");
            while(getchar() != '\n');
            continue;
            } else {
              break;
            }
        } 
        
    switch(operacao) {
        
        case 1: {
            int n1;
            int n2;

            printf("\nChoose two numbers:");
            scanf("%d %d", &n1, &n2);

            printf("\nResult: %d\n", n1 + n2);
            break;
        }

        case 2: {
            int n1;
            int n2;

            printf("\nChoose two numbers:");
            scanf("%d %d", &n1, &n2);

            printf("\nResult: %d\n", n1 - n2);
            break;
        }

        case 3: {
            int n1;
            int n2;

            printf("\nChoose two numbers:");
            scanf("%d %d", &n1, &n2);

            printf("\nResult: %d\n", n1 * n2);
            break;
        }
        
        case 4: {

            int n1;
            int n2;

            while(1) {

                printf("Choose the first number:");
                while(scanf(" %d", &n1) != 1) {
                    printf("Invalid number, type again:\n");
                    while(getchar() != '\n');
                }

                  printf("Choose the second number:");
                while(scanf(" %d", &n2) != 1) {
                    printf("Invalid number, type again:\n");
                    while(getchar() != '\n');
                }

                if(n2 == 0) {
                    printf("You cannot divide by zero! Try again!\n");
                    continue;
                } 

                if(n1 % n2 == 0) {
                    printf("Result: %d\n", n1 / n2);
                    break;
                } else {
                    printf("The division is not a whole number! Try again!\n");
                    continue;
                }
            }
            break;
        }

        case 5:
            printf("Thanks for calculating!\n");
            return 0;

        }

        while(1){
        printf("Do you want do calculate again?(y/n):");
        scanf(" %c", &again);

        if(again == 'n' || again == 'N') {
            printf("Thanks for calculating!\n");
            return 0;
        } 
        
        if(again == 'y' || again == 'Y') {
            break;
        } 

        printf("Invalid answer! Try again!\n");
        while(getchar() != '\n');      
    }
    
}
        return 0;
}
    


