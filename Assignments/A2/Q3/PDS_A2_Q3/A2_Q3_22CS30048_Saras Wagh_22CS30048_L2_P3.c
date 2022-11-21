#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float x1;
float P;
printf("a*x^2+b*x+c");
scanf("%d %d %d",&a,&b,&c);
printf("P=%f\n",-b+sqrt(b*b-4*a*c));
printf("x1=%f\n",P/2*a);
printf("Q=%f\n",-b-sqrt(b*b-4*a*c));
printf("x2=%f\n",Q/2*a);
return 0;
}
