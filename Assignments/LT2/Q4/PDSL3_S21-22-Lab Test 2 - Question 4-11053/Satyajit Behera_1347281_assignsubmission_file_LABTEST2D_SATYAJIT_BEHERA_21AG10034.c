// NAME- SATYAJIT BEHERA
// ROLL NO-21AG10034
// DEPT- AGRICULTURE AND FOOD ENGINEERING
// SECTION-03
// SOFTWARE- code block
#include <stdio.h>
#define MAX 50 /*macro defination*/
// defining the structure
struct student
{
    char first_name[20], surname[20], gender[4];
    float marks;
};
struct student record[MAX];
// function for printing the stored details
void p_r(int n)
{
    printf("\nPrinting the student details:\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\t%s\t%s\t%f\n", record[i].first_name, record[i].surname, record[i].gender, record[i].marks);
    }
}
// function for finding the best girl
void b_g_s(int n)
{
    // defining the varibles
    int i, m;
    float j;
    for (i = 0; i < n; i++)
    {
        if (record[i].gender[0] == 'b' && record[i].gender[1] == 'o' && record[i].gender[2] == 'y')
            continue;
        else
        {
            j = record[i].marks;
            break;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (record[i].gender[0] == 'b' && record[i].gender[1] == 'o' && record[i].gender[2] == 'y')
            continue;
        if (j <= record[i].marks)
        {
            j = record[i].marks;
            m = i;
        }
    }
    printf("Best girl student: %s %s and marks is %f4 ", record[m].first_name, record[m].surname,record[m].marks);
}

int main()
{
    int n, i;
    printf("Enter the number of students:- ");
    scanf("%d", &n);
    printf("Enter the student details:\n");
    for (i = 0; i < n; i++)
    {
        // storing the value in the variable using the struct
        printf("Enter first name of student %d:- ", i + 1);
        scanf("%s", record[i].first_name);
        printf("Enter surname of student %d:- ", i + 1);
        scanf("%s", record[i].surname);
        printf("Enter gender of student %d:- ", i + 1);
        scanf("%s", record[i].gender);
        printf("Enter marks of student %d:- ", i + 1);
        scanf("%f", &record[i].marks);
    }
    // calling the function
    p_r(n);
    b_g_s(n);
    return 0;
}
