/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment: Labtest 3,Question 1
*/


#include<stdio.h>
#include<stdlib.h>

void grouping(int** matrix,int groups,int i,int j,int rows,int cols)
{
    matrix[i][j] = groups;
    if(i > 0 && matrix[i-1][j] == 1)
        grouping(matrix,groups,i-1,j,rows,cols);
    if(i > 0 && j > 0 && matrix[i-1][j-1] == 1)
        grouping(matrix,groups,i-1,j-1,rows,cols);
    if(i > 0 && j+1 < cols && matrix[i-1][j+1] == 1)
        grouping(matrix,groups,i-1,j+1,rows,cols);
    if(i+1 < rows && matrix[i+1][j] == 1)
        grouping(matrix,groups,i+1,j,rows,cols);
    if(i+1 < rows && j > 0 && matrix[i+1][j-1] == 1)
        grouping(matrix,groups,i+1,j-1,rows,cols);
    if(i+1 < rows && j+1 < cols && matrix[i+1][j+1] == 1)
        grouping(matrix,groups,i+1,j+1,rows,cols);
    if(j > 0 && matrix[i][j-1] == 1)
        grouping(matrix,groups,i,j-1,rows,cols);
    if(j+1 < cols && matrix[i][j+1] == 1)
        grouping(matrix,groups,i,j+1,rows,cols);
}

int main()
{
    int rows,cols;
    printf("Enter Dimensions of Matrix (rows and columns):");
    scanf("%d %d",&rows,&cols);

    int** matrix = (int**)malloc(rows*sizeof(int*));

    printf("Enter the Matrix:\n");
    int i,j;
    for(i = 0; i < rows; i++)
    {
        matrix[i] = (int*)malloc(cols*sizeof(int));
        for(j = 0; j < cols; j++)
            scanf("%d",&matrix[i][j]);
    }

    int groups = 1;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            if(matrix[i][j] == 1)
            {
                grouping(matrix,groups+1,i,j,rows,cols);
                groups++;
            }
        }
    }

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            if(matrix[i][j] != 0)
                matrix[i][j]--;

    printf("\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%d ",matrix[i][j]);
        printf("\n");
    }

}
