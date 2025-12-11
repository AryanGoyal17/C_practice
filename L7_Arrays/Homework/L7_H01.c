//Lecture-7_Home-Work-question-01

//question -- Calculate the product of all the elements in a given array

#include <stdio.h>

int main(){

    int arr[5] = {1,2,3,6,5},product = 1, i;

    for(i = 0; i < 5; i++){
        product *= arr[i];
    }

    printf("Product of all the elements in a given array = %d\n", product);

    return 0;
}