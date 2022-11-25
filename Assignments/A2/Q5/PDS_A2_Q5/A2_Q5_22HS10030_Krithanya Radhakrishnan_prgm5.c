#include <stdio.h>
#include <math.h>
int main ()
{
int y,n;
float dist;
printf("enter height and no. of jmps");
scanf("%d %d",&y,&n);
dist=y + 2*y*(1- pow(1/4,n-1))/3.0;
printf("%f",dist);
return 0;
}
