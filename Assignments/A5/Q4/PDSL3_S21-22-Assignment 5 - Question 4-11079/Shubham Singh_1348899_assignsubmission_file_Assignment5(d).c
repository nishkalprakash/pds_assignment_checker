/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Assignment Class: 5(d)
*/

#include<stdio.h>

int main()
{
    printf("Enter the dimensions of original matrix: ");
    int r,c;
    scanf("%d %d",&r,&c);//accepting dimensions of original matrix
    int a[r][c];
    printf("Enter the elements:\n");
    for(int i=0;i<r;i++)//accepting original matrix
    {
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nEnter the kernel size: ");
    int x;
    scanf("%d",&x);//accepting dimension of kernel
    int k[x][x];
    printf("Enter the kernel elements:\n");
    for(int i=0;i<x;i++)//accepting kernel matrix
    {
        for(int j=0;j<x;j++)
            scanf("%d",&k[i][j]);
    }
    int fin[r+1-x][c+1-x];//array to store final result
    for(int i=0;i<r+1-x;i++)
    {
        for(int j=0;j<c+1-x;j++)
        {

            fin[i][j]=0;
            for(int q=0;q<x;q++)//calculates kernel value for each element
            {
                for(int w=0;w<x;w++)
                    fin[i][j]+=k[q][w]*a[i+q][j+w];
            }
        }
    }
    printf("\nOutput image matrix is:\n");
    for(int i=0;i<r+1-x;i++)//printing final result
    {
        for(int j=0;j<c+1-x;j++)
            printf("%d ",fin[i][j]);
        printf("\n");
    }
}
