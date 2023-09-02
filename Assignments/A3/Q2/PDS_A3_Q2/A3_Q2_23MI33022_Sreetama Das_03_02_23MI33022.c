#include <stdio.h>
int main()
{
  int mark;
  printf("Enter the total mark of the student in a subject out of 100=");
  scanf("%d", &mark);
  if(mark>100)
    {
      printf("Wrong input");
    }
  else if(mark>=90)
    {
      printf("Grade is EX");
    }
  else if(mark>=80 && mark<90)
    {
      printf("Grade is A");
    }
  else if(mark>=70 && mark<80)
    {
      printf("Grade is B");
    }
  else if(mark>=60 && mark<70)
    {
      printf("Grade is C");
    }
  else if(mark>=50 && mark<60)
    {
      printf("Grade is D");
    }
  else if(mark>=35 && mark<50)
    {
      printf("Grade is P");
    }
  else
    {
      printf("Grade is F");
    }
  return 0;
}
