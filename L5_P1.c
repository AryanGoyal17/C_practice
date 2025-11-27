#include <stdio.h>

void england(){
    printf("Hello from England!\n");
    return;
}

void australia(){
    printf("Hello from Australia!\n");
    england();
    return;
}

void iceland(){
    printf("Hello from Iceland!\n");
    australia();
    return;
}

void india(){
    printf("Hello from India!\n");
    iceland();
    return;
}




int main(){

    
    india();
    
    return 0;
}

