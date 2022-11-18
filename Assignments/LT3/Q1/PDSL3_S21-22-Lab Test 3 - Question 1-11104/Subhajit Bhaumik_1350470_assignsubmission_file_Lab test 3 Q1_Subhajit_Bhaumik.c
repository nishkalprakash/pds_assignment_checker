#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

int m,n;


// Function for checking if a given cell can be included or not
int Safe(int** M, int r, int c, bool visit[][n])
{
	// r denoting row and c denoting columns
	return (r >= 0) && (r < m) && (c >= 0) && (c < n) && (M[r][c] && !visit[r][c]);
}

//Checking the 8 neighbours
void neighbour(int** M, int r, int c, bool visit[][n])
{
	//arrays needed to get the 8 neighbor
	static int rNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	static int cNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

	visit[r][c] = true;

	// Recurring for all the 8 connected neighbors
	for (int k = 0; k < 8; ++k)
		if (Safe(M, r + rNbr[k], c + cNbr[k], visit))
			neighbour(M, r + rNbr[k], c + cNbr[k], visit);
}

int count(int** M)
{
	bool visit[m][n];
	memset(visit, 0, sizeof(visit));

	// Initialize count as 0 and then going through all the elements
	int count = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (M[i][j] && !visit[i][j])
			{
				neighbour(M, i, j, visit);
				++count;
                M[i][j] = count;
			}

	return count;
}

void addingLabels(int** matrix, int m, int n)
{

}
//main function
void main()
{
    printf("Enter the image size:");
    scanf("%d", &m);
    scanf("%d", &n);

    int** matrix = (int** )calloc(m,sizeof(int*));
    for(int i=0; i<m; i++)
        matrix[i] = (char* )calloc(n,sizeof(int));

    printf("Enter the image: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //printing number of connected components
    printf("\nNumber of connected components = %d", count(matrix));

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

    //printing the matrix with labeled connected components
    printf("\n\nOutput image with labeled connected components: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }

}
