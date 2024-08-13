#include <stdio.h>
#include <math.h>
int main()
{
float alpha,rho,rs,ts,d;
double tp;
printf("alpha=\n" );
scanf("%f",&alpha);
printf("rho=\n" );
scanf("%f",&rho);
printf("rs=\n" );
scanf("%f",&rs);
printf("ts=\n" );
scanf("%f",&ts);
printf("d=\n" );
scanf("%f",&d);
tp=sqrt(rs*(sqrt((1-alpha)/rho))/(2*d)); 
printf("tp=%f",tp);
return 0;
}

