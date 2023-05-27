/*
* Section 2
* Roll No : 22PH1002
* Name : Abhimanyu Dev Upadhyay
* Assignment No : 3
* Description :
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char RollNo[10];
    float marks[3];
    float total;
}student;

//Function to print
void print(student *a, int n)
{
    int i;
    for(i = 0; i<n; i++)
    {
        printf("\nRoll no: %s", (a+i)->RollNo);
        printf("\nMarks:");
        for(int j =0; j<3;j++)
        {
            printf(" %.2f", (a+i)->marks[j]);
        }
        printf("\nTotal: %.2f", (a+i)->total);
    }
    return;
}

//Function to swap for sort
void swap(student *a, student *b)
{
    student t;
    t = *a;
    *a = *b;
    *b = t;

}

int main()
{
    //Taking input n;
    int n,i;
    scanf("%d", &n);

    //Allocating memory according to n and getting pointer p
    student *p;
    p = (student *)malloc(n*sizeof(student));

    //Taking input
    for(i = 0; i<n; i++)
    {
        (p+i)->total = 0;
        scanf("%s",(p+i)->RollNo);
        for(int j = 0; j<3; j++)
        {
            scanf("%f", &(p+i)->marks[j]);
            (p+i)->total += (p+i)->marks[j];
        }
    }

    //Normal printing
    printf("\n\nStudent Records:");
    print(p,n);


    //Sorting
    for(i = 0; i<n; i++)
    {
        for(int j = 0; j<n;j++)
        {
            if((p+j)->total < (p+j+1)->total)
            {
                swap((p+j),(p+j+1));
            }
        }
    }

    //After Sorting Print
    printf("\n\nSorted Student Records:");
    print(p,n);


    free(p);
    return 0;
}
