#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

int n; int m;


// A function to check if a given cell (row, col) can be included in DFS
int Safe(int** N, int row, int col, bool visited[][n])
{
	// row number is in range, column number is in range and value is 1
	// and not yet visited
	return (row >= 0) && (row < m) && (col >= 0) && (col < n) && (N[row][col] && !visited[row][col]);
}

// A utility function to do DFS for a 2D boolean matrix. It only considers
// the 8 neighbors as adjacent vertices
void D_F_S(int** N, int row, int col, bool visited[][n])
{
	// These arrays are used to get row and column numbers of 8 neighbors
	// of a given cell
	static int rowneighbors[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	static int colneighbors[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

	// Mark this cell as visited
	visited[row][col] = true;

	// Recur for all connected neighbors
	for (int k = 0; k < 8; ++k)
		if (Safe(N, row + rowneighbors[k], col + colneighbors[k], visited))
			DFS(N, row + rowneighbors[k], col + colneighbors[k], visited);
}

// The main function that returns count of islands in a given boolean
// 2D matrix
int countIslands(int** N)
{
	// Make a bool array to mark visited cells.
	// Initially all cells are unvisited
	bool visited[m][n];
	memset(visited, 0, sizeof(visited));

	// Initialize count as 0 and traverse through the all cells of
	// given matrix
	int count = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (N[i][j] && !visited[i][j]) // If a cell with value 1 is not
			{ // visited yet, then new island found
				D_F_S(N, i, j, visited); // Visit all cells in this island.
				++count; // and increment island count
                N[i][j] = count;
			}

	return count;
}

void main()
{
    printf("Enter the image size: ");
    scanf("%d", &m);   scanf("%d", &n);

    int** matrix = (int** )calloc(m,sizeof(int*));
    for(int i=0; i<m; i++)
        matrix[i] = (char* )calloc(n,sizeof(int));

    printf("Enter the matrix elements row wise : \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nNo. of connected components : %d", countIslands(matrix));

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
