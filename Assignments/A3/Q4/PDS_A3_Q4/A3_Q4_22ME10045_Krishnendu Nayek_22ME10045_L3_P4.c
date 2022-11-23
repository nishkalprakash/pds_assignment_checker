#include<stdio.h>

int main()
{
float units,bill;
printf("Enter the total number of Electric Units : \n");
scanf("%f",&units);
if(units <= 100)
{
bill=50;
}
else if(units>100 && units<=200)
{
bill=50 + 0.75*(units-100);
}
else if(units>200 && units<=300)
{
bill=50 + 75 + 1.20*(units-200);
}
else if(units>300)
{
bill=50 + 75 + 120 + 1.5*(units-300);
}
printf("The electric bill is Rs.%f \n",bill + 0.2*bill);
return 0;
}

