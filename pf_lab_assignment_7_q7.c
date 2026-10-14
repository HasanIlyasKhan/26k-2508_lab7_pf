
#include <stdio.h>

int main(){
    float sensor_data[3][4];
    int i, j;
    int index;
    printf("Enter temperature readings:\n");
    for (i=0; i<3; i++){
        for (j=0; j<4; j++){
            printf("Day %d Sensor %d: ", i, j);
            scanf("%f", &sensor_data[i][j]);
        }
    }
    printf("Enter column index to delete (0-3): ");
    scanf("%d", &index);
    for (i=0; i<3; i++){
        for (j=index; j<3; j++){
            sensor_data[i][j] = sensor_data[i][j+1];
        }
    }
    printf("\nUpdated 3x3 Matrix:\n");
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            printf("%.2f ", sensor_data[i][j]);
        }
        printf("\n");
    }
    return 0;
}