/*
Name : Vankudoth Pavan
Department : Chemical Engineering
Roll No : 21CH10075
Package : Code blocks
Operating system : Windows
*/


#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

int n; int m;

int isTrue(int** N, int R, int C, bool visited[][n]) // A function to check if a given cell (row, col) can be included in DFS
{
	// R number is in range, column number is in range and value is 1
	// and not yet visited
	return (R >= 0) && (R < m) && (C >= 0) && (C < n) && (N[R][C] && !visited[R][C]);
}


void DFS(int** N, int R, int C, bool visited[][n])
{
	// These arrays are used to get row and column numbers of 8 neighbours of a given cell

	static int rownumber[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	static int columnnumber[] = { -1, 0, 1, -1, 1, -1, 0, 1 };


	visited[R][C] = true; // Marks the cell as visited


	for (int i = 0; i < 8; ++i)                  // Recur for all connected neighbours
		if (isTrue(N, R + rownumber[i], C + columnnumber[i], visited))
			DFS(N, R + rownumber[i], C + columnnumber[i], visited);
}



int COUNT(int** N)
{


	bool visited[m][n];                            //  array to mark visited cells.
	memset(visited, 0, sizeof(visited));

	// Initialize count as 0 and traverse through the all cells of given matrix

	int count = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (N[i][j] && !visited[i][j]) // If a cell with value 1 is not visited yet, then new IS found
			{ //
				DFS(N, i, j, visited); // Visit all cells in this
				++count; // and increment count
                N[i][j] = count;
			}

	return count;
}

void ADD(int** matrix, int m, int n)
{

}

void main()
{
    printf("ENTER the image size: \n ");
    scanf("%d", &m);   scanf("%d", &n);

    int** matrix = (int** )calloc(m,sizeof(int*));
    for(int i=0; i<m; i++)
        matrix[i] = (char* )calloc(n,sizeof(int));

    printf("input the matrix row size: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n NO .OF connected components : %d", COUNT(matrix));

    //correcting the last element
    if(matrix[m-1][n-1]!= 0)
    {
        if(matrix[m-2][n-2]!= 0)
           matrix[m-1][n-1] = matrix[m-2][n-2];
        if(matrix[m-1][n-2]!= 0)
           matrix[m-1][n-1] = matrix[m-1][n-2];
        if(matrix[m-2][n-1]!= 0)
           matrix[m-1][n-1] = matrix[m-2][n-1];
    }

    //printing the matrix
    printf("\n\nOutput image with label connected components : \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }

}
