#include<stdio.h>
#include<stdlib.h>

struct student{
char roll no[10];
float marks[3];
float total;

};

int main()
{
    struct student *ptr;
    int n;
    printf("enter no of students : ");
    scanf("%d", &n);

    ptr = (struct student*)malloc(n*sizeof(struct student));

    for (int i = 0; i < n; ++i)
    {
    printf("Enter roll no and marks:\n");
    scanf("%s %f", (ptr + i)->roll no, &(ptr + i)->marks);
    }

        for (int i = 0; i < n; ++i)
        {
        printf("%s\t%d\n", (ptr + i)->roll no, (ptr + i)->marks);
        }




    free(ptr);


    return 0;
}
