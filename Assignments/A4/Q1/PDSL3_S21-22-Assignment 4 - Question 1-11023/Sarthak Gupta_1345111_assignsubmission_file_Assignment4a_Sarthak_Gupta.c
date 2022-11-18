#include <stdio.h>

void combination(int array[], int length, int n, int m) // recursive function
{
    int c1;
    if (length == 1)
    {

        for (c1 = 0; c1 < n; c1++)
            printf("%d", array[c1]);
        if (c1 % m == 0 && c1 > 0)
        {
            printf("\n");
        }
        return;
    }
    else
    {
        return combination(array, length - 1, n, m);
    }
}
int main()
{
    int a[50], l, n, i, m; // l=number of elements in combination,n=length of array given by user
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &l);
    m = l;
    combination(a, l, n, m);
}