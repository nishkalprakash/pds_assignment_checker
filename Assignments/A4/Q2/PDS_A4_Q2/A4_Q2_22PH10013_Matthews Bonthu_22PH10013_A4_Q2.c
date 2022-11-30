#include <stdio.h>
 int main ( )
{
 
 int sum,n;
 printf("please enter the number");
 scanf("%d",&n);
 sum=0;
  
 while (n!=0)
{
   sum=sum+n%10;
   n=n/10;
   }
 printf("sum of the digits is %d",sum);
}
