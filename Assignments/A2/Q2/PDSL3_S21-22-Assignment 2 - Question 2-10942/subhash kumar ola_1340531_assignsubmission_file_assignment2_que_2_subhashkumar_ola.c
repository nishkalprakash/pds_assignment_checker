 #include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    srand(time(NULL));
    int p, d = 0, n, k;
    float dis = 0, val;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of k: ");
    scanf("%d", &k);

    for(int i=0;i<k;i++)
    {
        d=0;
        for(int j=0;j<n;j++)
        {
            p = rand() & 1 ? -1 : 1;
            d = d + (p);
        }

        dis = dis + d*d;
    }
    val = sqrt(dis/k);
    printf("\n%f\n", val);

    return 0;
}
