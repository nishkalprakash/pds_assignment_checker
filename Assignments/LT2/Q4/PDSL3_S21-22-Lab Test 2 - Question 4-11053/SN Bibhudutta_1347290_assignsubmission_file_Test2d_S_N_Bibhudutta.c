// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Test 2

#include<stdio.h>
# define MAX 100

int main()
{
    int n;
    char best_gurl[100];

    typedef struct
    {
        char name[1000];
        char surname[1000];
        char gender[100];
        float marks;
    } Student;

    Student a[MAX];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i=0;i<n;i++)
    {
        scanf("%s %s %s %f", a[i].name,a[i].surname,a[i].gender,&a[i].marks);
    }

    printf("\nPrint the student records..");

    for (int i=0;i<n;i++)
    {
        printf("\n%s %s %s - %f", a[i].name,a[i].surname,a[i].gender,a[i].marks);
    }

    if (a[0].gender[0] == 'g'&& a[1].gender[1] == 'i' && a[2].gender[2] == 'r' && a[3].gender[3] == 'l')
    {
        for (int i=0;i<n;i++)
        {
            if(a[i+1].marks>=a[i].marks)
                best_gurl[100] = a[i+1].name[1000];
            else
                best_gurl[100] = a[i].name[1000];
        }
    }

    printf("Best girl student: %s", best_gurl[100]);

    return 0;
}