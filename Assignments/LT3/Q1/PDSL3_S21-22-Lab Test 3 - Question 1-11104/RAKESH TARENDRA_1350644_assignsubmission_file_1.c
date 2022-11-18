/*
RAKESH TARENDRA
21MT30031
*/
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

int n; int m;

int safe(int** M, int r, int c, bool vis[][n])
{

	return (r >= 0) && (r < m) && (c >= 0) && (c < n) && (M[r][c] && !vis[r][c]);
}

void DFS(int** M, int row, int col, bool vis[][n])
{

	static int rn[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
	static int cn[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

	vis[row][col] = true;
	for (int k = 0; k < 8; ++k)
		if (safe(M, row + rn[k], col + cn[k], vis))
			DFS(M, row + rn[k], col + cn[k], vis);
}

int cis(int** M)
{

	bool vis[m][n];
	memset(vis, 0, sizeof(vis));


	int c = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (M[i][j] && !vis[i][j])
			{
				DFS(M, i, j, vis);
				++c;
                M[i][j] = c;
			}

	return c;
}

void main()
{
    printf("enter size of image: ");
    scanf("%d", &m);
    scanf("%d", &n);

    int** mat = (int** )calloc(m,sizeof(int*));
    for(int i=0; i<m; i++)
        mat[i] = (char* )calloc(n,sizeof(int));

    printf("Enter matrix elements: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nNo. of connected components : %d", cis(mat));

    //correcting the last element
    if(mat[m-1][n-1]!= 0)
    {
        if(mat[m-2][n-2]!= 0)
           mat[m-1][n-1] = mat[m-2][n-2];
        if(mat[m-1][n-2]!= 0)
           mat[m-1][n-1] = mat[m-1][n-2];
        if(mat[m-2][n-1]!= 0)
           mat[m-1][n-1] = mat[m-2][n-1];
    }

    //printing the matrix
    printf("\n\nOutput image with label connected components : \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }

}
