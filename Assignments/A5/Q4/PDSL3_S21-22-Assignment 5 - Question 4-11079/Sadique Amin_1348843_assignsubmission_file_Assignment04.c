/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>, <stdlib.h>
Assignment Class: 6
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, c, i, rk, ck;
    printf("------Image Matrix---------\n");
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int *a[r];
    for (i = 0; i < r; i++)
    {
        a[i] = (int *)malloc(c * sizeof(int));
    }
    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element [%d,%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n------Kernel Matrix---------\n");
    printf("Enter the ORDER: ");
    scanf("%d", &rk);
    int *k[rk];
    for (i = 0; i < rk; i++)
    {
        k[i] = (int *)malloc(rk * sizeof(int));
    }
    for (i = 0; i < rk; i++)
    {
        for (int j = 0; j < rk; j++)
        {
            printf("Enter the element [%d,%d] : ", i, j);
            scanf("%d", &k[i][j]);
        }
    }
    int res
}
// COULDN'T COMPLETE DUE TO LACK OF TIME...