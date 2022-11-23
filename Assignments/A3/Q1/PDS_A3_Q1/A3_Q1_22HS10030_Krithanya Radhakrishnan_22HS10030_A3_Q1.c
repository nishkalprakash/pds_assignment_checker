/* 
Section 14
Roll no. 22HS10030
Name:Krithanya
assignment no:3
desc: program to check validity of time entered
*/
#include <stdio.h>
int main()
{
int hh,mm,ss;
printf(" Enter hours minutes seconds\n");
scanf("%d %d %d",&hh,&mm,&ss);
if (hh>23){
printf("invalid time");
}
else if (mm>59)
{
printf("invalid time");
}
else if (ss>59)
{
printf("invalid time");
}
else 
{
printf("valid time is %d:%d:%d",hh,mm,ss);
}
return 0;
}
