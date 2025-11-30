//Printing sum from 1 to n using Loops

#include <stdio.h>

int main(){

    int n,i,sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i<=n; i++){

        sum += i;

    }

    printf("Sum from 1 to %d = %d\n", n , sum);


    return 0;
}