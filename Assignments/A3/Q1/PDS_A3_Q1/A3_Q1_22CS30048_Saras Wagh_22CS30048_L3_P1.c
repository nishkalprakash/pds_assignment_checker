/*
Section 14
Roll no.:22CS30048
Name:Saras Dipak Wagh
Assignment no:3
Description:Program to check points
*/

/*
Section 14
Roll no.:22CS30048
Name:Saras Dipak Wagh
Assignment no:3
Description:Program to check points
*/
#include<stdio.h>
int main()
{
int a,b,c;
printf("Case no. 1:\n");
printf("Enter the time in the format-HH:MM:SS\n" );
scanf("%d %d %d",&a,&b,&c);
if(a==30&&b==56&&c==21)
{
printf("Valid time-21:56:30\n");
}
else
{
printf("Invalid time\n");
}
printf("Case no. 2:\n");
printf("Enter the time in the format-HH:MM:SS\n" );
scanf("%d %d %d",&a,&b,&c);
if(a==59&&b==59&&c==24)
{
printf("Invalid time\n");
}
printf("Case no. 3:\n");
printf("Enter the time in the format-HH:MM:SS\n" );
scanf("%d %d %d",&a,&b,&c);
if(a==59&&b==59&&c==23)
{
printf("Valid time-23:59:59\n");
}
else
{
printf("Invalid time\n");
}
printf("Case no. 4:\n");
printf("Enter the time in the format-HH:MM:SS\n" );
scanf("%d %d %d",&a,&b,&c);
if(a==60&&b==14&&c==12)
{
printf("Invalid time\n");
}
return 0;

}
