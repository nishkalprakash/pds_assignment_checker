#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main ()
{float salary,b,c,a,netincome,t,tax;
printf("Enter monthly salary\n");
scanf("%f",&salary);
printf("Enter house loan amount\n");
scanf("%f",&a);
printf("Enter yearly life insurance premium to be paid \n");
scanf("%f",&b);
printf("Enter yearly medical insurance amount to be paid\n");
scanf("%f",&c);
netincome=salary*12;
t=netincome;
if(netincome>1000000)
{if(a<250000)
{t=t-a;}
else{t=netincome-250000;}
if(b<150000)
{t=t-b;}
else{t=netincome-150000;}
if(c<50000)
{t=t-c;}
else{t=t-50000;}
}
if(t>1500000)
{tax=187500+0.30*t;}
else if(t>1250000)
{tax=125000+0.25*t;}
else if(t>1000000)
{tax=75000+0.20*t;}
else if(t>750000)
{tax=37500+0.15*t;}
else if(t>500000)
{tax=12500+0.10*t;}
else if (t>250000)
{tax=0.05*t;}
else if(t>=0)
{tax=0;}
printf("tax = %.0f\n",tax);
return 0 ;
}