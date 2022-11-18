#include<stdio.h>
#include<math.h>

int main()


{
float a,u,alpha,t;      /*a is intial coordinate in xaxis,u is intial speed,alpha is acceleration,t is time*/


float distance,s;       /*s is final coordinate on xaxis*/


printf("enter the values of a,u,alpha,time:\n");


scanf("%f,%f,%f,%f",&a,&u,&alpha,&t);


s=(u*t+0.5*a*t*t);     /* s is final coordinate*/


distance=sqrt(pow(s-a,2)+pow(0,2));


printf("%f\n",s);


printf("%f\n",distance);


return 0;


}
