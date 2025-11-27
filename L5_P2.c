//For Square Root

#include <stdio.h>
#include <math.h>


int main(){

    int a;

    printf("Enter a no: ");
    scanf("%d", &a);

    double answer = sqrt(a); //Here square root is a system defined(library) function

    printf("Square root of %d is %lf\n", a, answer);

    return 0;
}