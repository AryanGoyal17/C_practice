//Calculating nCr using functions...

#include <stdio.h>

int factorial(int num);
int answer(int n, int r);

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int r;
    printf("Enter r: ");
    scanf("%d", &r);



    int nCr = answer(n,r);

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

int answer(int n, int r){
    
    int NCR = (factorial(n))/ (factorial(r) * factorial(n - r));
    return NCR;
}