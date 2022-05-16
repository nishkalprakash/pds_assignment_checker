/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include<stdio.h>
#include<math.h>

int main(void)
{
    int i;
    double x[100], x0, e, m;

    double f[100];
    double g[100];

    printf("x0 = ");
    scanf("%lf", &x0);

    printf("E = ");
    scanf("%lf", &e);

    printf("maxIleration = ");
    scanf("%lf", &m);

    x[0] = x0;

    for (i = 0; i < m; i++)
    {
        f[i]= pow(x[i], 3) - 25;
        g[i]= 3 * pow(x[i], 2);

        x[i+1] = x[i] - f[i]/g[i];
        e = x[i] - x[i+1];
        printf("Iteration:%d, x0: %lf, x1: %lf, Error: %lf \n", i+1, x[i], x[i+1], e);
        if ( e == 0)
        {
            break;
        }
    }
    printf("The square root is %lf", x[i]);
    return 0;
}
