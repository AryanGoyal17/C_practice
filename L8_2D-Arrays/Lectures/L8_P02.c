//Taking input from user in a 2-D array and then printing it

#include <stdio.h>

int main(){

    int arr1[2][3];

    int i,j;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("Enter the element of matrix(row: %d)(column: %d): ", i + 1, j + 1);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n\n2-D matrix--\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}