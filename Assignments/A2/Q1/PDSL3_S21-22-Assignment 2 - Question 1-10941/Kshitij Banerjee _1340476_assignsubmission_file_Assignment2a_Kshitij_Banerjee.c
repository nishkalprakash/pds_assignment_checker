#include <stdio.h>
#include <math.h>

int main()
{
    float s, z, p;
    int k, i, f;
    printf("Enter height(z) : ");
    scanf("%f", &z);
    printf("Enter number of Iter(k) : ");
    scanf("%d", &k);
    i = 1;
    f = 0;
    p = z;
    while (i <= k)
    {
        s = sqrt(z);
        if (f == 1)
        {
            s = s - (1 / i);
            z = z - (pow(s, 2));
            f = 0;
        }
        else
        {
            z = z - s;
        }
        if (z < 0)
        {
            z *= -1;
        }
        printf("(%f,%d), ", z, i);
        if (z == 0)
        {
            break;
        }
        if (z == p)
        {
            f = 1;
        }
        i++;
        p = z;
    }
    return 0;
}
