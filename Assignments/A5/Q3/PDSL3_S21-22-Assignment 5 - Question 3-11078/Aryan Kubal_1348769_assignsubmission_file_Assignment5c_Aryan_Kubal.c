/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include <stdio.h>
#include <stdlib.h>
int** allocate_memory_and_storevalue(int **p, int h, int w)
{
    int i;
    p = (int **)malloc(h * (sizeof(int *)));
    for (i = 0; i < h; i++)
    {
        p[i] = (int *)malloc(w * sizeof(int));
    }
    printf("enter the values to be stored in your array\n"); // taking input for the values to be stored
    for (i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }
    return (p);
}

int find_SaddlePoint(int **p, int n, int m,int *a) // defining integer for first saddle point
{

    for (int i = 0; i < n; i++)
    {
        int max_row = p[i][0], col_ind = 0;
        for (int j = 1; j < m; j++)
        {
            if (max_row < p[i][j])
            {
                max_row = p[i][j];
                col_ind = j;
            }
        }
        int k=0;
        while (k < n)
        {
            if (max_row > p[k][col_ind])
            {
                break;
            }
            k++;
        }
        if (k == n)
        {
            *a=max_row;
            return 1;
        }
    }
    return 0;
}


int find_SaddlePoint2(int **p, int n, int m,int *a) // defining integer for second saddle point
{

    for (int i = 0; i < n; i++)
    {
        int min_row = p[i][0], col_ind = 0;
        for (int j = 1; j < m; j++)
        {
            if (min_row > p[i][j])
            {
                min_row = p[i][j];
                col_ind = j;
            }
        }
        int k=0;
        while (k < n)
        {
            if (min_row < p[k][col_ind])
            {
                break;
            }
            k++;
        }
        if (k == n)
        {
            *a=min_row;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int **a;
    int m, n;
    printf("enter number of rows and columns respectively\n"); // taking input for the number of rows and columns
    scanf("%d %d", &m, &n);
    a = allocate_memory_and_storevalue(a, m, n);
    printf("entered array is \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("");
    int s1=0;
    int s2=0;
    int f1=find_SaddlePoint(a,m,n,&s1);
    int f2=find_SaddlePoint2(a,m,n,&s2);
    if(f1 == 0 && f2==0)
    {
        printf("No saddle point was found\n"); // output if no saddle point
    }
    else if(f1 == 0 && f2!=0)
    {
        printf("saddle point is %d\n",s2); // output if saddle point is found
    }
    else if(f1 != 0 && f2==0)
    {
        printf("saddle point is %d\n",s1);
    }
    else if(f1 != 0 && f2!=0)
    {
        printf("saddle point are %d %d\n",s1,s2);
    }

    free(a);
}