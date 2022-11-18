//21BT30006
//GUNNU HEMANTH
//SEC-3


#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

int n; int m;

int isTrue(int** MATRIX, int ROW, int COL, bool visited[][n]) // A function to check if a given cell (row, col) can be included in DFS
{
	// ROW number is in range, column number is in range and value is 1
	// and not yet visited
	return (ROW >= 0) && (ROW < m) && (COL >= 0) && (COL < n) && (MATRIX[ROW][COL] && !visited[ROW][COL]);
}

// A utility function to do DFS for a 2D boolean matrix. It only considers
// the 8 neighbours as adjacent vertices
void DFS(int** MATRIX, int ROW, int COL, bool visited[][n])
{
	// These arrays are used to get row and column numbers of 8 neighbours of a given cell

	static int R_no[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	static int C_no[] = { -1, 0, 1, -1, 1, -1, 0, 1 };


	visited[ROW][COL] = true; // Marks the cell as visited


	for (int i = 0; i < 8; ++i)                  // Recur for all connected neighbours
		if (isTrue(MATRIX, ROW + R_no[i], COL + C_no[i], visited))
			DFS(MATRIX, ROW + R_no[i], COL + C_no[i], visited);
}

// The main function that returns count of islands in a given boolean 2D matrix

int COUNT(int** MATRIX)
{


	bool visited[m][n];                            //  array to mark visited cells.
	memset(visited, 0, sizeof(visited));

	// Initialize count as 0 and traverse through the all cells of given matrix

	int count = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (MATRIX[i][j] && !visited[i][j]) // If a cell with value 1 is not visited yet, then new IS found
			{ //
				DFS(MATRIX, i, j, visited); // Visit all cells in this
				++count; // and increment count
                MATRIX[i][j] = count;
			}

	return count;
}

void ADD(int** matrix, int m, int n)
{

}

void main()
{
    printf("input the image size: \n ");
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

    printf("\n number of connected components : %d", COUNT(matrix));

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
