// Name: Kshitij Banerjee
// Roll No: 21CH10035
// Section: 3
// Department: Chemical
// Package: Codeblocks

#include <stdio.h>
int bin(int *b, int x, int *a, int n, int k)
{
        int c = 0;
        for (int i = x * k; i <= x * (k + 1); i++)
        {
                for (int j = 0; j < n; j++)
                {
                        if (a[j] == i)
                        {
                                if (c == 0)
                                        b[c] = i;
                                else
                                {
                                        b = realloc(b, sizeof(int));
                                        b[c] = i;
                                }
                                c = c + 1;
                        }
                }
        }
        return c;
}
int main()
{
        printf("Enter the number of array elements: ");
        int n;
        scanf("%d", &n);
        int *a = (int *)malloc(n * sizeof(int));
        int i, j;
        for (i = 0; i < n; i++)
                scanf("%d", &a[i]);
        printf("Enter the number of bins: ");
        int m;
        scanf("%d", &m);
        for (i = 0; i <= n; i++)
        {
                for (j = 0; j < n; j++)
                {
                        if (a[j] > a[j + 1])
                        {
                                int t = a[j];
                                a[j] = a[j + 1];
                                a[j + 1] = t;
                        }
                }
        }
        int x = (a[0] + a[n - 1]) / m;
        printf("interval=%d", x);
        int *b = (int *)malloc(sizeof(int));
        for (i = 0; i <= m; i++)
        {
                int c = bin(b, x * (i + 1), a, n, i);
                printf("bin %d->", i + 1);
                for (int j = 0; j < c; j++)
                        printf("%d,", b[j]);
                printf("\n");
                free(b);
                b = (int *)malloc(sizeof(int));
        }
}
