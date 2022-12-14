/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Test set: A
* Question 1
* Description :print all perfect numbers less than or equal to n
*/
#include<stdio.h>
int n,i,k,div,num;
int check(int n)
{
 for(i=1; i<n; i++)
{
  if(n%i==0)//computing divisors of n
  {
  for(div=i; div<n; div++)
  {
   num+=div;//adding the divisors to get n 
  }
 }
}
 if(num=n)
return num;//checking if the number is perfect
}
  
int main()
{
  printf("enter  POSITIVE integer:");
   scanf("%d", &n);
   if(n<0)
 printf("invalid input");
   for(k=1; k<=n; k++)
{
     if(k=check(n))
      printf("%d ",k);//printing all the perfect numbers upto n
}
return 0;
}
