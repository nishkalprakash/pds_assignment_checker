#include <stdio.h>
int main()
{
  int age, yr;
  printf("Enter age (in months:)");
  scanf("%d", &age);
  yr = age/12;
  printf("The person is %d years old\n", yr);
  return 0;
}
