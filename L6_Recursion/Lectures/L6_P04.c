//Printing 1 to n using Recursion(Using Extra Parameter)

#include <stdio.h>

void print_one2n(int n, int c);

int main(){

    int n, c = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    print_one2n(n,c);

    return 0;
}

void print_one2n(int n, int c){

    if(c > n) return;

    printf("%d\n", c);
    print_one2n(n, c + 1);
    return;
}