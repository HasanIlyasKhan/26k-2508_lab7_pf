#include <stdio.h>

int main(){
    char student_names[3][50];
    int marks[3][3];
    int i, j;
    float average;
    for (i=0; i<3; i++){
        printf("Enter full name of student %d: ", i+1);
        scanf(" %[^\n]", student_names[i]);

        printf("Enter marks of 3 subjects:\n");
        for (j=0; j<3; j++){
            printf("Subject %d: ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    printf("\nStudent Report\n");
    for (i=0; i<3; i++){
        average = (marks[i][0] + marks[i][1] + marks[i][2]) / 3.0;

        printf("Name: %s\n", student_names[i]);
        printf("Average: %.2f\n", average);
    }
    return 0;
}