#include<stdio.h>

struct Student
{
    char RollNo[10];
    float marks[3];
    float total;
};

int main()
{
    int n, i, j;
    scanf("%d", &n);
    printf("%d", n);

    struct Student *a;
    a = (struct Student* )malloc(n*sizeof(struct Student));

    for(i=1; i<=n; i++)
    {
        printf("\nEnter name");
        scanf("%s", a[i].RollNo );
        //printf("\nMarks");
        for(j=0; j<3; j++)
        {
                 printf("\nMarks");
            scanf("%d", &a[i].marks[j]);
        }
        printf("%d", i);
    }
    printf("H");

    for(i=1; i<=n; i++)
    {
        printf("%s", a[i].RollNo );
        for(j=0; j<3; j++)
        {
            printf("%d", a[i].marks[j]);
        }
    }

    return 0;
}
