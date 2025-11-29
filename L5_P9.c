//Double and triple pointers

#include <stdio.h>

int main(){

    int a = 25;

    int* p1 = &a;
    
    //Single pointer
    printf("Address of a = %p\n", p1);
    printf("Address of a = %p\n", &a);
    printf("Value of a = %d\n", *p1);
    printf("Address of pointer p1 = %p\n\n", &p1);




    //Double pointer

    // int* p2 = &p1;/// This gives an error.... 

    //For storing address of a int data type variable use int*
    //For storing address of a int* data type(pointer) variable use int**

    //Note: If you want to store the address of a pointer inside another pointer variable use double pointer

    int** p2 = &p1;

    printf("Address of pointer p1 = %p\n", p2);
    printf("Value of a = %d\n", **p2);
    // printf("Value of pointer p1 = %d\n", *p2); //As value of p1 is address of a use %p instead of %d
    printf("Value of pointer p1(Address of a) = %p\n", *p2); 
    printf("Address of pointer p2 = %p\n\n", &p2);



    
    //Triple pointer

    int*** p3 = &p2;

    printf("Address of pointer p2 = %p\n", p3);
    printf("Address of pointer p1 = %p\n", *p3);
    printf("Address of variable a = %p\n", **p3);
    printf("Value of variable a = %d\n", ***p3);

    ///Similarly we form int**** p4 and so on.......

    return 0;
}