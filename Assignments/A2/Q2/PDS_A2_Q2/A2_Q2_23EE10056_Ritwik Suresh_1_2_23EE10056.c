// Roll no. : 23EE10056 //
// Name : Ritwik Suresh //
#include<stdio.h>
int main() 
{
  int months, years ;
  printf("Enter the value of your age in months:\n");
  scanf("%d",&months);
  if(months%2 == 0)
    {
      years =(months/12) ;
      printf("Your age in years is :%d\n",years);
      return 0;
    }
  else
    {
      years = (months/12) ;
      years = years + 1; 
      printf("Your age in years is:%d\n",years);
      return 0;
    }
}

