//Finding the minimum value out of all the elements in the array

#include <stdio.h>
#include <limits.h>

int main(){

    int arr[6] = {11,13,17,18,2,2}, i;
    
    // int min = arr[0]; //METHOD-1

    //METHOD-2 using <limits.h>

    int min = INT_MAX;

    for(i = 0; i < 6; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    printf("The minimum value out of all the elements in the array = %d\n", min);

    return 0;
}