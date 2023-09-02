//Roll No:<23NA10017>
//Name:<Harshavarda Kumarasamy>

#include <stdio.h>

int main()
{
  int mark;

  printf("Enter total mark of student in subject out of 100:\n");
  scanf("%d", &mark);

  if(mark <= 100 && mark >= 0)
    { if(mark >= 90)
	printf("Grade=EX");
      else if(mark >= 80)
	printf("Grade=A");
      else if(mark >= 70)
	printf("Grade=B");
      else if(mark >= 60)
	printf("Grade=C");
      else if(mark >= 50)
	printf("Grade=D");
      else if(mark >= 35)
	printf("Grade=P");
      else
	printf("Grade=F");
    }
  else
    printf("Invalid Input");

  return 0;

}
      
      
