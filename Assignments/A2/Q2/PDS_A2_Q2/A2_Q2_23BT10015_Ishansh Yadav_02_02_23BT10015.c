#include<stdio.h>

int main()
{ int age_months;
  printf("Enter your age in months:");
  scanf("%d", &age_months);
  int age_years= age_months/12;
  printf("Your age in years is %d\n", age_years);
  return 0;
}
