#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
int n;
printf("Enter upper limit :\n");
scanf("%d",&n);
int sum=0;
if(n>0)
{
int i;
for(i=1;i<=n;i++)
{
 int count=0;
 int temp=i;
 while(temp>0)
 {
  temp=temp/10;
  count++;
 }
 int r,temp2=i;
 while(temp2>0)
 {
  r=temp2%10;
  sum+= pow(r,count);
  temp2=temp2/10;
 }
 if(i==sum)
printf("%d ",i);
sum=0;
}
}
else
printf("Invalid Input \n");
return 0;
}
  
 
