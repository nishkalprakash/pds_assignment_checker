/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>
#include <stdlib.h>

void findSaddlePoint(int ** arr, int m,int n)                   //This function takes the 2d array as parameter, along with dimensions
{
    int count=0;                                                //count keeps a track of number of saddle points
    for(int i=0; i<m; i++)
    {                                                           //The first part of the function finds the minimum of that row
                                                                //And checks if the minimum is maximum of the corresponding column
        int min_row_j=0;
        for(int j=0; j<n; j++) if(arr[i][min_row_j]>arr[i][j]) min_row_j = j;
        int max_col_i=0;
        for(int k=0; k<m; k++) if(arr[max_col_i][min_row_j]<arr[k][min_row_j]) max_col_i = k;
        if(max_col_i == i)
        {
            count++;
            printf("Saddle point is a[%d][%d]=%d\n",max_col_i,min_row_j,arr[max_col_i][min_row_j]);
        }
        int max_row_j=0;                                                        //The second part of the function finds the maximum of that row
                                                                                //And checks if the maximum is minimum of the corresponding column
        for(int j=0; j<n; j++) if(arr[i][max_row_j]<arr[i][j]) max_row_j = j;
        int min_col_i=0;
        for(int k=0; k<m; k++) if(arr[min_col_i][max_row_j]>arr[k][max_row_j]) min_col_i = k;
        if(min_col_i == i)
        {
            count++;
            printf("Saddle point is a[%d][%d]=%d\n",min_col_i,max_row_j,arr[min_col_i][max_row_j]);
        }
    }
    if(count == 0) printf("No saddle point exists for given input matrix\n");
}

int main()
{
    int rows;
    int columns;
    printf("Enter number of rows and columns:");
    scanf("%d%d",&rows,&columns);
    int **arr =(int**)malloc(rows*sizeof(int*));                                //Dynamically allocationg a 2-D array
    for(int i=0; i<rows; i++)arr[i]=(int*)malloc(columns*sizeof(int));
    printf("Enter the elements of array(one row at a time):\n");
    for(int i=0; i<rows; i++)for(int j=0; j<columns; j++) scanf("%d",&arr[i][j]);
    findSaddlePoint(arr,rows,columns);                                         //Calling the function to display Saddle Points,if any
    return 0;
}


