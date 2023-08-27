#include <stdio.h>
int main()
{
  int ageinmonths; int ageinyears ;
  printf("Enter the age in months");
  scanf("%d",&ageinmonths);
  ageinyears= ageinmonths/12 ;
  printf("The age in years is %d\n", ageinyears);
  return 0;
}
  
