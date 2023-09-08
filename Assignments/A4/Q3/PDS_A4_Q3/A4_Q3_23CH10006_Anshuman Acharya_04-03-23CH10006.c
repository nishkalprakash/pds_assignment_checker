//Name-Anshuman Acharya
//Roll No-23CH10006
#include<stdio.h>

int main()
{
  int num, x,y,z;
  printf("Enter the number: ");
  scanf("%d",&num);
  x = num;
  while(num > 0)
    {
      z = num%10;
      y = y*10 + z;
      num = num/10;
    }
  if(x == y)
    {
      printf("Not a palindrome\n");
    }
  else
    {
      printf("It is a palindrome\n");
    }
  
      
    return 0;
}
