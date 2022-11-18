#include<stdio.h>
int main ()
{
 float x0,e,m,count,x1 ;
    printf("enter value of x0=");
    scanf("%f",&x0);
    printf("e=");
    scanf("%f",&e);
    printf("maxiteration=");
    scanf("%f",&m);
    count=1;

    while ((count<(m+1)))
 { printf("\nx0=%f",x0);
     x1=x0- ((x0*x0*x0-25)/(3*x0*x0));
 count++;

 printf(" \nx1=%f",x1);
 printf("\nerror=%f\n",(x0-x1));
 x0=x1;
        }
        printf("The square root is %f",x0);
        return 0;

}
