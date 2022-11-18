/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Lab Test: 3(a)
*/

#include <stdio.h>
#include <stdlib.h>

void print_matrix(int n, int m, int **arr);

int **proximity(int **arr, int n, int m, int i, int j, int *num);


void something(int **arr, int n, int m, int i,int j,int counter)
{
    int *num=(int *)malloc(sizeof(int));
    int **val = proximity(arr, n, m, i, j, num);
    if(num[0]!=0){
    for(int x=0;x<num[0];x++)
    {
        arr[val[x][0]][val[x][1]]=counter;
        something(arr,n,m,val[x][0],val[x][1],counter);
    }
    }
}
int main()
{
    int n = 0, m = 0;
    printf("Enter the number of rows and columns respectively: ");   // entering image size
    scanf("%d %d", &m, &n);
    scanf("%d %d", &m, &n);
    int **arr = (int **)malloc(n * sizeof(int *));
    for (int y = 0; y < n; y++)
    {
        arr[y] = (int *)malloc(m * sizeof(int));
    }
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter the value at (%d,%d) :", j + 1, i + 1);   // entering image
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\noriginal image is:\n");  // printing original image
    print_matrix(n, m, arr);

    int count = 0;
    int counter = 2;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i][j] == 1)
            {
                arr[i][j]=counter;
                something(arr,n,m,i,j,counter);
                counter++;

            }
        }
    }
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i][j]!=0)
            {
                arr[i][j]-=1;
            }
        }
    }

    printf("\nnew image is:\n");  // printing output image
    print_matrix(n, m, arr);
    printf("Number of connected components = %d",counter-2);

}



int **proximity(int **arr, int n, int m, int i, int j,int *num)
{
    int **p=(int **)malloc(n*m*sizeof(int *));
    for(int b=0;b<n*m;b++)
    {
        p[b]=(int *)malloc(2*sizeof(int));
    }
    int k = i - 1;
    int l = j - 1;
    num[0]=0;
    for (k=i-1; k <= i + 1; k++)
    {
        for (l=j-1; l <= j + 1; l++)
        {
            if (k == i && l == j)
            {
            }
            else if (k >= 0 && l >= 0 && k<n && l<m)
            {
                if(arr[k][l]==1)
                {
                    p[num[0]][1]=l;
                    p[num[0]++][0]=k;

                }
            }
        }
    }
    return p;
}

void print_matrix(int n, int m, int **arr)
{
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
