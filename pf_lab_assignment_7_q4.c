
#include <stdio.h>

int main(){
    char word_grid[3][100];
    char longest[100];
    int i, j, k;
    int length, max = 0;
    int row, col;
    int word_col;
    for (i=0; i<3; i++){
        printf("Enter row %d: ", i+1);
        scanf(" %[^\n]", word_grid[i]);
    }
    for (i=0; i<3; i++){
        j = 0;
        word_col = 0;
        while (word_grid[i][j] != '\0'){
            length = 0;
            char temp[100];
            while (word_grid[i][j] != ' ' && word_grid[i][j] != '\0'){
                temp[length] = word_grid[i][j];
                length++;
                j++;
            }
            temp[length] = '\0';
            if (length > max){
                max = length;
                for (k=0; k<=length; k++){
                    longest[k] = temp[k];
                }
                row = i;
                col = word_col;
            }
            if (word_grid[i][j] == ' '){
                j++;
                word_col++;
            }
        }
    }
    printf("\nLongest Word: %s", longest);
    printf("\nLength: %d", max);
    printf("\nRow Index: %d", row);
    printf("\nColumn Index: %d", col);
    return 0;
}