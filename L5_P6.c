//A-- Swapping using temp
//B-- Swapping without using temp

#include <stdio.h>

int main(){

    //A

    int a = 1;
    int b = 2;

    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Swapping with temp:\n");
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n\n", b);

    //B

    int c = 1;
    int d = 2;

    c = c + d;
    d = c - d;
    c = c - d;

    printf("Swapping without temp:\n");
    printf("The value of c is %d\n", c);
    printf("The value of d is %d\n", d);

    return 0;
}