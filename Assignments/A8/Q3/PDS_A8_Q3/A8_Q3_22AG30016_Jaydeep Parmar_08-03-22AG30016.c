/*Jaydeep parmar
22AG30016
PROBLEM 3*/

#include<stdio.h>
struct student{
char RollNo[10];
float marks[3];
float total;
};

int main()
{
    int n;
    printf("enter number of students: ");
    scanf("%d",&n);
    struct student a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter RollNo and marks of student %d: ",i+1);
        scanf("%s",a[i].RollNo);
        for(int k=0;k<3;k++)
        {
            scanf("%f",&a[i].marks[k]);
        }
        int k=0;
    }
    int k=0;
    printf("students record: \n");
    for(int i=0;i<n;i++)
    {

        printf("%s\n",a[i].RollNo);
        for(int k=0;k<3;k++)
        {
            printf("%.2f\t",a[i].marks[k]);
        }
        printf("\n");
    }

    return 0;
}
