    #include <stdio.h>
    #include <string.h>

    int main() {
        char word[] = "learning";
        char underline[50];
        char letter;
        char used[26];
        int size = strlen(word);
        int correct;
        int attempts = 6;
        int i;
        int used_count = 0;
        int already_used;

        for(i = 0; i < size; i++){
            underline[i] = '_';
        }
        underline[size] = '\0';

        while(1) {

            correct = 0;
            already_used = 0;

            printf("%s\n", underline);
            printf("Remaining attemps: %d\n", attempts);

            printf("Used letters:");
            for(i = 0; i < used_count; i++){
            printf(" %c", used[i]);
            }  
        
            printf("\nType one letter:");
            
            scanf(" %c", &letter);

            for(i = 0; i < used_count; i++){
                if(used[i] == letter){
                already_used = 1;
                }
            }

            if(already_used == 1){
                printf("Letter already used!\n");
                continue;
            }

            used[used_count] = letter;
            used_count++;

            for(i = 0; i < size; i++){
                if(word[i] == letter){
                    underline[i] = letter;
                    correct = 1;
                }
            }
           
            if(correct != 1){
                printf("Wrong letter!\n");
                attempts--;
            }

            if(strcmp(word, underline) == 0) {
                printf("You won!\n");
                printf("The word was: %s", word);
                break;
            }

            if(attempts == 0){
                printf("You lost!");
                printf("The word was: %s", word);
                break;         
            }

            printf("\n");
        }

        return 0;
    }
