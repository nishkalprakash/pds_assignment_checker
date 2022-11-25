//section 14
//Roll no : 22EC30027
//Name:Karthik
//Assignment no:3
//Description:to display the electricity bill based on the total number of  units used.
#include<stdio.h>
int main()
{
int unit;
float cost;
printf("enter the units of power used");
scanf("%d",&unit);
if (unit<=100)
{
printf("Rs.50/-");
}
else if(unit>100 && unit<=200)
{
cost=50+((unit-100)*0.75)+(50+((unit-100)*0.75))/5;
printf("Rs:%f",cost);
}
else if(unit>200 && unit<=300)
{ 
cost=125+((unit-200)*1.20+(125+((unit-200)*1.20))/5);
printf("Rs:%f",cost);
}
else if(unit>300)
{
cost=245+((unit-300)*1.50+(245+((unit-300)*1.50))/5);
printf("Rs:%f",cost);
}

return 0;
}
