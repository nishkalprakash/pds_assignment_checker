#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,D;
printf("enter the coefficients of the quadratic expression as a,b and c.\n");
scanf("%f%f%f",&a ,&b ,&c);
printf("the coefficients of the given expression are a=%f b=%f and c=%f \n",a ,b ,c);
D=(pow(b,2))-(4*a*c);
if(D>=0)
{
    printf("the quadratic expression has real roots\n");
    printf("the roots of the expression are %f and %f \n",((-b+sqrt(D))/(2*a)),((-b-sqrt(D))/(2*a)));
    if(D==0)
    {
        printf("the roots of the expression are equal\n");
    }
}
else
{
    printf("the quadratic expression has complex roots\n");
}
return 0;
}
