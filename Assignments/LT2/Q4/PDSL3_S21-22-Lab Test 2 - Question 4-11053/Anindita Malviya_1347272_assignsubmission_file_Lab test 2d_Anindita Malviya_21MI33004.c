/*
Anindita Malviya
21MI33004
Section3
Code blocks
Question 4
*/

#include <stdio.h>
#define MAX 10        // defining max no. of students that can be entered

typedef struct
{
    char name[20];            //Declaring Student structure
    char gender[4];
    float marks;
}
Student;

Student students[MAX];       // An array of student details

void best_student(int x);     //a function written later in program

int main()
{
    int n;
    printf("Enter the no. of students: ");     //prompting user for no. of students
    scanf("%d",&n);
    printf("Enter the student details: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %f",&students[i].name,&students[i].gender,&students[i].marks);       //Prompting for details
    }
    printf("Printing the student records...\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s %s %0.2f\n",students[i].name,students[i].gender,students[i].marks);     //Printing the details
    }

    best_student(n);
}

void best_student(int x)                  //function to find the best student
{
    int max = students[0].marks;
    Student temp = students[0];
    for (int i = 0; i < x; i++)
    {
        if(max <= students[i].marks)
        {
            max = students[i].marks;
            temp = students[i];
        }
    }
    printf("Best %s student: %s\n",temp.gender,temp.name);
    return;
}


