/*
Name  : Vankudoth Pavan
Department:Chemical Engineering
Roll NO   :21CH10075
Package   :Code Block
Operating system : Windows
*/
#include<stdio.h>
int main()
{float s,t,d;
int a,u, alpha;

printf("a,u,alpha in order:\n");
scanf("%d%d%d",&a,&u,&alpha);

printf("the time:\n");
scanf("%f",&t);

//here 's' is the displacement

s= u*t + 0.5*alpha*(pow(t,2));

d= s+a;

printf("Distance=%f",d);
return 0;


}
