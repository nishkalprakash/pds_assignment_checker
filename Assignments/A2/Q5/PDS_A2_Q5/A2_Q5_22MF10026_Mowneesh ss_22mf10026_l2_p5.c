#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main()
{
float x, y, d;
printf("enter height :");
scanf("%f", &x);
printf(" enter the no of rebounces:");
scanf("%f", &y);
d=x*(5-2*(pow(0.25, y)));
d=d/3;
printf("distance travelled by the body is %f", d);
return 0;
}



