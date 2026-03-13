#include <stdio.h>
#include <string.h>
#include "user.h"
#include "locateuser.h"

extern struct user users[100];
extern int totalusers;

void locateuser(){
    char name[50];
    int i;
    int found = 0;

    if(totalusers == 0){
        printf("There's no users signed up!\n");
        return;
    }

    printf("Wich user do you want to locate?:");
    scanf("%s", name);

    for(i = 0; i < totalusers; i++){
        if(strcmp(users[i].name, name) == 0){

            printf("Id: %d\n", users[i].id);
            printf("Name: %s\n", users[i].name);
            printf("Email: %s\n", users[i].email);
            printf("Age: %d\n", users[i].age);
            printf("\n");
            
            found = 1;
            break;
        }
    }

    if(!found){
            printf("User not found!\n");
            return;
        }
}