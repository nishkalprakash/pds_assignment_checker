/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include<stdio.h>
#include <math.h>

int main(void)
{
    int a, u, alpha;
    float t;
    float d1, d2,  dist;

    printf("Enter the values of a, u, alpha in order: ");
    scanf("%i%i%i", &a, &u, &alpha);

    printf("\n Enter the time: ");
    scanf("%f", &t);

    d1 = (u * t) + (0.5 * alpha * t * t);

    d2 = sqrt(pow(a - 0, 2) + pow(0 - 0, 2));

    if (a >= 0)
    {
        printf("Distance = %f", d1 + d2);
        return 0;
    }
    else
    {
        printf("Distance = %f", d1 - d2);
        return 0;
    }

}
