//Calculating factorial using Recursion

#include <stdio.h>

int factorial(int num);

int main(){

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = factorial(num);

    printf("Factorial of %d is %d\n", num, result);

    return 0;
}

int factorial(int num){

    // return num*factorial(num - 1); //Writing only this 1 return statement inside function is incorrect as here there
                                      //is no base case..
    
    if(num == 1 || num == 0) return 1;//base case
    return num * factorial(num - 1);
}