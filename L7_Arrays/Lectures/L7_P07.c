//Sorting the array elements(Bubble Sort Algorithm)

#include <stdio.h>

int main(){

    int arr[10] = {10,40,30,20,90,100,60,50,80,70}, i, j;

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array before sorting: ");
    for(int k = 0; k < size; k++){
        printf("%d ", arr[k]);
    }
    

    //Ascending Order
    for(i = 0; i < size; i++){
        for(j = 0; j < size - 1 - i; j++){
        if(arr[j] > arr[j + 1]){
            int temp1 = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp1;
        }
      }
    }

    printf("\nArray after sorting(ascending order): ");
    for(int k = 0; k < size; k++){
        printf("%d ", arr[k]);
    }

    //Descending Order
    for(i = 0; i < size; i++){
        for(j = 0; j < size - 1 - i; j++){

            if(arr[j] < arr[j + 1]){
            int temp2 = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp2;

            }
        }
    }
    printf("\nArray after sorting(descending order): ");
    for(int k = 0; k < size; k++){
        printf("%d ", arr[k]);
    }

    return 0;
}