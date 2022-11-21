#include<stdio.h>
#include<math.h>
int main()
{
double a,b;
scanf("%lf %lf", &a,&b);
double temp=sqrt(a*b);
printf("%e",(1/temp));
return 0;
}


