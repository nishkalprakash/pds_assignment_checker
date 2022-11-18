// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 5

#include<stdio.h>
#include<stdlib.h>

# define ROW 3
# define COL 3

void saddle(int a[ROW][COL])
{
    int flag = 0;
    int max, min,v, p, i, j;

// IF ROW HAS MAX AND COL HAS MIN
    for (int i=0; i<ROW; i++)
    {
        for (int j= 0; j<COL; j++)
        {
            if (a[i][j]>=a[i][j+1])
                max = a[i][j];
            else 
                max = a[i][j+1];
        }
        for (int k= 0; a[i][k]!=max;k++)
        {
            // V IS THE COLUMN NUMBER TO WHICH MAX BELONGS TO
            int v = k;
        }

        for (int m=0; m<ROW; m++)
        {
            if (a[m][v]<=a[m+1][v])
                min = a[m][v];
            else 
                min = a[m+1][v];
        }
        for (int k= 0; a[k][j]!=min;k++)
        {
            // P IS THE COLUMN NUMBER TO WHICH MIN BELONGS TO
            int p = k;
        }

        if (min == max)
        {
            printf("\na[%d][%d] = %d is a saddle point", v,p,max);
            flag = 1;
        }
    }

// IF ROW HAS MIN AND COL HAS MAX
    for (int j= 0; j<COL; j++)
        {
            if (a[i][j]<=a[i][j+1])
                min = a[i][j];
            else 
                min = a[i][j+1];
        }
        for (int k= 0; a[i][k]!=min;k++)
        {
            // V IS THE COLUMN NUMBER TO WHICH MIN BELONGS TO
            int v = k;
        }

        for (int m=0; m<ROW; m++)
        {
            if (a[m][v]>=a[m+1][v])
                max = a[m][v];
            else 
                max = a[m+1][v];
        }
        for (int k= 0; a[k][j]!=min;k++)
        {
            // P IS THE COLUMN NUMBER TO WHICH MAX BELONGS TO
            int p = k;
        }

        if (min == max)
        {
            printf("\na[%d][%d] = %d is a saddle point", v,p,max);
            flag = 1;
        }

        if (flag==0)
        {
            printf("There are no saddle points");
        }
}

int main()
{
    int **a;
    int i,j;

    // DYNAMIC ALLOCATION OF 2D ARRAY
    a = (int**)malloc(ROW*sizeof(int*));
    a[0] = (int*)malloc(ROW*COL*sizeof(int));

    for (i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i=0; i<ROW; i++)
    {
        for (j=0; j<COL; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

    saddle(a[ROW][COL]);

    return 0;
}