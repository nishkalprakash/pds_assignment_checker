//ROLL NO:23ME10063
//NAME:Prem Pastagia

#include <stdio.h>
int main()
{
  int months,years;
  printf("Please enter your age in months\n");
  scanf("%d", &months);
  if (months%12==0)
     years=(months/12);
  else
    years=(months/12)+1;
  printf("The person is %d years old\n",years);
  return 0;
}
