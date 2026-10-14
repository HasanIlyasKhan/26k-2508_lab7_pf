
#include <stdio.h>

int main(){
    int shifts[4][3];
    int new_row[3];
    int i, j, index;
    printf("Enter the 3x3 production data:\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("Row %d Column %d: ", i, j);
            scanf("%d", &shifts[i][j]);
        }
    }
    printf("Enter row index for insertion (0-3): ");
    scanf("%d", &index);
    printf("Enter 3 values for the new row:\n");
    for (j=0; j<3; j++){
        scanf("%d", &new_row[j]);
    }
    for (i=2; i>=index; i--){
        for (j=0; j<3; j++){
            shifts[i+1][j] = shifts[i][j];
        }
    }
    for (j=0; j<3; j++){
        shifts[index][j] = new_row[j];
    }
    printf("\nUpdated 4x3 Matrix:\n");
    for (i=0; i<4; i++){
        for (j=0; j<3; j++){
            printf("%d ", shifts[i][j]);
        }
        printf("\n");
    }
    return 0;
}