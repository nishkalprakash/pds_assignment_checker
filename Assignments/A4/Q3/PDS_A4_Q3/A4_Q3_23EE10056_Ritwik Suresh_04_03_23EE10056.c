#include<stdio.h>
int main()
{
  int n,i,num1,num2=0;
  printf("Enter the value of n:\n");
  scanf("%d",&n);
  num1 = n;
  while(num1/10 >0)
    {
      num2 += num1%10;
      num2 = num2*10;
      num1 /=10;
      if(num1/10==0)
	{
	  num2 += num1;
	}
    }
  if(n == num2)
    {
      printf("%d is a palindrome\n",n);
    }
  else
    printf("%d is not a palindrome\n",n);
  return 0;
}
  
	      
      
