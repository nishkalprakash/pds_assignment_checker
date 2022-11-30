//section 14
//Roll no : 22EC30027
//Name:Karthik
//Assignment no:4
//Description:To display all factors for a given number

#include<stdio.h>
int main()
{
int n,i;
printf("enter the number to find the factors for:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
printf("%d \n",i);
}
}
for(i=1;i>=n;i++)
{
if(n%i==0)
{
printf("%d \n",i);
}
}
return 0;
}
