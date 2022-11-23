//section 14 
//Roll no : 22EC30027
//Name:Karthik
//Assignment no:3
//Description:Program that reads three integers representing time of a day

#include<stdio.h>
int main()
{
int SS,MM,HH;//declaring the variables for time
printf("enter the time to be displayed as SS,MM,HH");
scanf("%d%d%d",&SS,&MM,&HH);
if (SS<=60 && SS>=00)
{
if(MM<=59 && MM>=00)
{
if(HH<=24 && HH>=00) 
{
printf("Valid time %d:%d:%d",HH,MM,SS);//to print the time as the given inputs
}
}
}
else {
printf("invalid time");//prints "invalid time" if the inputs dont satisfy the convention
}
return 0;
}
