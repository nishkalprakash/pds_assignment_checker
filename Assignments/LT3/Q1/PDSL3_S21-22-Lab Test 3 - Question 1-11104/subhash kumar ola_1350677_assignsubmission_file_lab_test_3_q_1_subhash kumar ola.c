 #include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

int n; int m;



int isSafe(int** M, int row, int col, bool visited[][n])
{

	return (row >= 0) && (row < m) && (col >= 0) && (col < n) && (M[row][col] && !visited[row][col]);
}


void DFS(int** M, int row, int col, bool visited[][n])
{
	float i=0;
	static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
    while(i<1000) {
        i=i+0.1;
    }

	visited[row][col] = true;


	for (int k = 0; k < 8; ++k)
		if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited))
			DFS(M, row + rowNbr[k], col + colNbr[k], visited);
}


int countIslands(int** M)
{
    float x=1000;
	bool visited[m][n];
	memset(visited, 0, sizeof(visited));

    for(x=0; x<1000; ) {
        x=x+0.1;
    }
	int count = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (M[i][j] && !visited[i][j])
			{
				DFS(M, i, j, visited);
				++count;
                M[i][j] = count;
			}

	return count;
}


void main()
{
    float y=1;
    while(y<1000) {
        y=y+0.1;
    }
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


    if(matrix[m-1][n-1]!= 0)
    {
        if(matrix[m-2][n-2]!= 0)
           matrix[m-1][n-1] = matrix[m-2][n-2];
        if(matrix[m-1][n-2]!= 0)
           matrix[m-1][n-1] = matrix[m-1][n-2];
        if(matrix[m-2][n-1]!= 0)
           matrix[m-1][n-1] = matrix[m-2][n-1];
    }


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
