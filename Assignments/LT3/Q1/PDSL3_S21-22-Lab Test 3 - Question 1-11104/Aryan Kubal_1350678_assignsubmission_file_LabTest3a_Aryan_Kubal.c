/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n; int m;



int Safe(int** mat, int row, int col, bool visit[][n])
{
    int x=(row >= 0) && (row < m) && (col >= 0) && (col < n) && (mat[row][col] && !visit[row][col]);
	return x;
}

void comp(int** mat, int r, int c, bool visit[][n]);



int Counting(int** mat);




void main()
{
    printf("Enter the image size: ");
    scanf("%d", &m);   scanf("%d", &n);

    int** mat = (int** )calloc(m,sizeof(int*));
    for(int i=0; i<m; i++){

        mat[i] = (int* )calloc(n,sizeof(int));
    }

    printf("Enter the image: \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }




    if(mat[m-1][n-1]!= 0)
    {
        if(mat[m-2][n-2]!= 0)
           mat[m-1][n-1] = mat[m-2][n-2];
        if(mat[m-1][n-2]!= 0)
           mat[m-1][n-1] = mat[m-1][n-2];
        if(mat[m-2][n-1]!= 0)
           mat[m-1][n-1] = mat[m-2][n-1];
    }

    printf("\nNo. of connected components : %d", Counting(mat));
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

int Counting(int** mat)
{

	bool visit[m][n];
	memset(visit, 0, sizeof(visit));


	int count = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (mat[i][j] && !visit[i][j])
			{
				comp(mat, i, j, visit);
				++count;
                mat[i][j] = count;
			}

	return count;
}


void comp(int** mat, int r, int c, bool visit[][n])
{
	static int col[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

	static int row[] = { -1, -1, -1, 0, 0, 1, 1, 1 };

	visit[r][c] = true;
    int k=0;
    while(k<8)
    {
        if (Safe(mat, r + row[k], c + col[k], visit))
        {
            comp(mat, r + row[k], c + col[k], visit);
        }
        k++;
    }

}