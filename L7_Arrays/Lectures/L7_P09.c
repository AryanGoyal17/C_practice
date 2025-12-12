//Binary Search

#include <stdio.h>

int main(){

    int arr[10] = {10,40,60,70,80,20,30,50,100,90};

    int size = (sizeof(arr) / sizeof(arr[0]));

    int low = 0, high = size - 1, val;

    printf("Enter the value you want to search for in the array: ");
    scanf("%d", &val);

//Case1: Array is sorted in ascending order

    int i,j;

    for(i = 0; i < size; i++){
        for(j = 0; j < size - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array(in ascending order): ");
    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    printf("\n\n");
    
    while(low <= high){

        int mid = ((low + high) / 2);

        if(val == arr[mid]){
            printf("%d was found at the position %d!!\n", val, mid + 1);
            return 0;
        }
        else if(val > arr[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

printf("%d was not found in the array!!\n", val);

//Case2: Array is sorted in descending order

/// if(val > arr[mid]){ high = mid - 1} and in else it would low = mid + 1;

    return 0;
}