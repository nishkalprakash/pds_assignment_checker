/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>, <stdlib.h>
Assignment Class: 6
*/
#include <stdio.h> // TRY COMPILING IT IN ONLINE MODE IF YOU GET SEGMENTATION ERROR
#include <stdlib.h>
int main()
{
    int r, c, i;
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
    printf("Saddle Points : \n");
    for (i = 0; i < r; i++)
    {
        int arr[2] = {0, 0};
        int brr[2] = {0, 0};
        int rowmax = 0;
        int rowmin = a[i][0];
        int countermax = 0;
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] > rowmax)
            {
                rowmax = a[i][j];
                arr[0] = i;
                arr[1] = j;
            }
            if (a[i][j] < rowmin)
            {
                rowmin = a[i][j];
                brr[0] = i;
                brr[1] = j;
            }
        }
        int flagmax = 0, flagmin = 0;
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == rowmax)
            {
                flagmax++;
            }
            if (a[i][j] == rowmin)
            {
                flagmin++;
            }
        }
        if (flagmax == 1)
        {
            int v = 0;
            for (int j = 0; j < r; j++)
            {
                if (rowmax <= a[j][arr[1]])
                {
                    v++;
                }
            }
            if (v == 0)
            {
                printf("a[%d][%d] = %d\n", arr[0], arr[1], a[arr[0]][arr[1]]);
            }
        }
        if (flagmin == 1)
        {
            int v = 0;
            for (int j = 0; j < r; j++)
            {
                if (rowmin >= a[j][brr[1]])
                {
                    v++;
                }
            }
            if (v == 0)
            {
                printf("a[%d][%d] = %d\n", arr[0], arr[1], a[arr[0]][arr[1]]);
            }
        }
    }
}