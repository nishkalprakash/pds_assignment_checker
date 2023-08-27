//Roll No.:23CH10026
//Name: Disha Mukherjee

#include <stdio.h>

int main()
{
  int months,age;
  float y;
  printf("enter age of person in months\n");
  scanf("%d",&months);
  y=months/12.0;
  if(y>(int)y)
    age=(int)y+1;
  else
    age=(int)y;
  printf("\nThe person is %d years old.",age);
  return 0;
}
