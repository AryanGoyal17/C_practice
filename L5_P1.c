#include <stdio.h>

void england();
void australia();
void iceland();
void india();



int main(){

    india();
    
    return 0;
}

void england(){
    printf("Hello from England!\n");
    return;
}

void australia(){
    printf("Hello from Australia!\n");
    england();
}

void iceland(){
    printf("Hello from Iceland!\n");
    australia();
}

void india(){
    printf("Hello from India!\n");
    iceland();
}