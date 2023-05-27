/*
* Section 2
* Roll No : 22MA10067
* Name : Utkarsh
* Assignment No : 8
* Description : Program to read students data and print accordingly
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct Class {
     char RollNo[10];
     float marks[3];
     float total;
}student;


int main()
{
    int n;
    student *s,temp;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    printf("Enter the data of %d students: \n",n);
    s = (student *)malloc(n * sizeof(student));

    for (int i=0;i<n;i++){
        printf("Student no. %d: ", i+1);
        scanf("%s%f%f%f", &(s[i]).RollNo,&(s[i]).marks[0],&(s[i]).marks[1],&(s[i]).marks[2]);
        printf("\n");

    }
    printf("Student Records:\n");
    for (int i=0;i<n;i++){
        printf("Student %d:\n",i+1);
        printf("Roll No: %s\n", s[i].RollNo);
        printf("Marks: %0.2f %0.2f %0.2f\n", s[i].marks[0],s[i].marks[1],s[i].marks[2]);
        s[i].total=s[i].marks[0]+s[i].marks[1]+s[i].marks[2];
        printf("Total: %f", s[i].marks[0]+s[i].marks[1]+s[i].marks[2]);
        printf("\n\n");}


    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (s[i].total<s[j].total){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }}


    printf("\nSorted Student Records:\n");
    for (int L=0;L<n;L++){
        printf("Roll No: %s\n", s[L].RollNo);
        printf("Marks: %0.2f  %0.2f  %0.2f\n", s[L].marks[0],s[L].marks[1],s[L].marks[2]);
        printf("Total: %f", s[L].total);
        printf("\n\n");}

    return 0;

}
