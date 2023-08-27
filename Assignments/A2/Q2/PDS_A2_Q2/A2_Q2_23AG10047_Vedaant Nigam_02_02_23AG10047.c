#include <stdio.h>
int main ()
{
  int age,years;
  printf("enter your age in months\n");
  scanf("%d",&age);
  years= age/12 + 1;
  printf("the person is %d years old",years);
  return 0;
}
