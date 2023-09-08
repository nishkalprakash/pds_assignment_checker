#include<stdio.h>
int main ()
{
  
  int n2,n,rev=0;
  printf("enter a number \n");
  scanf("%d",&n);
  n2 = n;
  while (n!=0)
    {
      rev=rev*10+(n%10);
      n=n/10;
    }
  if(n2==rev)
    {
      printf("the given number is a palindrome");
    }
  else if(n2!=rev)
    {
      printf("the given number isn't a palindrome");
    }
  return 0;
}

  
   
