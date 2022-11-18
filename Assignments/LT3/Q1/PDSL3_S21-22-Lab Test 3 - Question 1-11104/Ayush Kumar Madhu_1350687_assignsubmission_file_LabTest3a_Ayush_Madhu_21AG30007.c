// NAME- AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// DEPT. - AGRICULTURE AND FOOD ENGINEERING
// SECTION - 03

// Including required libraries
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global Variables
int m, n;

// Checking function
int check(int **M, int row, int col, bool v[][n])
{
    return (row >= 0) && (row < m) && (col >= 0) && (col < n) && (M[row][col] && !v[row][col]);
}

void xyz(int **M, int row, int col, bool v[][n])
{
    static int rowNbr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    static int colNbr[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    v[row][col] = true;

    for (int k = 0; k < 8; ++k)
        if (check(M, row + rowNbr[k], col + colNbr[k], v))
            xyz(M, row + rowNbr[k], col + colNbr[k], v);
}

// This function will return total count of elements
int count(int **M)
{
    bool v[m][n];
    memset(v, 0, sizeof(v));

    int count = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (M[i][j] && !v[i][j])
            {
                xyz(M, i, j, v);
                ++count;
                M[i][j] = count;
            }
    return count;
}

// Main function - The program starts from here
int main()
{
    // Defining variables and taking inputs from user
    printf("Enter the image size: ");
    scanf("%d", &m);
    scanf("%d", &n);

    int **mat = (int **)calloc(m, sizeof(int **));
    for (int i = 0; i < m; i++)
        mat[i] = (char *)calloc(n, sizeof(int));

    printf("Enter the matrix elements row wise : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nNo. of connected components : %d", count(mat));

    // Last element correction
    if (mat[m - 1][n - 1] != 0)
    {
        if (mat[m - 2][n - 2] != 0)
            mat[m - 1][n - 1] = mat[m - 2][n - 2];
        if (mat[m - 1][n - 2] != 0)
            mat[m - 1][n - 1] = mat[m - 1][n - 2];
        if (mat[m - 2][n - 1] != 0)
            mat[m - 1][n - 1] = mat[m - 2][n - 1];
    }

    // Printing required matrix 
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
