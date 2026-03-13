#include <stdio.h>
#include "signup.h"
#include "user.h"

extern struct user users[100];
extern int totalusers;

void signup() {

    char name[100];
    char email[100];
    int age;
    int id;

    printf("Name: ");
    scanf("%s", users[totalusers].name);

    printf("Email: ");
    scanf("%s", users[totalusers].email);

    printf("Age: ");
    scanf("%d", &users[totalusers].age);

    users[totalusers].id = totalusers + 1001;

    printf("\nUser registered!\n");
    totalusers++;
}

