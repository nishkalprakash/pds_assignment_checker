#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(0));
    int *A, n, i;
    int p=2,q=1000;
    scanf("%d",&n);
    if (n <= 0) exit(1);
    A = (int *)malloc(n * sizeof(int));
    if (A == NULL)
    {
        printf("so many integers\n"); exit(2);
    }
    for (i=0; i<n; ++i)
    {
        A[i] = p + rand()%q;
    }
    return 0;
}
