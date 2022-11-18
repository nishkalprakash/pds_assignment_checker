// NAME - AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// SECTION - 03
// DEPT. - AGRICULTURAL AND FOOD ENGINEERING

#include <stdio.h>

int main()
{
    int a1[10], a2[10];
    int sumx = 0, sumy = 0;
    float meanx, meany, m, b, denominator = 0, numerator = 0;

    printf("x-coordinates: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a1[i]);
        sumx += a1[i];
    }

    printf("y-coordinates: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a2[i]);
        sumy += a2[i];
    }

    meanx = sumx / 10;
    meany = sumy / 10;

    for (int i = 0; i < 10; i++)
    {
        numerator += (a1[i] - meanx) * (a2[i] - meany);
        denominator += (a1[i] - meanx) * (a1[i] - meanx);
    }

    m = numerator / denominator;
    b = meany - (m * meanx);

    printf("m = %.1f, b = %.1f, line equation y = %.1fx + %.1f", m, b, m, b);

    return 0;
}
