#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int size = 10;
    int list[size];
    
    printf("Type %d numbers:", size);
    
    for(int i = 0; i < size; i++){
        scanf("%d", &list[i]);
    }
    
    printf("\nYour list is: ");
    
    for(int i = 0; i < size; i++){
        if(i == size - 1){
            printf("%d.", list[i]);
        } else {
            printf("%d, ", list[i]);
        }
    }
    
    while(1){
        
        bool change = false;
        
        for(int i = 0; i < size - 1; i++){

            if(list[i] > list[i + 1]){
                
                int store = list[i + 1];
                list[i + 1] = list[i];
                list[i] = store;
                change = true;
            }
        }
        
        if(change == false) break;
    }
    
    printf("\nYour sorted list is: ");
    printf("\n");
    
    for(int i = 0; i < size; i++){
        if(i == size - 1){
            printf("%d.", list[i]);
        } else {
            printf("%d, ", list[i]);
        }
    }
}
