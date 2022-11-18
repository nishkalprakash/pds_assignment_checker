#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{int day;
float f,m,k,n;

printf("Enter number of available machines\n");
scanf("%f",&m);
printf("Enter day number\n");
scanf("%d",&day);
switch (day)
{
case 1:
{printf("manufactured cars- %.0f",m);}
break;
case 2:
{n=round(m+(m/2)+(m/4));
printf("Number of cars manufactured = %.0f",n);}
break;
case 3:
{printf("Enter the number of machines kept under inspection\n");
scanf("%f",&k);
n=round(m-k+((m-k)/2)+((m-k)/4));
printf("Number of cars manufactured = %.0f",n);}
break;
case 6:
{printf("Enter the number of machines kept under inspection\n");
scanf("%f",&k);
n=round((m-k+((m-k)/2)+((m-k)/4)));
printf("Number of cars manufactured = %.0f",n);}
break;
default:
{printf("Enter boosting fraction\n");
scanf("%f",&f);
n=round(m+(m*f));
printf("Number of cars manufactured = %.0f",n);}
break;
}
return 0 ;    
}