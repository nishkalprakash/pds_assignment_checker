//for calculating speed of light 
#include<stdio.h>
#include<math.h>
int main()
{
double c, u, e;
printf("enter values of u and e \n");
scanf("%lf %lf", &u,&e);//reading inputs
c=1/(sqrt(u*e));
printf("speed of light=%.3e\n",c);//printing results
return 0;
}
