//q1
//First print n to 1 and then print 1 to n

#include <stdio.h>

void homework_rec(int n);

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    homework_rec(n);

    return 0;
}

void homework_rec(int n){

    if(n == 0) return;// base case

    printf("%d\n", n);
    homework_rec(n - 1);
    printf("%d\n", n);
    return;
}