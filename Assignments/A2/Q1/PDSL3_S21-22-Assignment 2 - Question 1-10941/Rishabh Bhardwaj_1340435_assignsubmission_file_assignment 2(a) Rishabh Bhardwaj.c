/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int count = 0, i, k;
    float  s[100], z[100];

    printf("z = ");
    scanf("%f", &z[k]);

    printf("k = ");
    scanf("%d", &k);


    for (i = k; i > 0; i--)
    {

        s[i] = sqrt(z[i]);
        z[i-1] = z[i] - s[i];
        count++;

        if (z[i] == 0)
        {
            break;
        }
        printf("(%.6f, %d)\n", z[i], count);

    }
    for ( i = 0; i < k; i++)
    {
        s[i] = s[i] - ((float) 1)/pow(k, 2);
        z[i] = z[i] - pow(s[i], 2);
        count++;
        if (z[i] == z[k])
        {
            break;
        }
        printf("(%.6f, %d)\n", z[i], count);
    }
}

