//Calculate nth Fibonacci number using Recursion

#include <stdio.h>

int fibonacci(int n);

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int result = fibonacci(n);

    printf("%dth term of fibonacci series is %d\n", n, result);
    
    return 0;
}

int fibonacci(int n){

    if(n == 1 || n == 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}