/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include<stdio.h>

#define MAX 1000//assigning MAX = 1000

int main(void)
{
    //declaration
    int i,n, m;
    float high;

    char c, girl;


    // declaration of structure
    struct student{
             char name[20];
             char gender[10];
             float marks;
    }student[MAX];


        //Enter the number of students.
    printf("Enter the number of Students : ");
    scanf("%d", &n);

    // Enter the student details in rows.

    printf("Enter the student details: \n");/*Enter the student name
     without  space between first name and last name*/

    for (i=0;i<n;i++)
    {
        scanf("%s %s %f", student[i].name, student[i].gender, &student[i].marks);
    }

    for(i=0;i<n;i++)
    {
        printf("%s %s -%f\n", student[i].name, student[i].gender, student[i].marks);

    }

    //Executing the Best girl.
    for(i=0;i<n;i++)
    {
        if (student[i].gender == girl)
        {
           if (student[i].marks < high)
           {
               high = student[i].marks;
               c = student[i].name;

           }
        }
    }

    printf("Best girl student: %s", c);

}




