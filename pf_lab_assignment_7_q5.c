
#include <stdio.h>

int main(){
    char sentences[3][100];
    int i, j;
    int vowels;
    printf("Enter 3 semicolon-separated sentences:\n");
    for (i=0; i<3; i++){
        if (i<2){
            scanf(" %[^;]%*c", sentences[i]);
        }
        else{
            scanf(" %[^\n]", sentences[i]);
        }
    }
    printf("\nSentence Analysis\n");
    for (i=0; i<3; i++){
        vowels = 0;
        for (j=0; sentences[i][j]!='\0'; j++){
            if (sentences[i][j]=='a' || sentences[i][j]=='e' ||
                sentences[i][j]=='i' || sentences[i][j]=='o' ||
                sentences[i][j]=='u' || sentences[i][j]=='A' ||
                sentences[i][j]=='E' || sentences[i][j]=='I' ||
                sentences[i][j]=='O' || sentences[i][j]=='U'){
                vowels++;
            }
        }
        printf("Sentence %d: %s\n", i+1, sentences[i]);
        printf("Vowels = %d\n\n", vowels);
    }
    return 0;
}