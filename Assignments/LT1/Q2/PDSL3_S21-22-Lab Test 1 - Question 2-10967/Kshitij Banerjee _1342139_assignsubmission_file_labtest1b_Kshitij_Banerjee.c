// Name=Kshitij Banerjee
// Roll No=21CH10035
// Department=Chemical
// Package=Codeblocks
// OS=Windows11

#include <stdio.h>
#include <math.h>

float func(double x0)
{
    float x1;
    x1 = x0 - ((x0 * x0 * x0 - 25) / (3 * x0 * x0));
    return x1;
}

int main()
{
    float x0, x1, err, e, maxIteration;
    scanf("%f", &x0);
    scanf("%f", &e);
    scanf("%f", &maxIteration);
    x1 = x0 - ((x0 * x0 * x0 - 25) / (3 * x0 * x0));
    if (x1 > x0)
        err = x1 - x0;
    else
        err = x0 - x1;

    int c = 1;
    printf("Iteration           ");
    printf("x0           ");
    printf("x1           ");
    printf("Error            \n");
    while (maxIteration)
    {

        printf("%d           ", c++);
        printf("%f           ", x0);
        printf("%f           ", x1);
        printf("%f           ", err);

        if (err < e)
        {
            printf("\n");
            break;
        }
        x0 = x1;
        x1 = func(x0);
        if (x1 > x0)
        {
            err = x1 - x0;
        }
        else
        {
            err = x0 - x1;
        }
        printf("\n");
        maxIteration--;
    }
    printf("Square root is %f", x1);

    return 0;
}
