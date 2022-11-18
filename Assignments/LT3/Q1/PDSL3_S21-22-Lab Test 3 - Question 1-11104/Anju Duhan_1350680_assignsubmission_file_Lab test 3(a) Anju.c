#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int n;
int m;

int safeIs(int **M, int row, int col, bool visit[][n]);
void _DFS(int **M, int row, int col, bool visit[][n]);
int countlands(int **M);
void addLabels(int **mat, int m, int n);

void main()
{
    printf("Enter the image size: ");
    scanf("%d", &m);
    scanf("%d", &n);

    int **mat = (int **)calloc(m, sizeof(int *));
    for (int i = 0; i < m; i++)
        mat[i] = (char *)calloc(n, sizeof(int));

    printf("Enter the mat elements row wise : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nNo. of connected components : %d", countlands(mat));

    if (mat[m - 1][n - 1] != 0)
    {
        if (mat[m - 2][n - 2] != 0)
            mat[m - 1][n - 1] = mat[m - 2][n - 2];
        if (mat[m - 1][n - 2] != 0)
            mat[m - 1][n - 1] = mat[m - 1][n - 2];
        if (mat[m - 2][n - 1] != 0)
            mat[m - 1][n - 1] = mat[m - 2][n - 1];
    }

    printf("\n\nOutput image with label connected components : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
}
int safeIs(int **M, int row, int col, bool visit[][n])
{
    return (row >= 0) && (row < m) && (col >= 0) && (col < n) && (M[row][col] && !visit[row][col]);
}

void _DFS(int **M, int row, int col, bool visit[][n])
{
    static int row_num[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    static int col_num[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    visit[row][col] = true;

    for (int k = 0; k < 8; ++k)
        if (safeIs(M, row + row_num[k], col + col_num[k], visit))
            _DFS(M, row + row_num[k], col + col_num[k], visit);
}

int countlands(int **M)
{
    bool visit[m][n];
    memset(visit, 0, sizeof(visit));

    int count = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (M[i][j] && !visit[i][j]) // If a cell with value 1 is not
            { // visit yet, then new island found
                _DFS(M, i, j, visit); // Visit all cells in this island.
                ++count; // and increment island count
                M[i][j] = count;
            }

    return count;
}

void addLabels(int **mat, int m, int n)
{
}
