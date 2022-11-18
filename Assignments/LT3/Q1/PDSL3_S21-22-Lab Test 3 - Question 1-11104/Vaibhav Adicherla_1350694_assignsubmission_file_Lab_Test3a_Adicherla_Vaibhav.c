/* name: Adicherla Vaibhav
Roll no.:21BT10002
Department: Biotechnology and Biochemistry Btech4yrs
Package:code blocks
Operating system: Windows
Date: 16/06/2022*/

#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

int x, y;



int chec(int** Mat, int row, int col, bool visit[][y])// A function to check if a given cell (row, col) can be included in DFS
{
	// row and coloum are in a range and value is 1 and not entered

	return (row >= 0) && (row < x) && (col >= 0) && (col < y) && (Mat[row][col] && !visit[row][col]);
}


void DFS(int** Mat, int row, int col, bool visit[][y])// void function to do dfs on 2d matrix
{
	// These arrays are used to get row and column numbers of 8 neighbors

	static int rowNo[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	static int colNo[] = { -1, 0, 1, -1, 1, -1, 0, 1 };


	 visit [row][col] = true;// Marking this cell as visited

	//  for all neighbors
	for (int temp = 0; temp < 8; temp++)
		if (chec(Mat, row + rowNo[temp], col + colNo[temp], visit))
			DFS(Mat, row + rowNo[temp], col + colNo[temp], visit);
}


int islandNo(int** Mat)// function that gives number of islands of 2d matrix
{
	//bool array to mark visited cells.
	bool visit[x][y];
	memset(visit, 0, sizeof(visit));

	// Initialize count as 0 and traverse through the all cells of matrix

	int count = 0;
	for (int i = 0; i < x; i++)
		for (int j = 0; j < y; j++)
			if (Mat[i][j] && !visit[i][j]) // If a cell with value 1 is not found new island
			{
				DFS(Mat, i, j, visit); // Visit all cells in this island.
				count++; // and increment count
                Mat[i][j] = count;
			}

	return count;
}

void addLabels(int** matrix, int x, int y)
{

}

void main()
{
    printf("Enter the image size: ");
    scanf("%d", &x);   scanf("%d", &y);

    int** mat = (int** )calloc(x,sizeof(int*));
    for(int i=0; i<x; i++)
        mat[i] = (char* )calloc(y,sizeof(int));
        printf("\nEnter the Image:\n");

    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }



    //correcting the last elements
    if(mat[x-1][y-1]!= 0)
    {

        if(mat[x-1][y-2]!= 0)
           mat[x-1][y-1] = mat[x-1][y-2];
        if(mat[x-2][y-1]!= 0)
           mat[x-1][y-1] = mat[x-2][y-1];
        if(mat[x-2][y-2]!= 0)
           mat[x-1][y-1] = mat[x-2][y-2];
    }

    //printing the matrix
    printf("\n\nOutput image with label connected components : \n");
    for(int i=0; i<x; ++i)
    {
        for(int j=0; j<y; ++j)
        {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nNumber of connected components : %d", islandNo(mat));

}
