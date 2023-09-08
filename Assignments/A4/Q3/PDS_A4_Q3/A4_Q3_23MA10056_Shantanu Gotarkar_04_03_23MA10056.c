#include <stdio.h>
int main()

{
  int n, paln=0, a ;
  printf("Enter the input n");
  scanf("%d",&n);
  a=n;
    while (n>0)
      { paln =( paln*10) + (n%10) ;  // to print a palindrome
	n=n/10 ;
      }
    if( paln == a)
      printf("It is a palindrome ");// palindrome found 
    else
      printf("It is not a palindrome ");

    return 0 ;
}
      
