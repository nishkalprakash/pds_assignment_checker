#include <stdio.h>
// Roll no. 23IE10031
// Name - Om singh Jadon

int main()
{
  int months;
  printf("Months: ");
  scanf("%d", &months);
  int years = (months/12);
  printf("The Person is %d years old.\n", ((months%12)==0)?years:(years+1));
}

