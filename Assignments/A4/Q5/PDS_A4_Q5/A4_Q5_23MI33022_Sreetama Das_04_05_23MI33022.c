#include <stdio.h>
int main()
{
  int n, x, sum=0, max=0, max2=0;
  printf("Enter an integer= ");
  scanf("%d", &n);
  while(n)
    {
      x= n%10; //extracting each digits from the given integer
  n=n/10;
  sum= sum+x; //adding all the digits in the integer
  if(x>max) //checking the largest digit in the integer
    {
      max2=max;
      max=x;
	}
   else if(x>max2 && x!=max)  //checking the second largest digit in the integer
  {
    max2=x;
  }
    }
  printf("Largest= %d\n", max);
   printf("Second largest= %d\n", max2);
  printf("Sum of digits is %d\n ", sum);
  return 0;
}
