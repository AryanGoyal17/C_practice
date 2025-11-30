//Printing "Good Morning" n times using Recursion

#include <stdio.h>

void print_nTimes(int n);

int main(){

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    print_nTimes(n);

    return 0;
}

void print_nTimes(int n){

    // printf("Good Morning\n");

    // if(n == 1){
    //     return;
    // }
    // else{
    //     print_nTimes(n - 1);
    // }

//The commented code above is also correct...

    if(n == 0) return;

    printf("Good Morning\n");
    print_nTimes(n - 1);
}