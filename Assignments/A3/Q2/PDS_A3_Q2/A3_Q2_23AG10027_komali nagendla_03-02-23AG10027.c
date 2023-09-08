//Roll no.:<23AG10027>
//Name:<Nagendla Komali>

#include <stdio.h>
int main()
{
  int mark;
  printf("Enter the marks of a student");
  scanf("%d",&mark);

  if (mark>=90)
	     {
	       printf("Enter the grade Ex");
	     }
  else if (mark>=80)
		  {
		    printf("Enter the grade A");
		  }
  else if (mark>=70)
		  {
		    printf("Enter the grade B");
		  }
  else if (mark>=60)
		  {
		    printf("Enter the grade C");
		  }
  else if (mark>=50)
		  {
		    printf("Enter the grade D");
		  }
  else if (mark>=35)
		  {
		    printf("Enter the grade  P");
		  }
  else if (mark<35)
		  {
		    printf("Enter the grade F");
		  }
  return 0;
}
