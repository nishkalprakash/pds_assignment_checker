#include <stdio.h>
#include<math.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int r1=(-b+(sqrt(b*b-4*a*c)))/2*a;
int r2=(-b-(sqrt(b*b-4*a*c)))/2*a;
printf("The roots are= %d %d",r1,r2);
return 0;
}
