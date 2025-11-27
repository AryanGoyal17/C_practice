//Printing Pascal's triangle using functions...

#include <stdio.h>

int factorial(int num);
int answer(int n, int r);
void Pascal_Triangle(int num_Row);

int main(){

    int num_Row;
    printf("Enter the number of rows of Pascal Triangle you want: ");
    scanf("%d", &num_Row);

    Pascal_Triangle(num_Row);

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

void Pascal_Triangle(int num_Row){
    
    int i,j;
    for(i = 0; i < num_Row; i++){
        for(j = 0; j <= i; j++){
            printf("%d ", answer(i,j));
        }
        printf("\n");
    }
}