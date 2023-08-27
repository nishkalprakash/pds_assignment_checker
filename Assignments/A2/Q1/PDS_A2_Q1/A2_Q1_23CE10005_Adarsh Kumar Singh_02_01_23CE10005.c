// Roll No. 23CE10005
// Name - Adarsh Kumar Singh

#include<stdio.h>
int main ()
{
  float x;
  printf("Enter any Real Number: ");
  scanf("%f", &x);
  int i;
  if (x>=0)
    {
      i=(int)0+x;
    }
  else
    {
      i=(int)x-1;
    }
  float f=x-i;
  printf("\n\nThe integral part of the entered number is %d.\n\n", i);
  printf("The fractional part of the entered number\ndisplayed upto 3 decimal places is %.3f.\n", f);
  printf("Thankyou\n");
  return 0;
}
  
