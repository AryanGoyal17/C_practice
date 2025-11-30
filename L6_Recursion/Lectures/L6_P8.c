//Printing sum from 1 to n(Parameterized way)

#include <stdio.h>

void sum_one2n(int n, int sum, int D);

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int D = n;

   sum_one2n(n, 0, D);

    return 0;
}

void sum_one2n(int n, int sum, int D){

    if(n == 0){
        printf("Sum from 1 to %d = %d\n",D ,sum);
        return;
    }

    sum_one2n(n - 1, sum + n, D);
    return;


}