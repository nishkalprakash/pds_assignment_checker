/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 5(c)
*/

#include<stdio.h>
int row,column; //decalring the variables for rows and cloumns
void saddle(int i,int j,int mat, int matrix[row][column])
{
    int c1=0,c2=0;
    for(int a=i;a<i+1;a++) //for loop to find the max in row
    {
        for(int b=0;b<column;b++)
        {
        if(mat>=matrix[a][b] && matrix[i][j]!=matrix[a][b])
            c1++;
        }
    }
    if(c1==(column-1))
    {
        for(int a=0;a<row;a++) //for loop to find min in column
        {
            for(int b=j;b<j+1;b++)
            {
                if (mat<=matrix[a][b] && matrix[i][j]!=matrix[a][b])
                    c2++;
            }
        }
    }
    if(c2==(row-1)) 
    printf("a[%d][%d] = %d is a saddle point\n",i,j,mat); //printing the value of the saddle point
    
    int c3=0,c4=0;
    for(int a=i;a<i+1;a++) //for loop to find max in column
    {
        for(int b=0;b<column;b++)
        {
        if(mat<=matrix[a][b] && matrix[i][j]!=matrix[a][b])
            c3++;
        }
    }
    if(c3==(column-1))
    {
        for(int a=0;a<row;a++) //for loop to find min in row
        {
            for(int b=j;b<j+1;b++)
            {
                if (mat>=matrix[a][b] && matrix[i][j]!=matrix[a][b])
                    c4++;
            }
        }
    }
    if(c4==(row-1))
    printf("a[%d][%d] = %d is a saddle point\n",i,j,mat); //printing the value of the saddle point
}
int main()
{
    int mat;
    printf("Enter the number of rows and the columns respectively : "); //asking for the value of rows and columns
    scanf("%d %d",&row,&column); //taking the value of rows and columns
    int matrix[row][column]; //declaring the matrix
    printf("Enter the matrix :\n"); //asking for the values to be input in the matrix
    for(int i=0;i<row;i++) //for loop for taking the values into the matrix
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<row;i++) //for loop for finding the saddle points
    {
        for(int j=0;j<column;j++)
        {
            mat = matrix[i][j];
            saddle(i,j,mat,matrix); //calling the function
        }
    }
    return 0;
}

