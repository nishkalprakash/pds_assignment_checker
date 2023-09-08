//name_kajal_kumari
//roll_no._23GG10021
#include<stdio.h>
int main()
{
  int n,reverse,a;
  //a means palindrome
  printf(" enter the number", n);
  scanf("%d",&n);
  while(n!=0)
    { n=n/100;
      count++;
      printf("%d\n",count);
    }
  while(n!=0)
    { a=n%100;
      printf("%d\n",a);
      while(n!=0)
	{ a=n%10;
	  printf("%d\n",a);
      
	  reverse=a*(100^count)+a*(10^count);
      if(reverse=num){
	printf(" number is palindrome");
      }
      else{printf(" number is not palindrome");
      }
      return 0;
	}
