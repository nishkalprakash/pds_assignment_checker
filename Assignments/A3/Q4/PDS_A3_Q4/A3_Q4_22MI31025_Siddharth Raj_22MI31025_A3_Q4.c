/*Section 14
Roll no:22MI31025
Name:Siddharth Raj
Assignment no:3
description:Electricity Bill
*/
#include <stdio.h>
int main()
{
float amt,bill,unit;//decalration of variables
printf("Enter power consumed in KWh:");
scanf("%f",&unit);//input statement
if (unit>=0 && unit <=100)//conditions to find unit lies in which range
{
amt=50;
}
else if(unit>100&&unit<=200)
{
bill=50+(unit-100)*0.75;
}
else if(unit>200&&unit<=300)
{
bill=50+100*0.75+(unit-200)*1.2;
}
else if(unit>300)
{bill=50+100*0.75+100*1.20+(unit-300)*1.5;
}
amt=bill+0.2*bill;//calculating actual bill (adding subcharge)
printf("Total amount=%f\n",amt);//printing the bill
return 0;
}

