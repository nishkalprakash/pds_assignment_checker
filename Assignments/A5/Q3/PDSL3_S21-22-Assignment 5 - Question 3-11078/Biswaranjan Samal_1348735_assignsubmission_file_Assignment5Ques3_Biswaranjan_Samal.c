/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment: 5 ,Question: 3
*/


#include <stdio.h>
#include <stdlib.h>   //dynamic allocation

void print(int **matrix,int rows,int cols)    //function to print in matrix from from row major form
{
    int i,j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%d ",matrix[i][j]);
        printf("\n");
    }
}

void matrixInput(int **matrix,int rows,int cols)   //sscans the  for the matrix elemenstsS
{
    int i,j;
    for(i = 0; i < rows; i++)
    {
        matrix[i] = (int*)malloc(cols*sizeof(int));
        for(j = 0; j < cols; j++)
            scanf("%d",&matrix[i][j]);
    }
}

void findSaddlePoints(int **matrix,int rows,int cols)   //function to find the saddle point
{
    int cntSaddlePoint = 0;
    int i,j;
    for(i = 0; i < rows; i++)
    {
        int maxCol = 0,unique = 1;
        for(j = 1; j < cols; j++)
        {
            if(matrix[i][maxCol] < matrix[i][j])   //finds the element adress whose column wise max but row wise min
            {
                maxCol = j;
                unique = 1;
            }
            else if(matrix[i][maxCol] == matrix[i][j])
                unique = 0;
        }
        if(!unique)
            continue;
        int condition = 1;
        for(j = 0; j < rows; j++)
        {
            if(matrix[j][maxCol] <= matrix[i][maxCol] && j != i)
            {
                condition = 0;
                break;
            }
        }
        if(condition)
        {
            printf("Saddle Point:a[%d][%d]=%d\n",i,maxCol,matrix[i][maxCol]);
            cntSaddlePoint++;
        }
    }
    //element minimum in column but maximum in rows




    for(i = 0; i < rows; i++)
    {
        int minCol = 0,unique = 1;
        for(j = 1; j < cols; j++)
        {
            if(matrix[i][minCol] > matrix[i][j])
            {
                minCol = j;
                unique = 1;
            }
            else if(matrix[i][minCol] == matrix[i][j])
                unique = 0;
        }
        if(!unique)
            continue;
        int condition = 1;
        for(j = 0; j < rows; j++)
        {
            if(matrix[j][minCol] >= matrix[i][minCol] && j != i)
            {
                condition = 0;
                break;
            }
        }
        if(condition)
        {
            printf("Saddle Point:a[%d][%d]=%d \n",i,minCol,matrix[i][minCol]);
            cntSaddlePoint++;
        }


    }
    if(!cntSaddlePoint)
        printf("No Saddle point Found\n");
}

int main()
{
    int rows,cols;
    printf("Number of Rows:");
    scanf("%d",&rows);
    printf("Number of Columns:");
    scanf("%d",&cols);

    int **matrix;
    matrix =  (int**)malloc(rows*sizeof(int*)); //dynamically memory is allocated
    printf("Enter 2D Array:\n");
    matrixInput(matrix,rows,cols); //matrix inpur function is called
    print(matrix,rows,cols);  //matrix is printed in matrix from from row major form
    findSaddlePoints(matrix,rows,cols);  //function to find the saddle point is called
}
