/* 
Section 14
Roll no. 22HS10030
Name:Krithanya
assignment no:3
desc: program to read numbers
*/
#include <stdio.h>
int main()
{
int n,t,u;
printf("enter two digit number from 20 to 99");
scanf("%d",&n);
t=n/10;
if (t==2)
{
printf("twenty");
}
else if (t==3)
{
printf("thirty");
}
else if (t==4)
{
printf("forty");
}
else if (t==5)
{
printf("fifty");
}
else if (t==6)
{
printf("sixty");
}
else if (t==7)
{
printf("seventy");
}
else if (t==8)
{
printf("eighty");
}
else 
{
printf("ninety");
}
u=n%10;
if (u==1)
{
printf("one");
}
else if (u==2)
{
printf("two");
}
else if (u==3)
{
printf("three");
}
else if (u==4)
{
printf("four");
}
else if (u==5)
{
printf("five");
}else if (u==6)
{
printf("six");
}
else if (u==7)
{
printf("seven");
}
else if (u==8)
{
printf("eight");
}
else if (u==9)
{
printf("nine");
}
return 0;
}



