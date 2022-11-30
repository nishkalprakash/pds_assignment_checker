/*Assignment 4
  Muskan
  Section - 14*/
#include<stdio.h>
int main()
{
int n,count=0,factor;
printf("Enter a number :");
scanf("%d",&n);
if((n>0)&&(n<9999)){
while(count<=n)
{
count=count+1;
factor=n%(count);
if(factor==0)
{
printf("%d\n",count);
}
}
}
else if ((n>-9999)&&(n<0)){
while(count<=(n*-1))
{
count=count+1;
factor=n%(count);
if(factor==0)
{
printf("%d\n",count);
}
}
}
return 0;
}
   
