/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 3

Description-Program to read and represent time

*/
#include <stdio.h>
int main()
{
int s,m,h;
printf("Enter seconds ");
scanf("%d",&s);
printf("Enter minutes ");
scanf("%d",&m);
printf("Enter hours ");
scanf("%d",&h);
if(s>59)
printf("Invalid time\n");
else
{
if(m>59)
printf("Invalid time\n");
else
{
if(h>23)
printf("Invalid time\n");
else
{
if(s<0)
printf("Invalid time\n");
else
{
if(m<0)
printf("Invalid time\n");
else
{
if(h<0)
printf("Invalid time\n");
else
printf("Valid time-%2d %2d %2d\n",h,m,s);
}
}
}
}
}
return 0;
}

