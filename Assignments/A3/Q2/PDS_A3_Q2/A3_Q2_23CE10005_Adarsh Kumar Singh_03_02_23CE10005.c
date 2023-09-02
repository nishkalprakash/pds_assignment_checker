// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include<stdio.h>
int main ()
{
  int marks;
  printf("\nEnter the marks scored in the subject out of 100: ");
  scanf("%d", &marks);
  printf("\nYour grade in the subject is ");
  if (marks<=100 && marks>=90)
    {
      printf("Ex.");
    }
  else if (marks<=90 && marks>=80)
    {
      printf("A.");
    }
  else if (marks<=80 && marks>=70)
    {
      printf("B.");
    }
  else if (marks<=70 && marks>=60)
    {
      printf("C.");
    }
  else if (marks<=60 && marks>=50)
    {
      printf("D.");
    }
  else if (marks<=50 && marks>=35)
    {
      printf("P.");
    }
  else if (marks<=35 && marks>=0)
    {
      printf("F.");
    }
  else
    {
      printf("not valid because of invalid input.");
    }
  printf("\n\nThankyou\n\n");
  return 0;
}
  
