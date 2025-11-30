//Print sum from 1 to n (Without extra Parameter)

#include <stdio.h>

int sum_one2n(int n);

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int result = sum_one2n(n);

    printf("Sum from 1 to %d = %d\n", n , result);
    return 0;
}

int sum_one2n(int n){

    if(n == 1) return 1;
    return n + sum_one2n(n - 1);
}