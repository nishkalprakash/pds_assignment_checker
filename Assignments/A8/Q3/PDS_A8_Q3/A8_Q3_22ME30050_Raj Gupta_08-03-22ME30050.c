#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct student{
    char rollno[10];
    float marks[3];
    float total;

}student;

int main ()
{
    student *ptr;
    int n;
    scanf("%d",&n);
    ptr = ( student *)malloc(n * sizeof(student));
    for (int i = 0; i < n; ++i)
        {
            scanf("%s %f %f %f", (ptr + i)->rollno,&(ptr + i)->marks[0],&(ptr + i)->marks[1],&(ptr + i)->marks[2]);

        }

}
