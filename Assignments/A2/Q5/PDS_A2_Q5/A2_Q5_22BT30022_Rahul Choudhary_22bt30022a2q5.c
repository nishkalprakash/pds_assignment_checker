#include<stdio.h>
#include<math.h>
int main ()
{
float y,d;
int n;
printf ("enter value of y:");
scanf("%f",&y);
printf("enter value of n:");
scanf("%d",&n);
d=y+((2*y)/3)*(1-pow(4,(1-n)));
printf("total distance: %f",d);
return 0;
}
