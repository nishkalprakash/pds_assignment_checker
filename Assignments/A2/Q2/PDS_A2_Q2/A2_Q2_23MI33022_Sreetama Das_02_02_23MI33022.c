#include <stdio.h>
int main()
{
  int a,x,y;
  printf("Enter the age of the person in months=");
  scanf("%d", &a);
  x= a/12;
  y= x+1;
  if(a%12==0)
    {
    printf("The person's age is= %d\n", x);
    }
  else
    {
      printf("The person's age is= %d\n", y);
    }
  return 0;
}
