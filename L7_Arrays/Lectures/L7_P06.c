//Merging 2 arrays

#include <stdio.h>

int main(){

    int size1, size2;

    printf("Enter the size of 1st array: ");
    scanf("%d", &size1);

    printf("Enter the size of 2nd array: ");
    scanf("%d", &size2);

    int arr1[size1];
    int arr2[size2];
    int merged_Arr[size1 + size2];

    int i,j,k,l,m,n,o;

    //Entering the elements in array1 and array2 by taking input from the user

    printf("\nEnter the elements in array1-\n");
    for(i = 0; i < size1; i++){
        printf("Enter element number[%d]: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter the elements in array2-\n");
    for(j = 0; j < size2; j++){
        printf("Enter element number[%d]: ", j + 1);
        scanf("%d", &arr2[j]);
    }

    //Merging both the arrays

    //a-- Putting elements of array1 in merged array

    for(k = 0; k < size1; k++){
        merged_Arr[k] = arr1[k];
    }

    //b-- Putting elements of array2 in merged array

    for(l = 0; l < size2; l++){
        merged_Arr[l + size1] = arr2[l];
    }

    //Printing array1

    printf("\nArray-1: ");
    for(n = 0; n < size1; n++){
        printf("%d ", arr1[n]);
    }

    //Printing array2

    printf("\nArray-2: ");
    for(o = 0; o < size2; o++){
        printf("%d ", arr2[o]);
    }


    //Printing the merged array

    printf("\nMerged array: ");
    for(m = 0; m < (size1 + size2); m++){
        printf("%d ", merged_Arr[m]);
    }

    return 0;
}