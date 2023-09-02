//Rollno:<23MT30010>
//Name: <Purva Harde>

#include <stdio.h>
int main()
{
  int mark;
  scanf("%d", &mark);
  if (mark >= 0 && mark <= 100)
    { if (mark>= 90)
	printf("Grade=EX");
      else if (mark>=80)
	printf("Grade=A");
      else if (mark>=70)
	printf("Grade=B");
      else if (mark>=60)
	printf("Grade=C");
      else if (mark>=50)
	printf("Grade=D");
      else if (mark>=35)
	printf("Grade=P");
	else if (mark<35)
	  printf("Grade=F");
     }
      return 0;
    }
      
