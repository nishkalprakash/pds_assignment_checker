/*
* Section 2
* Roll No : 22EC10027
* Name : Chinta venkata nikhil reddy
* Assignment No : 8
* Description :structures with dynamic allocation memory.
*question : 2
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct matrix {
  int *n,j;
}matrix;
int main()
{
    matrix *a;
    int p,i,j,r;
    printf("enter the number of columns : ");
    scanf("%d" , &p);
    a=(matrix*)malloc(p*sizeof(int));
    printf("enter the no of rows : ");
    scanf("%d" , &r);
    printf("enter the elementsof the matrix : ");

    for(i=0;i<p;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d " , &n[j]);
        }

    }
      for(i=0;i<p;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d " , n[j]);
        }
        printf("\n");
    }


    return 0;
}
