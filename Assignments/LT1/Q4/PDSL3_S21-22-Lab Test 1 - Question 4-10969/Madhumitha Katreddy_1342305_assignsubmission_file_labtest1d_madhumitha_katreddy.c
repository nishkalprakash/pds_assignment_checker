
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Number of ordered pairs:");
    scanf("%d", &n);
    float mean_x = 0, mean_y = 0, arr_x[n], arr_y[n], sum_x = 0, sum_y = 0, sum = 0, sum_x2 = 0;
    printf("\nx -coordinates:");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr_x[i]);
        sum_x += arr_x[i];
    }
    printf("\ny -coordinates:");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr_y[i]);
        sum_y += arr_y[i];
    }
    mean_x = sum_x / n;
    mean_y = sum_y / n;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (arr_x[i] - mean_x) * (arr_y[i] - mean_y);
    }
    for (int i = 0; i < n; i++)
    {
        sum_x2 = sum_x2 + (arr_x[i] - mean_x) * (arr_x[i] - mean_x);
    }
    float slope = sum / sum_x2;
    float intercept = mean_y - mean_x * slope;
    printf("m = %0.1f,b = %0.1f,line equation y = %0.1fx+%0.1f\n", slope, intercept, slope, intercept);
    return 0;
}
