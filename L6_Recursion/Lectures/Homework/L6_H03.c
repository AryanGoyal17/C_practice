//Stair path question(3 jumps max)

#include <stdio.h>

int stair_path(int n);

int main(){

    int n; 

    printf("Enter the number of stair you want to jump to finally: ");
    scanf("%d", &n);

    int result = stair_path(n);

    printf("Total number of ways to jump from ground to stair no(%d) are %d\n", n, result);

    return 0;
}

int stair_path(int n){

    if(n == 1 || n == 2) return n;
    if(n == 3) return 4;
    return stair_path(n - 1) + stair_path(n - 2) + stair_path(n - 3);
}