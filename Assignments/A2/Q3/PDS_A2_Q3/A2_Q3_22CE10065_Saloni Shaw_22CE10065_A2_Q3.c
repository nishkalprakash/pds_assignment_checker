#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
double r1,r2;//taking inputs

printf("enter a,b, and c \n");
scanf("%d%d%d",&a,&b,&c);//reading inputs
d=b*b-(4*a*c );
r1=(-b+sqrt(d))/(2*a);
r2=(-b -sqrt(d))/(2*a);//calculating roots
printf("root 1 =%lf\n",r1);
printf("root 2=%lf\n",r2);//printing results
return 0;
}
