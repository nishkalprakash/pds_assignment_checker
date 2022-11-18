/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>
Assignment Class: 6
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // TAKING USER INPUT
    int r, c;
    printf("Enter the image size: ");
    scanf("%d %d", &r, &c);
    printf("Enter the image");
    int *a[r];
    for (int i = 0; i < r; i++)
    {
        a[i] = (int *)malloc(c * sizeof(int));
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element [%d,%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}