/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 3

Description-Program to calculate bill
*/
#include <stdio.h>
int main()
{
float unit,bill;
printf("Enter number of units\n");
scanf("%f",&unit);
if(unit<=100)
bill=50;
else if((unit>100)&&(unit<=200))
bill=50+(unit-100)*0.75;
else if((unit>200)&&(unit<=300))
bill=50+100*0.75+(unit-200)*1.20;
else
bill=50+75+120+(unit-300)*(1.50);

bill=1.2*bill;
printf("Total bill %f ",bill);
return 0;
}
