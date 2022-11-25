#include<stdio.h>
#include<math.h>
int main()
{
float h,n,s,a;
printf("enter the value of height");
scanf("%f",&h);
printf("enter the value of n");
scanf("%f",&n);
a = 1-pow(0.25,n-1);
s = h+(2*h*a)/3;
printf("the distance is = %f",s);
return 0;
}

