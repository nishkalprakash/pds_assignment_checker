// Roll No. 23CE10005
// Name - Adarsh Kumar Singh

#include<stdio.h>
int main ()
{
  int x;
  printf("\nEnter your age in months: ");
  scanf("%d", &x);
  float y=x/12.0;
  int z=(int)0+y;
  if (y==x/12)
    {
      printf("\nYour age is %d years.\n", z);
    }
  else if (y>x/12)
    {
      printf("\nYour age is %d years.\n", z+1);
    }
  printf("Thankyou");
  return 0;
}
