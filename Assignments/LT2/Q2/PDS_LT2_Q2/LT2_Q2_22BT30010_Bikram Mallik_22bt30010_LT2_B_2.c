#include <stdio.h>
#include <stdlib.h>
int max(int *a, int n)
{
    int i;
    int max = a[i];
    for (i = 0; i < n; i++)
        if (a[i] < max)
            max = a[i];
    // {
        return max;
    }
    int main()
    {
        int n, p, q, *a, i;
        scanf("%d%d%d", &n, &p, &q);
        a = (int *)malloc(n * sizeof(int));
        if (n == 0)
        {
            printf("invalid value of n");
        }
        else if (p > q)
        {
            printf("p should be less than or equal to q");
        }
        return 0;
    }
    // for(i=0;i<n;i++){
    //   a=rand()%(q-p+1)+p;
    //}
