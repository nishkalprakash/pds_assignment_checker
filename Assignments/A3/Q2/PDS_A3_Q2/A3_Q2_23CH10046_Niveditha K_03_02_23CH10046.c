#include <stdio.h>
int main()
{
  int mark;
  printf("Enter total mark (out of 100)\n");
    scanf("%d",&mark);

  if(mark>=90 && mark<=100)
    printf("grade = EX\n");
  else if(mark>=80 && mark<90)
    printf("grade = A\n");
  else if(mark>=70 && mark<80)
    printf("grade = B\n");
  else if(mark>=60 && mark<70)
    printf("grade = C\n");
  else if(mark>=50 && mark<60)
    printf("grade = D\n");
  else if(mark>=35 && mark<50)
    printf("grade = P\n");
  else if(mark>=0 && mark<35)
    printf("grade = F\n");
  else if(mark>100)
      printf("invalid input\n");
  else if(mark<0)
    printf("invalid input\n");
  return 0;
  }
