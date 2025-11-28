//Printing Pascal Triangle without using nCr function

#include <stdio.h>

void PascalTriangle(int n);

int main(){

    int n;
    printf("Enter the number of rows of Pascal Triangle you want: ");
    scanf("%d", &n);

    PascalTriangle(n);
    
    return 0;
}

void PascalTriangle(int n){

    int i,j;

    

    for(i = 0; i < n; i++){

        int first = 1;

        for(j = 0; j <= i ; j++){

            
            printf("%d ", first);
            // first = first * ((i - j)/(j + 1)); //Mistake--- In this line, integer division happens...
                                                  //so for example if i = 2, j = 1,... then i-j/ j+1 gives 1/2 which is
                                                  //treated as 0 due to integer division


            first = first * (i-j) / (j+1); ///This is correct as here first multiplication happens

        }
        printf("\n");
    }
}