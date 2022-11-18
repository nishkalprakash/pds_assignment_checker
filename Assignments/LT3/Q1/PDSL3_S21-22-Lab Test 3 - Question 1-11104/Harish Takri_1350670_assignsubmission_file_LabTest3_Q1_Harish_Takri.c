/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/

#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>


int a,b;// initialising two variables a and b



int check(int** M, int row, int col, bool seen[][b]) // A check function in given cell (row, col) can be included in DFS
{
	// row number is in range, column number is in range and value is 1
	// and not yet seen
	return (row >= 0) && (row < a) && (col >= 0) && (col < b) && (M[row][col] && !seen[row][col]); // row and column is the range
}


void DFS(int** M, int row, int col, bool seen[][b])  // a new funtion to do boolean matrix , 8 neighbour adjacents
{

	static int RNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 };/*These arrays are used to get row and column numbers of 8 neighbours
                                                                of a given cell*/
	static int CNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 };


	seen[row][col] = true;   // overlooked cell


	for (int k = 0; k < 8; ++k)     // recurions for the neighbours
		if (check(M, row + RNbr[k], col + CNbr[k], seen))
			DFS(M, row + RNbr[k], col + CNbr[k], seen);
}


// 2D matrix to be executed
int count_lands(int** M) // count lands function to count the no of islands
{

	bool seen[a][b];
	memset(seen, 0, sizeof(seen));  /*Make a bool array to mark seen cells.*/
                                             //Initially all cells are unseen*/


	// count is zero and traverse all the celle in the matrix
	int count = 0;
	for (int i = 0; i < a; i++) // variable i and j for the loop...
		for (int j = 0; j < b; j++)
			if (M[i][j] && !seen[i][j]) // If a cell with value 1 is not
			{ // seen yet, then new island found
				DFS(M, i, j, seen); // Visit all cells in this island.
				++count; // and increment island count
                M[i][j] = count;
			}

	return count;
}

void addLabels(int** matrix, int a, int b)
{

}

void main()
{
    printf("Enter the size of Image : ");
    scanf("%d", &a);
    scanf("%d", &b);

    int** matrix = (int** )calloc(a,sizeof(int*));
    for(int i=0; i<a; i++)
        matrix[i] = (char* )calloc(b,sizeof(int));

    printf("Enter the matrix elements row wise : \n");
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n Number of connected components is : %d", count_lands(matrix));


    if(matrix[a-1][b-1]!= 0)    // clearing the last elements of the matrix
    {
        if(matrix[a-2][b-2]!= 0)
           matrix[a-1][b-1] = matrix[a-2][b-2];
        if(matrix[a-1][b-2]!= 0)
           matrix[a-1][b-1] = matrix[a-1][b-2];
        if(matrix[a-2][b-1]!= 0)
           matrix[a-1][b-1] = matrix[a-2][b-1];
    }

    //printing the output matrix (Answer)
    printf("\n\n Output image with label connected components : \n");
    for(int i=0; i<a; i++)
    {
        for(int j=0; j<b; j++)
        {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }

}

