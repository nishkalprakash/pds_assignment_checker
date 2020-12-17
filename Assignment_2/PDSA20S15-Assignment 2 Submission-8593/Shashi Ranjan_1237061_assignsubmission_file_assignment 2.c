#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,p,q;
printf("enter the value of a,b,c \n");
scanf("%f%f%f",&a,&b,&c);
printf("the coefficients of the quadratic equation are\n");
printf("%f\n",a);
printf("%f\n",b);
printf("%f\n",c);
d=(b*b)-(4*a*c);
if(d<0)
{printf("the roots of the equation are complex\n");

}
else{
    p= (-b+sqrt(d))/(2*a);
    q= (-b-sqrt(d))/(2*a);
    printf("the roots of the equaton are (%f,%f)\n",p,q);
    if(p==q)
        printf("the roots are equal\n");

}

}
