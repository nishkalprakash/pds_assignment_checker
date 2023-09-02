// Roll no. : 23EE10056
// Name : Ritwik Suresh
#include<stdio.h>
int main()
{
  int marks;
  printf("Enter the total marks of the student in the subject:\n");
  scanf("%d",&marks);
  if(marks>100 || marks<0)
    {
      printf("The marks you have entered are invalid.\n");
    }
  else if(marks >=90 && marks<=100)
    {
      printf("EX Grade.\n");
      return 0;
    }
  else if(marks>=80 && marks<90)
    {
      printf("A grade.\n");
      return 0;
    }
  else if(marks>=70 && marks<80)
    {
      printf("B grade.\n");
      return 0;
    }
  else if(marks>=60 && marks<70)
    {
      printf("C grade.\n");
      return 0;
    }
  else if(marks>=50 && marks<60)
    {
      printf("D grade.\n");
      return 0;
    }
  else if(marks>=35 && marks<50)
    {
      printf("P grade.\n");
      return 0;
    }
  else
    {
      printf("F grade.\n");
      return 0;
    }
}
