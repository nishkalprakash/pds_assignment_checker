// NAME- SATYAJIT BEHERA
//  ROLL NO-21AG10034
// DEPT- AGRICULTURE AND FOOD ENGINEERING
// SECTION-03
// SOFTWARE- code block

#include <stdio.h>
#include <stdbool.h>

#include <stdlib.h>
#include <string.h>

int n;
int m;

// initialising the function
void D(int **M, int row, int col, bool already_visit[][n])
{

    static int rowr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    static int colr[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    already_visit[row][col] = true;

    for (int k = 0; k < 8; ++k)
        if (S(M, row + rowr[k], col + colr[k], already_visit))
            D(M, row + rowr[k], col + colr[k], already_visit);
}

int S(int **M, int row, int col, bool already_visit[][n])
{
    return (row >= 0) && (row < m) && (col >= 0) && (col < n) && (M[row][col] && !already_visit[row][col]);
}

// The main function that returns count of islands in a given boolean
// 2D matrix
int c(int **M)
{
    // Make a bool array to mark already_visit cells.
    // Initially all cells are unvisited
    bool already_visit[m][n];
    memset(already_visit, 0, sizeof(already_visit));

    // Initialize count as 0
    // given matrix
    int count = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (M[i][j] && !already_visit[i][j])
            {
                D(M, i, j, already_visit);
                ++count;
                M[i][j] = count;
            }

    return count;
}
// c function returning the count
int main()
{
    // taking the user input
    printf("Enter the image size: ");
    scanf("%d", &m);
    scanf("%d", &n);
    // dynamically allocating the matrix
    int **mat = (int **)calloc(m, sizeof(int *));
    for (int i = 0; i < m; i++)
        mat[i] = (char *)calloc(n, sizeof(int));
    // entering the row element
    printf("Enter the matrix elements row wise : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    // printing the connected components
    printf("\nNo. of connected components : %d", c(mat));

    // correcting
    if (mat[m - 1][n - 1] != 0)
    {
        if (mat[m - 2][n - 2] != 0)
            mat[m - 1][n - 1] = mat[m - 2][n - 2];
        if (mat[m - 1][n - 2] != 0)
            mat[m - 1][n - 1] = mat[m - 1][n - 2];
        if (mat[m - 2][n - 1] != 0)
            mat[m - 1][n - 1] = mat[m - 2][n - 1];
    }

    // printing the matrix
    printf("\n\nOutput image with label connected components : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
