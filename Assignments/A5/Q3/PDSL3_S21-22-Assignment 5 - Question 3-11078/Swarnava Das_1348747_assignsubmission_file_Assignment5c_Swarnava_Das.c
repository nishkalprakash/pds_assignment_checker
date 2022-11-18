// NAME: SWARNAVA DAS
// ROLL: 21NA10037
// DEPARTMENT: OCEAN ENGINEERING AND NAVAL ARCHITECTURE
// PACKAGE: VISUAL STUDIO CODE
// ASSIGNMENT CLASS:5

#include <stdio.h>
#include <stdlib.h>

void saddle(int rows, int cols, int w[rows][cols])
{
    int i, j, temp1 = 0, temp2 = 0, temp3 = 0, temp4 = 0, k;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            temp1 = 0;
            temp2 = 0;
            temp3 = 0;
            temp4 = 0;
            for (k = 0; k < cols; k++)
            {
                if (k == j)
                {
                    continue;
                }
                if (w[i][k] >= w[i][j])
                {
                    temp1 = 1;
                    break;
                }
            }
            for (k = 0; k < rows; k++)
            {
                if (k == i)
                {
                    continue;
                }
                if (w[k][j] <= w[i][j])
                {
                    temp2 = 1;
                    break;
                }
            }

            for (k = 0; k < cols; k++)
            {
                if (k == j)
                {
                    continue;
                }
                if (w[i][k] <= w[i][j])
                {
                    temp3 = 1;
                    break;
                }
            }
            for (k = 0; k < rows; k++)
            {
                if (k == i)
                {
                    continue;
                }
                if (w[k][j] >= w[i][j])
                {
                    temp4 = 1;
                    break;
                }
            }

            if (((temp1 == 0) && (temp2 == 0)) || ((temp3 == 0) && (temp4 == 0)))
            {
                printf("a[%d][%d]=%d is a saddle point\n", (i + 1), (j + 1), w[i][j]);
            }
        }
    }
}
int main()
{
    int rows, cols, i, j;
    int **w;
    printf("enter the number of rows\n");
    scanf("%d", &rows);
    printf("enter the number of columns\n");
    scanf("%d", &cols);
    w = (int **)malloc((rows) * (sizeof(int)));
    for (i = 0; i < rows; i++)
    {
        w[i] = (int *)malloc(cols * sizeof(int));
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("enter the value for row %d, column %d\n", i + 1, j + 1);
            scanf("%d", &w[i][j]);
        }
    }
    saddle(rows,cols,w);
    return 0;
}
