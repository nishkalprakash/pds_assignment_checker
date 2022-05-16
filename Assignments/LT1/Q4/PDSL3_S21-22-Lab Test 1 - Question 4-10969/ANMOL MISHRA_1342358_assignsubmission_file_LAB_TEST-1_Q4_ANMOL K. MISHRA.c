#include <stdio.h>
#define SIZE 10

int main()
{
    float x[SIZE], y[SIZE], sum_x = 0, sum_y = 0, mean_x, mean_y, m, m_numerator=0, m_denominator=0, b;
    int i;
    printf("Enter the respective x co-ordinates of %d points.\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%f", &x[i]);
        sum_x += x[i];
    }
    mean_x = sum_x / SIZE;
    printf("Enter the respective y co-ordinates of %d points.\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%f", &y[i]);
        sum_y += y[i];
    }
    mean_y = sum_y / SIZE;
    for (i = 0; i < SIZE; i++)
    {
        m_numerator+=(x[i]-mean_x)*(y[i]-mean_y);
        m_denominator+=(x[i]-mean_x)*(x[i]-mean_x);
    }
    m = m_numerator / m_denominator;
    b = mean_y - (m * mean_y);
    printf("m = %.2f, b = %.2f, line equation y = %.2f*x + %.2f\n", m, b, m, b);
    return 0;
}