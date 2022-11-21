#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
        int a,b,c;
        float r1,r2;
        scanf("%d %d %d",&a,&b,&c);
        r1=(-b + pow(pow(b,2) - 4*a*c,1/2))/2;
        r2=(-b - pow(pow(b,2) - 4*a*c,1/2))/2;

        printf("%f %f",r1,r2);
        return 0;
}
