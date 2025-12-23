#include <stdio.h>

int main(){

//Printing the address of a variable by &(address of) operator

int a = 5;
printf("Address of a = %p\n", &a);

//Printing the address of a variable by storing the address inside a pointer variable(p1)

int b = 10;

int* p1 = &b;
printf("Address of b = %p\n", p1);

//Printing the address of pointer variable(p1)

printf("Address of pointer variable(p1) = %p\n", &p1);

//Printing the address of a variable by using pointer(p2).. and declaring the pointer variable first

int c = 7;

int* p2;
p2 = &c;

printf("Address of c = %p\n", p2);

//Printing the value of a variable using pointer(p3)

char grade = 'A';
char* p3 = &grade;

printf("The grade is %c\n", *p3);

//Updating the value of a variable(grade) using pointer(p3)


*p3 = 'B';
printf("The grade is %c\n", *p3);

    return 0;
}