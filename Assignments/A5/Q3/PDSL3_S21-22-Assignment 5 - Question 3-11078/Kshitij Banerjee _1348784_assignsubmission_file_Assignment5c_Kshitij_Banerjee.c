// Name: Kshitij Banerjee
// Roll No: 21CH10035
// Section: 3
// Department: Chemical
// Package: Codeblocks

#include <stdio.h>
#include <stdlib.h>

void saddle(int **a, int r, int c)
{
    int count = 0;
    printf("Saddle points : ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // printf("%d ",a[i][j]);
            int min1 = a[i][j];
            int max1 = a[i][j];
            int min2 = a[i][j];
            int max2 = a[i][j];

            int c1 = 0, d = 0;

            for (int k = 0; k < r; k++)
            {
                if (a[k][j] == a[i][j])
                    c1++;
                if (a[k][j] > max1)
                    max1 = a[k][j];
                if (a[k][j] < min1)
                    min1 = a[k][j];
            }

            for (int k = 0; k < c; k++)
            {
                if (a[i][k] == a[i][j])
                    d++;
                if (a[i][k] > max2)
                    max2 = a[i][k];
                if (a[i][k] < min2)
                    min2 = a[i][k];
            }
            // if(i==1&&j==1)
            // {
            //     printf("%d %d %d %d %d %d\n",max1,min1,max2,min2,c,d);
            // }

            if (((a[i][j] == min1 && a[i][j] == max2) || (a[i][j] == min2 && a[i][j] == max1)) && c1 == 1 && d == 1)
            {
                // printf("%d %d %d %d %d %d\n",max1,min1,max2,min2,c,d);

                printf("a[%d][%d] = %d is a saddle point\n", i, j, a[i][j]);
                count++;
            }
        }
        // printf("\n");
    }

    if (count == 0)
    {
        printf("No saddle points");
    }
}
int main()
{
    int r, c;
    printf("Enter row and column : ");
    scanf("%d%d", &r, &c);
    int **arr = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
        arr[i] = (int *)malloc(c * sizeof(int));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    saddle(arr, r, c);

    return 0;
}
