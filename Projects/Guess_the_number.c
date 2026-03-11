#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int guess, number;
    char again;
    
    srand(time(NULL));

    while(1){

    number = rand() % 100 + 1;

    while(1) {

        printf("Type one number:");
        while(scanf("%d", &guess) != 1){
            printf("Invalid answer! Try again:");
            while(getchar() != '\n');
        }

        if(guess < number){
            printf("Too low!\n");
            continue;
        }
        if(guess > number){
            printf("Too high!\n");
            continue;
        } else {
            printf("you won!\n");
            printf("The number was: %d\n", number);
            break;
            }
        }

        while(1){

        printf("Do you want to play again?(y/n)");
        scanf(" %c", &again);
       
        if(again == 'y' || again == 'Y'){
            break;
        }

        if(again == 'n' || again == 'N'){
            printf("Thanks for playing!");
            return 0;
        }

        printf("Invalid answer!\n");
        while(getchar() != '\n');

        }
    }

    return 0;
}
