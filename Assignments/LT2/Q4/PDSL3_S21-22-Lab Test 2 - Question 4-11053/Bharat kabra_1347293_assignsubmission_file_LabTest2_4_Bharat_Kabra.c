/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: vs code
Lab Test: 2
*/
#include <stdio.h>
#define MAX 50

struct student
{
    char name1[20],gender[6];
    float marks;
};
struct student record[MAX];
void best_girl_student(int n)
{
    int i, m;
    float j;
    for (i = 0; i < n; i++)
    {
        if (record[i].gender[0]=='b' && record[i].gender[1]=='o' && record[i].gender[2]=='y')
            continue;//ignoring the marks of boys
        else
        {
            j = record[i].marks;//storing the marks of girls in j
            break;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (record[i].gender[0]=='b' && record[i].gender[1]=='o' && record[i].gender[2]=='y')
            continue;
        if (j <= record[i].marks)//if new marks is greater than j, j is given the value of new marks
        {
            j = record[i].marks;
            m = i;//m is assigned value of i
        }
    }
    printf("Best girl student: %s ", record[m].name1);
}
void print_record(int n)
{
    printf("\nPrinting the student details:\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%f\n",record[i].name1,record[i].gender,record[i].marks);
    }
}
int main()
{
    int n, i;
    printf("Enter the number of students:- ");
    scanf("%d", &n);
    printf("Enter the student details:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter name of student %d:- ", i + 1);
        scanf("%s", record[i].name1);
        printf("Enter gender of student %d:- ", i + 1);
        scanf("%s", record[i].gender);
        printf("Enter marks of student %d:- ", i + 1);
        scanf("%f", &record[i].marks);
    }
    print_record(n);
    best_girl_student(n);
    return 0;
}