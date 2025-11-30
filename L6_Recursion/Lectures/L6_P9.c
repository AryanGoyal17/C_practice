//Make a function which calculates 'a' raised to the power 'b' using Recursion

#include <stdio.h>
#include <math.h>

int a_pow_b(int a, int b);

int main(){

    int a,b;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    int result = a_pow_b(a, b);

    printf("%d^%d = %d\n", a, b, result);


    return 0;
}

int a_pow_b(int a, int b){

    if(b == 0) return 1; //base case
    int recAns =  a * a_pow_b(a, b - 1);
    return recAns;


}