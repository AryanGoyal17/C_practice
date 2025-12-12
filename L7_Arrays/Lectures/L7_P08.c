//Linear Search

#include <stdio.h>

int main(){

    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = -1, val, i;

    printf("Enter the value you want to search for in the array: ");
    scanf("%d", &val);

    for(i = 0; i < size; i++){
        if(arr[i] == val){
            index = i;
            break;
        }
    }

    if(index == -1){
        printf("%d was not found in the array!!\n", val);
    }
    else{
        printf("%d was found at position = %d in the array!!\n", val, index + 1);
    }

    return 0;
}