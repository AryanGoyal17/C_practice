//For Square Root

#include <stdio.h>
#include <math.h>


int main(){

    int num;

    printf("Enter a no: ");
    scanf("%d", &num);

    double answer = sqrt(num); //Here square root is a system defined(library) function

    printf("Square root of %d is %lf\n", num, answer);

    return 0;
}