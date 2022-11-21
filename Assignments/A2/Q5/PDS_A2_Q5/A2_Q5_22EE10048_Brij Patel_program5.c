#include <stdio.h>
#include <math.h>
int main()
{
float y,d;
int n;
printf("Enter value of y: ");
scanf("%f",&y);
printf("Enter value of n: ");
scanf("%d",&n);
d=y+((2*y)/3)*(1-pow(4,(1-n)));
printf("Total distance: %f",d);
return 0;
}

