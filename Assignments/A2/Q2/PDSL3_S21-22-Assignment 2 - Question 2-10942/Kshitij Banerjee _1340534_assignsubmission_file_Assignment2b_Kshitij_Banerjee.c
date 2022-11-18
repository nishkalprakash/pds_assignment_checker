#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    srand(time(NULL));
    int p, D = 0, d, n, k, i, j;
    printf("Enter the value of n and k: ");
    scanf("%d %d", &n, &k);
    for (i = 0; i < k; i++)
    {
        d = 0;
        for (j = 0; j < n; j++)
        {
            p = rand() & 1 ? -1 : 1;
            d = d + p;
        }
        D = D + d * d;
    }
    float f = sqrt((float)D / k);
    printf("%f", f);
    return 0;
}
