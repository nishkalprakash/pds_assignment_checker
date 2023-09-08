//Rollno:<23MT30010>
//Name:<Purva Harde>

#include <stdio.h>
int main()
{
  int a, b, c=0, copy;
  printf("Enter the positive integer:");
  scanf("%d", &a);
  copy = a;
  while(a!=0)
    {
      b = a%10;
      c = c*10 + b;
      a = a/10;
    }
  if(a == c)
    printf("a palindrome");
  else
    
      printf("not a palindrome");
  return 0;
}
    

  
  
  
