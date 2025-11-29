//Double and triple pointers

#include <stdio.h>

int main(){

    int a = 2;

    int* p1 = &a;
    int** p2 = &p1;
    int*** p3 = &p2;

    printf("Value of a = %d\n", *p1);
    printf("Value of a = %d\n", **p2);
    printf("Value of a = %d\n", ***p3);



    return 0;
}