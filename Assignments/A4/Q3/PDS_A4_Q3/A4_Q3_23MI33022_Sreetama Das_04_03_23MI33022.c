#include <stdio.h>
int main()
{
  int num,rev, x,y;
  printf("Enter a positive integer ");
  scanf("%d", &num);
  while(num)
    {
      x=num%10;
      num=num/10;
      y=x;
      rev= (y*10)+x;
    }
  if(num==rev)
    printf("Palindrome number ");
  else
    printf("Not a palindrome number");
  return 0;
}
