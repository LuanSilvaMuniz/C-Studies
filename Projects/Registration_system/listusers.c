#include <stdio.h>
#include "listusers.h"
#include "user.h"

extern struct user users[100];
extern int totalusers;

void listusers(){
    int i;

    if(totalusers == 0){
        printf("there is no users signed up!\n\n");
    } else {

    for(i = 0; i < totalusers; i++){
        printf("Id: %d\n", users[i].id);
        printf("Name: %s\n", users[i].name);
        printf("Email: %s\n", users[i].email);
        printf("Age: %d\n", users[i].age);
        printf("\n");
        }
    }
}