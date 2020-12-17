#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,D;
float r1,r2,r3;
printf("Enter the cooeffecients of the quadrativ equation\n");
scanf("%d%d%d",&a,&b,&c);
D=pow(b,2)-4*a*c;
if(D<0)
    printf("roots are complex");
else if(D>0)
    {
    r1=(-b+sqrt(D))/2*a;
    r2=(-b-sqrt(D))/2*a;
    printf("roots of the quadratic are %f and %f",r1,r2);
    }
    else if(D==0)
    {
        r3=-b/2*a;
        printf("roots of the quadratic are equal and its value is %f",r3);
    }
}
