#include <stdio.h>
#define MAX 10

int pilha[MAX];
int end = 0;

void add(){

     if(end == MAX){
        printf("The stack is already full!\n");
        return;   
    } 

    int value;

    printf("Type a number:\n");
    scanf("%d", &value);

    pilha[end] = value;
    end++;

}

void delete(){

    if(end == 0){
        printf("The stack is already empty!\n");
        return;   
    }

    printf("Removed: %d\n", pilha[end - 1]);
    end--;
}

void show(){
    if(end == 0){
        printf("The stack is empty!\n");
        return;
    }

    int i;
    printf("STACK:\n");
    for(i = end - 1; i >= 0; i--){
        printf("%d\n", pilha[i]);
    }
}


int main(){

    int op;

    while(1){

        printf("MENU\n");
        printf("Add----------1\n");
        printf("Remove-------2\n");
        printf("Show---------3\n");
        printf("Exit---------4\n");

        printf("Choose an option:");
        scanf("%d", &op);

        switch(op){
        case 1:
            add();
            break;
        
        case 2:
            delete();
            break;

        case 3:
            show();
            break;
        
        case 4:
            return 0;

        default:
            printf("Invalid option!\n");
        }

    }

    return 0;
}
