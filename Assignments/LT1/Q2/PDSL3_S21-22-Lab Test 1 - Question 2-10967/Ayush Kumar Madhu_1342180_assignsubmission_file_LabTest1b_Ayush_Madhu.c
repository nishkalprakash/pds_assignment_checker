// NAME - AYUSH KUMAR MADHU
// ROLL NO. - 21AG30007
// SECTION - 03
// DEPT. - AGRICULTURAL AND FOOD ENGINEERING

#include <stdio.h>

int main()
{
    float x1, e, n, f, fd, x2;
    printf("x = ");
    scanf("%f", &x1);
    printf("e = ");
    scanf("%f", &e);
    printf("maxIteration = ");
    scanf("%f", &n);

    printf("Iteration\tx0\t    x1\t\tError\n");
 
    for (int i = 1; i <= n; i++)
    {
        f = (x1 * x1 * x1) - 25;
        fd = 3 * x1 * x1;
        x2 = x1 - (f / fd);
        if (x1 - x2 != 0)
            printf("    %d\t     %f     %f    %f\n", i, x1, x2, x1 - x2);
        else
            break;
        x1 = x2;
    }
    printf("The square root is %f",x2);
    return 0;
}
