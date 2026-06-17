#include <stdio.h>
#include <stdbool.h>

int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

int matriz_binary[3][3];

int nplays = 0;

void print_game(){
    
     for(int i = 0; i < 3; i++){
        printf("linha %d:  ", i + 1);
        
        for(int j = 0; j < 3; j++){
            if(matriz_binary[i][j] == -1){
                printf("X ");
            }
            if(matriz_binary[i][j] == -2){
                printf("O ");
            } 
            if(matriz_binary[i][j] != -2 && matriz_binary[i][j] != -1){
                printf("%d ", matriz[i][j]);
            }
            
            }
          printf("\n");
        }
        
}

bool verify(){
    
    for(int i = 0; i < 3; i++){
        if( matriz_binary[i][0] != 0 &&
            matriz_binary[i][0] == matriz_binary[i][1] && 
            matriz_binary[i][1] == matriz_binary[i][2]) {
            return true;
        }
    }
    
    for(int i = 0; i < 3; i++){
        if(matriz_binary[0][i] != 0 && 
            matriz_binary[0][i] == matriz_binary[1][i] && 
            matriz_binary[1][i] == matriz_binary[2][i]) {
            return true;
        }
    }

    if( matriz_binary[0][0] != 0 &&
        matriz_binary[0][0] == matriz_binary[1][1] &&
        matriz_binary[1][1] == matriz_binary[2][2]){
        return true;
        }
    
    if( matriz_binary[0][2] != 0 &&
        matriz_binary[0][2] == matriz_binary[1][1] &&
        matriz_binary[1][1] == matriz_binary[2][0]){
        return true;
        }
    
    return false;
}


bool plays(){

    int play1;
    int play2;

    while(1){
        
    printf("\n");
    print_game();

    printf("P1 choose a spot:");
    scanf("%d", &play1);

        int verify = 0;
    
    if(play1 > 0 && play1 < 10){
            
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if(matriz[i][j] == play1){
                        if(matriz_binary[i][j] == -1 || matriz_binary[i][j] == -2){
                            verify = 1;
                        }
                    }
                }
            }

            if(verify == 1){
                printf("already taken!\n");
                continue;
        }

            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if(matriz[i][j] == play1){
                    matriz_binary[i][j] = -1;
                    }
                }
            } 
            break;
        } else {
            printf("Number not allowed!");
        }
    }
 
    if(verify()){
        printf("\nplayer 1 won!\n");
        return false;
    }

    nplays++;

    if(nplays == 9){
        printf("\nDRAW!\n");
        return false;
    }
    
    while(1){

    printf("\n");
    print_game();
    
    printf("\nP2 choose a spot:");
    scanf("%d", &play2);

    if(play2 > 0 && play2 < 10){

            int verify = 0;

            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if(matriz[i][j] == play2){
                        if(matriz_binary[i][j] == -1 || matriz_binary[i][j] == -2){
                            verify = 1;
                        }
                    }
                }
            }

            if(verify == 1){
                printf("already taken!\n");
                continue;
            } 

            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    if(matriz[i][j] == play2){
                        matriz_binary[i][j] = -2;
                    }
                }
            }

            break;
        } else {
            printf("Number not allowed!");
        }
    }

    if(verify()){
        printf("\nplayer 2 won!\n");
        return false;
    }

    nplays++;

    if(nplays == 9){
        printf("\nDRAW!\n");
        return false;
    }

    return true;

}

int main(){

    while(plays());

    print_game();

    return 0;
}
