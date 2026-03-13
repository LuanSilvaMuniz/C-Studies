#include <string.h>
#include <stdio.h>
#include "signup.h"
#include "listusers.h"
#include "user.h"
#include "removeuser.h"
#include "locateuser.h"

struct user users[100];
int totalusers = 0;

int main() {

    int op;
    
    while(1){

        while(1){

            printf("\nMENU\n");
            printf("SingUp---------------1\n");
            printf("ListUsers------------2\n");
            printf("RemoveUser-----------3\n");
            printf("LocateUser-----------4\n");
            printf("Exit-----------------5\n");


            printf("Choose an option:");
                while(scanf("%d", &op) != 1){
                    printf("Invalid option! Try again:");
                    while(getchar() != '\n');
                    }
            if(op < 1){
                printf("Invalid option! Try again:");
            } else if(op > 5) {
                printf("Invalid option! Try again:");
            } else {
                break;
            }
        }

        switch(op) {
        case 1:
            printf("\nSignUp\n");
            signup();
            break;

        case 2:
            printf("\nListUsers\n");
            listusers();
            break;

        case 3:
            printf("\nRemoveUser\n");
            removeuser();
            break;

        case 4:
            printf("\nLocateUser\n");
            locateuser();
            break;

        case 5:
            printf("\nThanks!\n");
            return 0;    
        }
                
    }

    return 0;
}

