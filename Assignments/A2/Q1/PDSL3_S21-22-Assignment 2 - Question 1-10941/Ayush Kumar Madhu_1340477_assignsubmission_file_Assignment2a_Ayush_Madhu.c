// NAME - AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// SECTION - 03
// DEPT. - AGRICULTURAL AND FOOD ENGINEERING

#include <stdio.h>
#include <math.h>

int main()
{
    // TAKING z, k as INPUT
    int k;
    float z;
    printf("z = ");
    scanf("%f", &z);
    printf("k = ");
    scanf("%d", &k);

    // CALCULATION OF Z
    float s, x;
    for (int i = 1; i <= k+1; i++)
    {
        s = sqrt(z);
        x = z;
        z = z - s;

        if (z < 0)
            z = (-1) * z;

        if (x == z)
        {
            printf("(%f,%d)\n", z, i);
            s = s - (1 / k);
            z = z - s * s;
        }

        if (z == 0)
        {
            printf("(%f,%d)\n", z, i + 1);
            break;
        }
        printf("(%f,%d), ", z, i);
    }
}