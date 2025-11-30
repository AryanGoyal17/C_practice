//Printing n to 1 using Recursion

#include <stdio.h>

void print_n2one(int n);

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    print_n2one(n);

    return 0;
}

void print_n2one(int n){

    // printf("%d\n", print_n2one(n - 1)); //This line gives an error because tried to print a value from a 
                                           //function that doesn't return a value.

    printf("%d\n", n);
    if(n == 1){
        return;
    }
    else{
        print_n2one(n - 1);
    }
    
    
}