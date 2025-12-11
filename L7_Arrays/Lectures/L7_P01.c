//Lecture-7_question-01

//Given an array consisting of marks of 10 students, print the roll number of the students whose marks < 35..
//roll number = index in array

#include <stdio.h>

int main(){

    //The code below is for the case if the number of students in class is not given and the array is also not given , i.e;
    //we have to take input from the user

    //NOTE:
    //For correct answer of the exact question mentioned above... int marks[10] = {10 int values which are given to us} and
    //then write code of for loop using j as initialization variable

    int num_Student;

    printf("Enter the number of students in the class: ");
    scanf("%d", &num_Student);

    int marks[num_Student],i,j,k;

    printf("\n");
    for(i = 0; i < num_Student; i++){
        printf("Enter the marks of student[%d]: ", i);
        scanf("%d", &marks[i]);
    }

    //Printing the roll number(s) of students whose marks are less than 35

    printf("\nRoll number(s) of students whose marks are less than 35-\n");

    for(j = 0; j < num_Student; j++){
        if(marks[j] < 35){
            printf("Roll number: %d\n", j);
        }
    }

    return 0;
}