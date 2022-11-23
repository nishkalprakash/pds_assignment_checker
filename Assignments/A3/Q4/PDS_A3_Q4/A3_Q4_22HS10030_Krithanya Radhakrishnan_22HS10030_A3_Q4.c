/* 
Section 14
Roll no. 22HS10030
Name:Krithanya
assignment no:3
desc: program to compute electricity bill
*/
#include <stdio.h>
int main()
{
int n;
float s;
printf("enter no. of units");
scanf("%d",&n);
if (n<=100)
{
s=50;
}
else if (n>100 &&n<200)
{
s=50+(n-100)*0.75;
}
else if (n>200 && n<=300)
{
s=50+ (n-200)*1.2 +75;
}
else 
{
s=50+ (n-300)*1.5 + 195;
}
printf("the final bill is %f",1.2*s);
return 0;
}

