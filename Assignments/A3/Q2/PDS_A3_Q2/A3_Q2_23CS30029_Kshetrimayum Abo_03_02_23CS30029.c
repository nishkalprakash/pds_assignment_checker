//Roll No.: 23CS30029
//Name: Kshetrimayum Abo
#include <stdio.h>
int main()
{
  int mark; //Declaring integer mark variable
  printf("Enter your marks : ");
  scanf("%d",&mark); //Inputting mark from the user
  if (mark>=90&&mark<=100) //Checking the value of mark lying in a particular range and applying its appropriate grade
    printf("Grade EX\n");
  else if (mark>=80&&mark<90)
    printf("Grade A\n");
  else if (mark>=70&&mark<80)
    printf("Grade B\n");
  else if (mark>=60&&mark<70)
    printf("Grade C\n");
  else if (mark>=50&&mark<60)
    printf("Grade D\n");
  else if (mark>=35&&mark<50)
    printf("Grade P\n");
  else if (mark<35&&mark>=0)
    printf("Grade F\n");
  else
    printf("Invalid mark\n"); //Printing "Invalid mark" if marks does not lie between 0 and 100
  return 0;
}
