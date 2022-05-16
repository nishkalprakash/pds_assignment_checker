// Name=Kshitij Banerjee
// Roll No=21CH10035
// Department=Chemical
// Package=Codeblocks
// OS=Windows11

#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter no. of points: ");
    scanf("%d", &n);

    float x[n], y[n];
    printf("\nx -coordinates: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    printf("y -coordinates: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &y[i]);
    }
    float xsum = 0, ysum = 0;
    for (int i = 0; i < n; i++)
    {
        xsum += x[i];
        ysum += y[i];
    }
    float mean_x = xsum / n, mean_y = ysum / n;
    float slope = 0, comp1 = 0, comp2 = 0;

    for (int i = 0; i < n; i++)
    {
        comp1 += (x[i] - mean_x) * (y[i] - mean_y);
        comp2 += (x[i] - mean_x) * (x[i] - mean_x);
    }
    slope = comp1 / comp2;

    printf("m = %0.1f, ", slope);
    float intercept = mean_y - mean_x * slope;
    printf("b = %0.1f, line equation y = %0.1fx + %0.1f\n", intercept, slope, intercept);
    return 0;
}
