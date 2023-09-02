//Name:Gargi Mukherjee
//Roll no.:23ME10025
#include <stdio.h>
int main()
{
  int mark;
  printf("Enter total mark of student in a subject out of 100:");
  scanf("%d", &mark);
  if (mark>=90)
    {
    printf("Grade=EX");
    }
  if (mark<90 && mark>=80)
    {
    printf("Grade=A");
    }
  if (mark<80 && mark>=70)
    {
    printf("Grade=B");
    }
  if (mark<70 && mark>=60)
    {
    printf("Grade=C");
    }
  if (mark<60 && mark>=50)
    {
     printf("Grade=D");
    }
  if (mark<50 && mark>=35)
    {
    printf("Grade=P");
    }
  if (mark<35)
    {
    printf("Grade=F");
    }
  return 0;
}
  
  
