//Calculating nCr using functions...

#include <stdio.h>

int factorial(int num);

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int r;
    printf("Enter r: ");
    scanf("%d", &r);

    int n_fact = factorial(n);
    int r_fact = factorial(r);
    int nr_fact = factorial(n - r);

    int nCr = (n_fact)/(r_fact * nr_fact);

    printf("Answer = %d\n", nCr);

    return 0;
}

int factorial(int num){

    int fact = 1, i;

    for(i = 2; i <= num; i++){
        fact*=i;
    }

    return fact;

}