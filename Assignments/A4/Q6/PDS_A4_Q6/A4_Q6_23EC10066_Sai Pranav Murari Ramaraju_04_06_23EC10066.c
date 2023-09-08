#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,n,digit,sum,small=33,x,s_n;
  for(i=1;i<=20;i++)
  {
    n = rand()%1000 + 5000;
    n=x;
    printf("the random numbers are : %d\n",n);
    sum=0;
  }
  while(n!=0){
    digit = n%10;
    sum=sum+digit;
    n=n/10;
  
  printf("sum of digits is : %d\n",sum);
  if(sum<small){
    small=sum;
    s_n=x;
   }
  }
  printf("the smallest number is %d\n",small);
  printf("the no with smallest sum is %d\n",s_n);
  return 0;
    
}
