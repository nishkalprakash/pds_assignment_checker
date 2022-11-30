/*
Section 14
Roll no. 22IM10001
Name: Abhijit Kumar
Assignment no: 3
Description: displaying the given pattern.
*/

#include <stdio.h>
int main()
{
int i,c=0,a=1;
printf("Please enter a number-->");
scanf ("%d",&i);
if(1<i<11,c<=i)
{ 
while (a<=i)
{
c++;
if(c==1||c==3||c==5||c==7||c==9)
printf("1 \n");
else
if (c==2||c==4||c==6||c==8||c==10)
{printf("1 0 \n");}
a++;
}
}
return 0;
}

