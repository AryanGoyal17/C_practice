//Calculating a^b using Loops

#include <stdio.h>

int main(){


    int a,b,i,result = 1;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    for(i = 1; i <= b; i++){

        result *= a;

    }

    printf("%d^%d = %d\n", a, b, result);



    return 0;
}