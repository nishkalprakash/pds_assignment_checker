#include<stdio.h>
int main()
{
  int a,n,rev;
  
  rev=0;
  printf("enter the number:\n");
  scanf("%d",&n);
  int p=n;
  for(int i=1;n>0;i++)
    {
      a=n%10;
      rev= rev*10+a;
      n=n/10;

  
    }
  printf("the opposite number is:%d\n",rev);
  if(rev==p)
    printf("the number is a palindrome");
  else
    printf("the number is not a palindrome");

  return 0;
}  
      
      
