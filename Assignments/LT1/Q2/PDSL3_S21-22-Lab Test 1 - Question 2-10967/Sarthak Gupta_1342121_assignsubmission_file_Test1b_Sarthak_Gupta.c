#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{float a,b,c,f,fderivative,u;
int i;
printf("Enter the value of x0 (the point which is near to the root)\n");
scanf("%f",&a);
printf("Enter the tolerance limit\n");
scanf("%f",&b);
printf("Enter the number of iterations\n");
scanf("%f",&c);
f=a*a*a-25;
fderivative=3*a*a;
printf("Iteration\tx0\t\tx1\t\tError\n");
for(i=1;i<=c;i++)
{u=a;
f=a*a*a-25;
fderivative=3*a*a;
a=a-(f/fderivative);
printf("%d\t",i);
printf("\t%f\t",u);
printf("%f\t",a);
printf("%f\t\n",fabs(u-a));
if(fabs(u-a)<b)
{break;}
}
printf("The square root is %f",a);
return 0 ;
}