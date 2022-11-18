/* kethavath shivakumar
   21MI31013 */

#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

int k;
 int y;


//the function to check if a given cell (row, col) can be included in DFS
int isSafe(int** M, int row, int col, bool visited[][k])
{
	// row number is in range, column number is in range and value is 1
	// and not yet visited
	return (row >= 0) && (row < y) && (col >= 0) && (col < k) && (M[row][col] && !visited[row][col]);
}

// A utility function to do DFS for a 2D boolean matrix. It only considers
// the 8 neighbours as adjacent vertices
void DFS(int** M, int row, int col, bool visited[][k])
{
	/* These arrays are used to get row and column numbers of 8 neighbours
	 of a given cell*/
	static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 };

	static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

	         // point this as visited
	visited[row][col] = true;

	      // Recur all connected neighbours
	for (int x = 0; x < 8; ++x)
		if (isSafe(M, row + rowNbr[x], col + colNbr[x], visited))
			DFS(M, row + rowNbr[x], col + colNbr[x], visited);
}

/* The main function, which returns count of the islands in the given boolean
 2 dimensional matrix*/
int countIslands(int** M)
{
	/* do a bool array to mark visited cells.
	 Initially all cells are unvisited*/
	bool visited[y][k];
	memset(visited, 0, sizeof(visited));

	/* Initialize count as 0 and traverse through the all cells in
	 given matrix*/
	int count = 0;
	for (int i = 0; i < y; i++)
		for (int j = 0; j < k; j++)
			if (M[i][j] && !visited[i][j])
                // If a cell with value 1 is not
			{
			     // visited yet, then new island found
				DFS(M, i, j, visited); // Visit all cells in this island.
				++count;               // and increment island count
                M[i][j] = count;
			}

	return count;
}

void addLabels(int** matrix, int y, int k)
{

}

void main()
{
    printf("Enter the size of image: ");
    scanf("%d", &y);
    scanf("%d", &k);

    int** matrix = (int** )calloc(y,sizeof(int*));
    for(int i=0; i<y; i++)
        matrix[i] = (char* )calloc(k,sizeof(int));

    printf("give matrix elements row wise : \n");
    for(int i=0; i<y; i++)
    {
        for(int j=0; j<k; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n number of connected components : %d", countIslands(matrix));

    //correcting last element
    if(matrix[y-1][k-1]!= 0)
    {
        if(matrix[y-2][k-2]!= 0)
           matrix[y-1][k-1] = matrix[y-2][k-2];
        if(matrix[y-1][k-2]!= 0)
           matrix[y-1][k-1] = matrix[y-1][k-2];
        if(matrix[y-2][k-1]!= 0)
           matrix[y-1][k-1] = matrix[y-2][k-1];
    }

    // matrix printed
    printf("\n\nOutput image with the label connected components : \n");
    for(int i=0; i<y; i++)
    {
        for(int j=0; j<k; j++)
        {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }

}
