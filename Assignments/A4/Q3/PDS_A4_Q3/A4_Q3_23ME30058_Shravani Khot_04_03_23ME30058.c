#include<stdio.h>
#include<math.h>

int main()
{
  int a,b,c,d=0;

  printf("enter an integer \n");
  scanf("%d",&a);
  a=b;

  while (b!=0)
    {
     c=a%10;
     d=d*10+c;
     b=b/10;

    }
  if (d=a)
    printf("Palindrome \n");

  else
    printf("Non palindrome \n");

      return 0;

      }
  
  
  
