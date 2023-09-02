// Raju Kumar
// 23EC30036
#include<stdio.h>
int main()
{
  int marks;
  printf(" Enter marks obtained out of 100: ");
  scanf("%d",&marks);
   
  printf("Grade: ");
  if(marks>=90)
  {
    printf("EX");
  }
  else if (marks>=80)
  {
    printf("A");
  }
   else if (marks>=70)
       {
	 printf("B");
	   }
     else if (marks>=60)
       {
	 printf("C");
	   }
     else if (marks>=50)
       {
	 printf("D");
	   }
     else if (marks>=35)
       {
	 printf("p");
	       }
     else
	    {
	      printf("f");
		}
  return 0;
}
