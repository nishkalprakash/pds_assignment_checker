/* 
Section 14
Roll no. 22HS10030
Name:Krithanya
assignment no:3
desc: program to check validity date and day
*/
#include <stdio.h>
int main()
{
int dd,mm;
printf("enter the date in dd mm format");
scanf("%d %d",&dd,&mm);
if (dd>31 || mm>12)
{
printf("invalid");
}
else
{
printf("valid");
}
return 0;
}

