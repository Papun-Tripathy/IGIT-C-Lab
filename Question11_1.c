/*
A student is represented by the following attributes:
− Roll number (int)
− Name (string)
− Mark in subject 1 (float)
− Mark in subject 2 (float)
− Mark in subject 3 (float)
Write a program using structure to create data for 50 students and then find the total marks for each 
student and average mark of all students
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

struct Student{
    int rollNumber;
    char name[32];
    float sub1, sub2, sub3, total;
}students[50];

void main(){
    const int totalIteration = 50;
    float avg = 0;
    for(int i = 0; i < totalIteration; i++){
        students[i].total = 0;
        printf("--------------------------------------------\n");
        printf("Student-%d:\n", i+1);
        printf("--------------------------------------------\n");
        printf("Enter the roll number: ");
        scanf("%d", &students[i].rollNumber);
        getchar();
        printf("Enter The name:");
        gets(students[i].name);
        // scanf("%[^\n]s",str);
        printf("Enter marks of 3 Subjects: ");
        scanf("%f %f %f", &students[i].sub1, &students[i].sub2, &students[i].sub3);
        students[i].total = students[i].sub1 +students[i].sub2 + students[i].sub3;
        avg = avg + students[i].total;
    }
    avg = avg / 3;

    printf("Detail of Students :-");
    for (int i = 0; i < totalIteration; i++){
        printf("--------------------------------------------\n");
        printf("Student-%d:\n", i);
        printf("\nName: %s", students[i].name);
        printf("\nRoll number: %d", students[i].rollNumber);
        printf("\nSubject-1 marks: %f", students[i].sub1);
        printf("\nSubject-2 marks: %f", students[i].sub2);
        printf("\nSubject-3 marks: %f", students[i].sub3);
        printf("\nTotal marks: %f\n", students[i].total);
    }
    printf("--------------------------------------------\n");
    printf("Average of all The Students is: %f\n", avg);
    printf("--------------------------------------------\n");

    
}