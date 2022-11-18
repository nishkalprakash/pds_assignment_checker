/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include <stdio.h>
#include <stdlib.h>

int size (int x, int y, int m)
{
    return (y - x)/m;
}

int main()
{
    int n, m, k = 0;

    printf("n: ");
    scanf("%d", &n);

    int *a = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Number of bins: ");
    scanf("%d", &m);

    int x = 999, y = -999;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > y)
        {
            y = a[i];
        }

        else if (a[i] < x)
        {
            x = a[i];
        }
    }

    int **b = malloc(m * sizeof(int *));

    int *c = calloc(m+1, sizeof(int));
    int *d = calloc(m, sizeof(int));

    c[0] = x;

    for (int i = 1; i < m; i++)
    {
        b[i] = (int *)malloc(n * sizeof(int));

        if (i < (y-x)%m)
        {
            c[i] = c[i-1] + size(x, y, m) + 1;
        }

        else
        {
            c[i] = c[i-1] + size(x, y, m);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= c[0] && a[i] < c[1])
        {
            b[0][d[0]] = a[i];
            d[0]++;
        }


    }
}
