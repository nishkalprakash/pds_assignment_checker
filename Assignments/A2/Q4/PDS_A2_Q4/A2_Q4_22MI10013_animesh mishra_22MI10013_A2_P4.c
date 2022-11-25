#include <math.h>
#include <stdio.h>

int main()
{
    double a,e,b;
    scanf("%lf%lf" ,&a,&e);
    b=1/sqrt(a*e);
    printf("%e", b);
    return 0;
}
