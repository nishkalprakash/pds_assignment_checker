#include<stdio.h>
#include <math.h>
int main()
{
double f1,f2,value;//declaration of variables
printf("Enter values meu and epsilon\n");
scanf("%lf %lf",&f1,&f2);
value=1/(pow(f1*f2,0.5));
printf("Speed of light:%lf",value);
return 0;
}

