/*
* Section 2
* Roll No.: 22EC10007
* Name : Akash Kumar
* Assignment : 8
* Question : 3
* Description : Marks tally of students
*/

#include <stdio.h>

typedef struct student {
    char roll[10];
    float marks[3];
    float total;
} student;

int main()
{
    int n;

    printf("Enter the number of students\n");
    scanf("%d", &n);

    student s[n];

    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter the details for student %d\n", i+1);
        printf("Enter roll no. : ");
        scanf("%s", s[i].roll);

        printf("Enter the marks for three subjects : ");
        scanf("%f", &s[i].marks[0]);
        scanf("%f", &s[i].marks[1]);
        scanf("%f", &s[i].marks[2]);

        s[i].total = s[i].marks[0] + s[i].marks[1] + s[i].marks[2];
    }

    i = 0;


    printf("Student Record Details \n");

    while (i<n)
    {
        printf("Roll Number : %s \n", s[i].roll);
        printf("Marks : %.2f %.2f %.2f \n", s[i].marks[0], s[i].marks[1], s[i].marks[2]);
        printf("Total : %.2f \n", s[i].total);
        i++;
    }



    return 0;
}
