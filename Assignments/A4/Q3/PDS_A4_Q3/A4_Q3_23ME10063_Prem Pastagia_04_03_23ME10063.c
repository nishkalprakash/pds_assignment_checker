// Roll No. 23ME10063
// Name: Prem Pastagia

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n,rev=0,a=0;
  printf("Enter a positive integer:\n");
  scanf("%d",&n);
  a=n;
  while (n>0)
    {
      rev=rev*10+(n%10);
      n=n/10;
    }
  if (rev==a){printf("The given number is palindrome\n");}
  else printf("The given number is not palindrome\n");  
  return 0;
}
