// Roll No.: 23CS30049
// Name: Shikhar Burman

// Importing libraries
#include <stdio.h>
#include <stdlib.h>

void findMax(int data[][20], int m, int n)
{
    int sum = 0, maxSum = 0;
    int srow, scol, crow = 0, ccol = 0;
    for (int i = 0; i <= m - 3; i++)
    {
        for (int j = 0; j <= n - 3; j++)
        {
            sum = 0;
            for (crow = 0; crow < 3; crow++)
            {
                for (ccol = 0; ccol < 3; ccol++)
                    sum = sum + data[i + crow][j + ccol];
            }
            if (sum > maxSum)
            {
                maxSum = sum;
                srow = i;
                scol = j;
            }
        }
    }

    for (int i = srow; i < srow + 3; i++)
    {
        for (int j = scol; j < scol + 3; j++)
        {
            printf("%d\t", data[i][j]);
        }
        printf("\n");
    }
    printf("Max Sum = %d\n", maxSum);
}

void findMin(int data[][20], int m, int n)
{
    int sum = 0, minSum = 99999;
    int srow, scol, crow = 0, ccol = 0;
    for (int i = 0; i <= m - 3; i++)
    {
        for (int j = 0; j <= n - 3; j++)
        {
            sum = 0;
            for (crow = 0; crow < 3; crow++)
            {
                for (ccol = 0; ccol < 3; ccol++)
                    sum = sum + data[i + crow][j + ccol];
            }
            if (sum < minSum)
            {
                minSum = sum;
                srow = i;
                scol = j;
            }
        }
    }

    for (int i = srow; i < srow + 3; i++)
    {
        for (int j = scol; j < scol + 3; j++)
        {
            printf("%d\t", data[i][j]);
        }
        printf("\n");
    }
    printf("Min Sum = %d\n", minSum);
}

void findMinMax(int data[][20], int m, int n)
{
    int minRow[m];
    for (int i = 0; i < m; i++)
        minRow[i] = 999;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (data[i][j] < minRow[i])
                minRow[i] = data[i][j];
        }
    }

    int max = 0;
    for (int j = 0; j < n; j++)
        if (minRow[j] > max)
            max = minRow[j];
    printf("%d\n", max);
}

int main()
{
    int data[20][20];
    int m, n;
    do
    {
        printf("Enter m, n: ");
        scanf("%d %d", &m, &n);
        if (m <= 2 || m >= 20 || n <= 2 || n >= 20)
            printf("Please make sure that m,n are in the range (2,20)");
    } while (m <= 2 || m >= 20 || n <= 2 || n >= 20);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            data[i][j] = rand() % 11;
            printf("%d\t", data[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    findMax(data, m, n);
    printf("\n\n");
    findMin(data, m, n);
}