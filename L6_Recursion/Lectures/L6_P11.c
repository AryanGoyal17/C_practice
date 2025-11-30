//Calculate nth Fibonacci number using Loops

#include <stdio.h>

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a = 1;
    int b = 1;
    int sum,i;

    if(n == 1 || n == 2){
        printf("Term(%d) of fibonacci series is 1\n", n);
        return 0;
    }

    for(i = 3; i <= n; i++){

        sum = a + b;
        a = b;
        b = sum;
          

    }

    printf("Term(%d) of fibonacci series is %d\n", n, sum);

    return 0;
}