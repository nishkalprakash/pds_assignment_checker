#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    float dis,r1,r2,rr2,rr1;
    printf("the coefficeint of quadratic equation will be a,b,c\n");
    printf("enter the values of three coefficnet of quadratic\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("the value of a=%d\n",a);
    printf("the value of b=%d\n",b);
    printf("the value of c=%d\n",c);
    dis=b*b-4*a*c;
    printf("the value of discriminant is=%lf\n",dis);
    if(dis<0)
    {
        printf("roots are complex\n");

    }
    else if(dis==0||dis>0)
    {
        if(dis==0)
        {

            printf("roots are equal\n");
        }
        else
        {
            r1=(-b+sqrt(dis));
            rr1=r1/2/a;
            r2=(-b-sqrt(dis));
            rr2=r2/2/a;
            printf("first root is=%lf\n",rr1);
            printf("second root is=%lf\n",rr2);
        }

    }
    return 0;
}
