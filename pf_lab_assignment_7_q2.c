
#include <stdio.h>

int main(){
    char logs[3][3][30];
    int i, j, k;
    int count = 0;

    for (i=0; i<3; i++){
        printf("Enter CSV log entry %d: ", i+1);
        scanf(" %[^,],%[^,],%[^\n]", logs[i][0], logs[i][1], logs[i][2]);
    }

    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            for (k=0; logs[i][j][k]!='\0'; k++){
                if (logs[i][j][k]>='A' && logs[i][j][k]<='Z'){
                    count++;
                }
            }
        }
    }

    printf("\nTotal uppercase letters = %d", count);

    return 0;
}