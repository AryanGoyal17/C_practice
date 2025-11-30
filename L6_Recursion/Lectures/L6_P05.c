//Printing 1 to n using Recursion(Without using extra parameter)

#include <stdio.h>

void print_one2n(int n);

int main(){

    int n, c = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    print_one2n(n);

    return 0;
}

void print_one2n(int n){

    if(n == 0) return;

    print_one2n(n - 1);
    printf("%d\n", n);
    return;


}