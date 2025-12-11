//Finding the maximum value out of all the elements in the array

#include <stdio.h>

int main(){

    int arr[5] = {10,20,13,11,43}, i;

    int max = arr[0]; //Another approach of using limits.h header file and INT_MAX, INT_MIN is in homework q2..

    for(i = 0; i < 5; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    printf("Maximum value out of all the elements in the array: %d\n", max);

    return 0;
}