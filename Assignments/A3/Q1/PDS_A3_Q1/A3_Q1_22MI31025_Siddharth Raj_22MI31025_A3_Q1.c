/*Section 14
Roll no:22MI31025
Name:Siddharth Raj
Assignment no:3
description:Program to show time
*/
#include <stdio.h>
int main()
{
int ss,mm,hh;//declaration of variables
printf("Enter seconds,minutes,hours\n");
scanf("%d %d %d",&ss,&mm,&hh);//input statement
if(ss<60&&mm<60&&hh<24)//conditions
printf("Valid time-%d:%d:%d\n",hh,mm,ss);
else
printf("Invalid time\n");//print statement
return 0;
}
