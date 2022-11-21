#include<stdio.h>
#include<math.h>
int main()
{
double y,n,x;
scanf("%lf %lf",&y,&n);    //read the values
x=y*(pow(4,n)-1)/3;        //performing GP calculation of given situation
printf("%lf",x);
return 0;
}
