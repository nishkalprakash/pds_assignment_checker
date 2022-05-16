// NAME - AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// SECTION - 03
// DEPT. - AGRICULTURAL AND FOOD ENGINEERING

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    // TAKING n, k as INPUT
    int n, k;
    printf("n = ");
    scanf("%d", &n);
    printf("k = ");
    scanf("%d", &k);

    // INITIALIZING EXTRA VARIABLES
    int temp, d, p, k1, D;
    k1 = k;
    temp = n;
    d = 0;
    D = 0;

    // CALCULATION OF DISTANCE
    while (k1 != 0)
    {
        while (temp != 0)
        {
            p = rand() & 1 ? -1 : 1;
            d += p;
            temp -= 1;
        }

        D += d * d;
        temp = n;
        d = 0;
        k1 -= 1;
    }

    float de;
    de = sqrt(D / k);
    printf("%f", de);
    return 0;
}