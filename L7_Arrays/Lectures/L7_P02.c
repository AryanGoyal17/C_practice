//Lecture-7_question-02

//question -- Calculate the sum of all the elements in a given array..

#include <stdio.h>

int main(){

    int arr[4] = {10,20,30,40}, sum = 0, i;

    //Calculating the sum of elements of the given array

    for(i = 0; i < 4; i++){
        sum += arr[i];
    }

    printf("Sum of elements of the given array = %d\n", sum);

    return 0;
}