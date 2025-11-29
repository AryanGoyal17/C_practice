//Swapping 2 values using pointers

#include <stdio.h>

void swap(int* x, int* y);

int main(){

    int a = 1;
    int b = 2;

    printf("Before swapping:\n");
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    swap(&a, &b);

    printf("\nAfter swapping:\n");
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    return 0;
}

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return;
}