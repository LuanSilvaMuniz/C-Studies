#include <stdio.h>

#define MAX 10

int queue[MAX];
int start = 0;
int end = 0;
int size = 0;

void enqueue(){

    if(size == 10){
        printf("The queue is full!\n");
        return;
    }

    int value;
    printf("Type a number:");
    scanf("%d", &value);

    queue[end] = value;
    end = (end + 1) % MAX;
    
    size++;

}

void delete(){

    if(size == 0){
        printf("Queue is empty!\n");
        return;
    }

    printf("Removed %d\n", queue[start]);

    start = (start + 1) % MAX;
    size--;

}

void show(){ 
    if(size == 0){
        printf("Queue is empty!\n");
        return;
    }

    int i;
    int list = start;

    printf("Queue!\n");

    for(i = 0; i < size; i++){
        printf("%d\n", queue[list]);
        list = (list + 1) % MAX;
    }

    printf("\n");

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
            enqueue();
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
            printf("Invalid option!");
        }

    }

    return 0;
}
