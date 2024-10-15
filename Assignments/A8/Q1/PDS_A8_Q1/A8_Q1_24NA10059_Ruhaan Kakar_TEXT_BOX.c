#include <stdio.h>
#include <math.h>

int digits(int a)
{
 int sum = 0;
 if (a/10<10)
  return 1;
 if (a/10>10)
  return(1 + digits(a/10)); 
}

int IsPalindrome(int x, int d)
{
 if(d<2)
 return 1;
 int flag = 0;
 if (x%10 == x/pow(10,d-1))
  return(IsPalindrome((x % (int)(pow(10,d-1)))/10,d-2));  
 else 
  return(flag = 1);
}

int main()
{
 
  int n,flag;
  scanf("%d",&n);
  int d = digits(n);
  printf("Number of digis are %d/n",d);
  flag = IsPalindrome(n,d);
  if (flag==0)  printf("%d is a palindrome",n);
  else printf("%d is not a palindrome",n);
  return 0;
  }