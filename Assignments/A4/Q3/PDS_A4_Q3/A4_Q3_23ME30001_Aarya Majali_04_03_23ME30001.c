#include <stdio.h>
#include <stdlib.h>
int main()
{
  int x,reverse=0,y=0;
  printf("enter a positive integer x");
  scanf("%d",&x);
  y=x;
  while (y>0)
        {
	  reverse=reverse*10 + (y%10);   //for obtaining the reverse of the entered number
	  y=y/10;
	}
  if (reverse==x)       //condition
    {
      printf("the number entered is a palindrome");
    }
  else printf("the number entered is not a palindrome");
  return 0;
}
	    
  
  
