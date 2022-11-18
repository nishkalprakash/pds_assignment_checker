// NAME: SWARNAVA DAS
// ROLL: 21NA10037
// DEPARTMENT: OCEAN ENGINEERING AND NAVAL ARCHITECTURE
// PACKAGE: VISUAL STUDIO CODE
// ASSIGNMENT CLASS:5

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int rows, cols, i, j, temp=1;
    int **w;
    int **x;
    printf("enter the number of rows in the image matrix\n");
    scanf("%d", &rows);
    printf("enter the number of columns in the image matrix\n");
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
            printf("enter the value(ONLY 0 OR 1 ) for row %d, column %d\n", i + 1, j + 1);
            scanf("%d", &w[i][j]);
            if ((w[i][j] != 0) && (w[i][j] != 1))
            {
                printf("INVALID ENTRY!!YOU WILL GET WRONG RESULT.RERUN THE PROGRAM AND ENTER ENTRIES COMPRISING ONLY 1 OR 0\n");
            }
        }
    }
    x = (int **)malloc((rows) * (sizeof(int)));
    for (i = 0; i < rows; i++)
    {
        x[i] = (int *)malloc(cols * sizeof(int));
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (w[i][j] == 0)
            {
                x[i][j] = 0;
            }
            if (w[i][j] == 1)
            {
                if ((i == 0) && (j == 0))
                {
                    x[i][j] = 1;
                }
                else if ((i == 0) && (j != 0))
                {
                    if ((w[i][j - 1] == 1) || (w[i][j + 1] == 1) || (w[i + 1][j - 1] == 1) || (w[i + 1][j] == 1) || (w[i + 1][j + 1] == 1))
                    {

                        if (x[i][j - 1] != 0)
                        {
                            x[i][j] = x[i][j - 1];
                        }
                    }
                    else
                    {
                        temp++;
                        x[i][j] = temp;
                    }
                }
                else if ((i != 0) && (j == 0))
                {
                    if ((w[i - 1][j] == 1) || (w[i - 1][j + 1] == 1) || (w[i][j + 1] == 1) || (w[i + 1][j] == 1) || (w[i + 1][j + 1] == 1))
                    {

                        if (x[i - 1][j] != 0)
                        {
                            x[i][j] = x[i - 1][j];
                        }
                        if (x[i - 1][j + 1] != 0)
                        {
                            x[i][j] = x[i - 1][j + 1];
                        }
                    }
                    else
                    {
                        temp++;
                        x[i][j] = temp;
                    }
                }
                else
                {
                    if ((w[i - 1][j - 1] == 1) || (w[i - 1][j] == 1) || (w[i - 1][j + 1] == 1) || (w[i][j - 1] == 1) || (w[i][j + 1] == 1) || (w[i + 1][j - 1] == 1) || (w[i + 1][j] == 1) || (w[i + 1][j + 1] == 1))
                    {
                        if (x[i - 1][j - 1] != 0)
                        {
                            x[i][j] = x[i - 1][j - 1];
                        }
                        if (x[i - 1][j] != 0)
                        {
                            x[i][j] = x[i - 1][j];
                        }
                        if (x[i - 1][j + 1] != 0)
                        {
                            x[i][j] = x[i - 1][j + 1];
                        }
                        if (x[i][j - 1] != 0)
                        {
                            x[i][j] = x[i][j - 1];
                        }
                    }
                    else
                    {
                        temp++;
                        x[i][j] = temp;
                    }
                }

               
            }
        }
    }
for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", x[i][j]);
            
            
        }
        printf("\n");
            
    }
    return 0;
}
