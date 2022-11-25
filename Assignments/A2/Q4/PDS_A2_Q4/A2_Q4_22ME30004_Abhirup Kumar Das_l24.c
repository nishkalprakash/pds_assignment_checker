#include<stdio.h>
#include<math.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b); //For putting the values of a,b
printf("%f", 1/sqrt(a*b));// For the output
float temp=sqrt(a*b);
 float r=1/temp;
printf("The speed of Light is %f",r);
return 0;
}
