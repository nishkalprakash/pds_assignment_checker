//Roll no.:23CH10026
//Name: Disha Mukherjee

#include <stdio.h>

int main()
{
  int i,n,num,num1,rnum=0,d=0;
  printf("enter no of digits of number");
  scanf("%d",&n);
  printf("\nEnter number to be checked");
  scanf("%d",&num);
  num1=num;
  for(i=1;i<=n;i++)
    {
      d=num%10;
      rnum=rnum*10+d;
      num=num/10;
    }
  if(num1==rnum)
    printf("\nPalindrome No.");
  else
    printf("\nNot a palindrome no.");
  return 0;
}

      
