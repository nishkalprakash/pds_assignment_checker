#include <stdio.h>
int main(int argc, char const *argv[])
{
    char m, n, s;
    double num;
    double p1, p2, g1, g2, total1, total2;
    printf("enter type of wood :\t");
    scanf("%c", &m);
    printf("enter weight of wood:\t");
    scanf("%lf", &num);

    if (m == n)
    {
        p1 = 1100 * num;
        g1 = (20 * num) / 100;
        total1 = p1 + g1;
        printf("Base price=%lf\t", p1);
        printf("GST=%lf \t", g1);
        printf("Total price=%lf \n", total1);
    }
    else
    {
        p2 = 780 * num;
        g2 = (15 * num) / 100;
        total2 = p2 + g2;
        printf("Base price=%lf\t", p2);
        printf("GST=%lf \t", g2);
        printf("Total price=%lf \n", total2);
    }
    return 0;
}
