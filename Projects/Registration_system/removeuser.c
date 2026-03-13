#include <stdio.h>
#include "user.h"
#include "removeuser.h"

extern struct user users[100];
extern int totalusers;

void removeuser(){

    int i;
    int id;
    int pos = -1;
    
    if(totalusers == 0){
        printf("Theres is no users signed up!\n\n");
    } else { 
        
        printf("Which id do you want to remove?:");
        scanf("%d", &id);

        for(i = 0; i < totalusers; i++) {
            if(users[i].id == id){
            pos = i;
            break;
            }
        }

        if(pos == -1){
            printf("User not found!\n");
            return;
        }

        for(i = pos; i < totalusers - 1; i++){
            users[i] = users[i + 1];
        }
        
        totalusers--;
        printf("User removed\n");
    }
}