// Name: Kshitij Banerjee
// Roll No: 21CH10035
// Section: 3
// Department: Chemical
// Package: Codeblocks

#include <stdio.h>
#include <stdlib.h>

int **coincident(int i, int j, int k, int **a, int **temp) // function to take inputs
{
    for (int row = i; row < i + k; row++)
    {
        for (int col = j; col < j + k; col++)
        {
            temp[row - i][col - j] = a[row][col];
        }
    }
    return temp;
}

int sum(int k, int **a, int **b)
{
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            sum += a[i][j] * b[i][j];
        }
    }
    return sum;
}

int main(void)
{
    int m, n;

    printf("Enter the dimension of input image matrix: "); // taking inputs
    scanf("%d", &m);
    scanf("%d", &n);
    int **a;

    a = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        a[i] = (int *)malloc(n * sizeof(int));
    }

    printf("\nEnter input image matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEntered Matrix:-\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    int ksize, **kernel;
    printf("\nEnter the kernel size: "); // kernel size
    scanf("%d", &ksize);

    kernel = (int **)malloc(ksize * sizeof(int *));
    for (int i = 0; i < ksize; i++)
    {
        kernel[i] = (int *)malloc(ksize * sizeof(int));
    }
    printf("Enter the kernel elements:\n");
    for (int i = 0; i < ksize; i++)
    {
        for (int j = 0; j < ksize; j++)
        {
            scanf("%d", &kernel[i][j]);
        }
    }

    int **image, row = m - ksize + 1, col = n - ksize + 1;
    image = (int **)malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++)
    {
        image[i] = (int *)malloc(col * sizeof(int));
    }

    int **temp;
    temp = (int **)malloc(ksize * sizeof(int *));
    for (int i = 0; i < ksize; i++)
    {
        temp[i] = (int *)malloc(ksize * sizeof(int));
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp = coincident(i, j, ksize, a, temp);
            image[i][j] = sum(ksize, temp, kernel);
        }
    }

    printf("\n\nOutput image matrix is:\n"); // final output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", image[i][j]);
        }
        printf("\n");
    }
    return 0;
}
