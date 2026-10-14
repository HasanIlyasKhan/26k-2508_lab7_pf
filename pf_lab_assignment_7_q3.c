#include <stdio.h>

int main(){
    char secret_messages[3][100];
    int i, j;
    int spaces, words;
    for (i=0; i<3; i++){
        printf("Enter message %d: ", i+1);
        scanf(" %[A-Z ]", secret_messages[i]);
    }
    printf("\nFiltered Messages\n");
    for (i=0; i<3; i++){
        spaces = 0;
        words = 1;
        for (j=0; secret_messages[i][j]!='\0'; j++){
            if (secret_messages[i][j]==' '){
                spaces++;
                words++;
            }
        }
        printf("Message %d: %s\n", i+1, secret_messages[i]);
        printf("Spaces: %d\n", spaces);
        printf("Words: %d\n\n", words);
    }
    return 0;
}